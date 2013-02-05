/* Copyright 1995-2001 Roger P. Woods, M.D. */
/* Modified 12/4/01 */

/*
 * This program will change the directory path of the file
 *  that is designated to be resliced in a .air file.
 *
 * The name of the file itself will not be changed
 */

#include "AIR.h"

AIR_Error AIR_do_cd_air(const char *air_file, const char *new_directory, const char *sep)

{
	struct AIR_Air16 air1;
	
	{
		AIR_Error errcode=AIR_read_air16(air_file,&air1);
		if(errcode!=0){
			return(errcode);
		}
	}

	/* Patch in the new directory */
	{
		/* Make sure that the directory itself isn't too long to store */
		if(strlen(new_directory)>=(size_t)AIR_CONFIG_MAX_PATH_LENGTH){
			printf("%s: %d: ",__FILE__,__LINE__);
			printf("Directory name %s is too long to incorporate into a .air file\n",new_directory);
			return AIR_PATH_TOO_LONG_ERROR;
		}
		/* 
		 * Note: if the local path separator is used in a foreign path after the last
		 * foreign path separator (*sep), the path will be clipped inappropriately
		 * However, there isn't much to be done about this in any case since the file itself
		 * presumably cannot exist locally with that name (e.g., 'C:\dir\image/file' will
		 * become 'file', not 'image/file' when porting from PC to UNIX, but 'image/file' is not
		 * a legal UNIX file name.
		 */
		{
			const char *filename;
			if(sep!=NULL){
				/* Advance to last occurrence of sep, if any, in air1.r_file */
				filename=strrchr(air1.r_file,(int)*sep);
				if(filename) filename++;
				else filename=air1.r_file;
			}
			else filename=air1.r_file;
			/* Advance to last occurrence of local separator, if any, in filename */
			filename=AIR_file_from_path(filename);
			{
				char new_filename[AIR_CONFIG_MAX_PATH_LENGTH];
							
				/* Copy the new directory name into the struct */
				strcpy(new_filename, new_directory);
							
				/* Add a path separator if needed */
				if(new_filename[strlen(new_filename)-1]!=AIR_CONFIG_PATH_SEP){
	
					/* Make sure there is space */
					if(strlen(new_filename)+strlen(AIR_CONFIG_PATH_SEP_NULL)>=(size_t)AIR_CONFIG_MAX_PATH_LENGTH){
						printf("%s: %d: ",__FILE__,__LINE__);
						printf("Directory name %s is too long to incorporate into a .air file\n",new_filename);
						return AIR_PATH_TOO_LONG_ERROR;
					}
					strcat(new_filename,AIR_CONFIG_PATH_SEP_NULL);
				}
				
				/* Reappend the file name if there is space */
				if(strlen(new_filename)+strlen(filename)>=(size_t)AIR_CONFIG_MAX_PATH_LENGTH){
					printf("%s: %d: ",__FILE__,__LINE__);
					printf("Directory name %s, when combined with the file name %s, becomes too long to incorporate into a .air file\n",new_filename,filename);
					return AIR_PATH_TOO_LONG_ERROR;
				}
				strcat(new_filename,filename);
				strncpy(air1.r_file,new_filename,(size_t)AIR_CONFIG_MAX_PATH_LENGTH-1);
			}
			air1.r_file[AIR_CONFIG_MAX_PATH_LENGTH-1]='\0';
		}
	}

	/* print warning if reslice file doesn't exist, return error if it does exist but isn't compatible */
	{
		int flag[8];
		struct AIR_Fptrs fps;
		struct AIR_Key_info new_info;
		
		(void)AIR_open_header(air1.r_file,&fps,&new_info,flag);
		if(fps.errcode!=0){
			AIR_close_header(&fps);
			if(fps.errcode!=0){
				printf("%s: %d: ",__FILE__,__LINE__);
				printf("Failed to close file %s\n",air1.r_file);
				return(fps.errcode);
			}
			printf("WARNING: '%s' now targets a nonexistent reslice file: '%s'\n",air_file,air1.r_file);
		}
		else{
			AIR_close_header(&fps);
			if(fps.errcode!=0){
				printf("%s: %d: ",__FILE__,__LINE__);
				printf("Failed to close file %s\n",air1.r_file);
				return(fps.errcode);
			}
			{
				AIR_Error errcode=AIR_same_dim(&air1.r,&new_info);
				if(errcode!=0){
					printf("%s: %d: ",__FILE__,__LINE__);
					printf("'%s' not modified due to matrix size discrepancy\n",air_file);
					printf("Dimensions of reslice matrix in .air file %s: %u %u %u\n",air_file,air1.r.x_dim,air1.r.y_dim,air1.r.z_dim);
					printf("Dimensions of matrix in image file %s: %u %u %u\n",air1.r_file,new_info.x_dim,new_info.y_dim,new_info.z_dim);
					return(errcode);
				}
			}
			{
				AIR_Error errcode=AIR_same_size(&air1.r,&new_info);
				if(errcode!=0){
					printf("%s: %d: ",__FILE__,__LINE__);
					printf("'%s' not modified due to voxel size discrepancy\n",air_file);
					printf("Voxel dimensions in .air file %s: %.4f %.4f %.4f\n",air_file,air1.r.x_size,air1.r.y_size,air1.r.z_size);
					printf("Voxel dimensions in image file %s: %.4f %.4f %.4f\n",air1.r_file,new_info.x_size,new_info.y_size,new_info.z_size);
					return(errcode);
				}
			}
		}
	}
	/* Write out the air file */
	{
		double *e[4];
				
		e[0]=air1.e[0];
		e[1]=air1.e[1];
		e[2]=air1.e[2];
		e[3]=air1.e[3];
				
		{
			AIR_Error errcode=AIR_write_air16(air_file,TRUE,e,TRUE,&air1);
			if(errcode!=0){
				return(errcode);
			}
		}
	}

	return 0;
}
