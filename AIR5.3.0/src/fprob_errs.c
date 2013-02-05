/* Copyright 1999-2005 Roger P. Woods, M.D. */
/* Modified 3/23/11 */

/*
 * void fprob_errs()
 *
 * writes a string describing errors generated by fprobw
 *
 */

#include "AIR.h"

void AIR_fprob_errs(const AIR_Error errornumber, char *str, char *err)

{
	str[0]='\0';
	err[0]='\0';
	
	switch(errornumber){
		
		/* Common global errors */
		case AIR_MEMORY_ALLOCATION_ERROR:
			sprintf(err,"AIR_MEMORY_ALLOCATION_ERROR");
			sprintf(str,"Memory allocation error.");
			break;
			
		case AIR_STRING_NOT_DOUBLE_ERROR:
			sprintf(err,"AIR_STRING_NOT_DOUBLE_ERROR");
			sprintf(str,"string could not be converted to double.");
			break;

		case AIR_STRING_NOT_FLOAT_ERROR:
			sprintf(err,"AIR_STRING_NOT_FLOAT_ERROR");
			sprintf(str,"string could not be converted to float.");
			break;
			
		case AIR_STRING_NOT_INT_ERROR:
			sprintf(err,"AIR_STRING_NOT_INT_ERROR");
			sprintf(str,"string could not be converted to int.");
			break;
                        
		case AIR_STRING_NOT_LONG_ERROR:
			sprintf(err,"AIR_STRING_NOT_LONG_ERROR");
			sprintf(str,"string could not be converted to long int.");
			break;
				
		case AIR_STRING_NOT_SCHAR_ERROR:
			sprintf(err,"AIR_STRING_NOT_SCHAR_ERROR");
			sprintf(str,"string could not be converted to signed char.");
			break;

		case AIR_STRING_NOT_SHORT_ERROR:
			sprintf(err,"AIR_STRING_NOT_SHORT_ERROR");
			sprintf(str,"string could not be converted to short int.");
			break;

		case AIR_STRING_NOT_UCHAR_ERROR:
			sprintf(err,"AIR_STRING_NOT_UCHAR_ERROR");
			sprintf(str,"string could not be converted to unsigned char.");
			break;

		case AIR_STRING_NOT_UINT_ERROR:
			sprintf(err,"AIR_STRING_NOT_UINT_ERROR");
			sprintf(str,"string could not be converted to unsigned int.");
			break;
                        
		case AIR_STRING_NOT_ULONG_ERROR:
			sprintf(err,"AIR_STRING_NOT_ULONG_ERROR");
			sprintf(str,"string could not be converted to unsigned long int.");
			break;
				
		case AIR_STRING_NOT_USHORT_ERROR:
			sprintf(err,"AIR_STRING_NOT_USHORT_ERROR");
			sprintf(str,"string could not be converted to unsigned short int.");
			break;

		case AIR_USER_INTERFACE_ERROR:
			sprintf(err,"AIR_USER_INTERFACE_ERROR");
			sprintf(str,"User interface failed to identify invalid parameter.");
			break;
			

			
		/* General error messages related to input files */	
		case AIR_ACCESS_CODING_READ_ERROR:	/* fprobr */
			sprintf(err,"AIR_ACCESS_CODING_READ_ERROR");
			sprintf(str,"A programming error occurred in attempting to access the specified file.");
			break;
			
		case AIR_ACCESS_DENIED_READ_ERROR:
			sprintf(err,"AIR_ACCESS_DENIED_READ_ERROR");
			sprintf(str,"The file system denied permission to search for the file in the specified directories.");
			break;
			
		case AIR_ACCESS_HOPS_READ_ERROR:
			sprintf(err,"AIR_ACCESS_HOPS_READ_ERROR");
			sprintf(str,"Hopping to multiple remote machines as required to reach the specified file is not supported by the file system.");
			break;
			
		case AIR_ACCESS_LINKS_READ_ERROR:
			sprintf(err,"AIR_ACCESS_LINKS_READ_ERROR");
			sprintf(str,"Too many symbolic links were required to reach the specified file.");
			break;
			
		case AIR_ACCESS_SIGNAL_READ_ERROR:
			sprintf(err,"AIR_ACCESS_SIGNAL_READ_ERROR");
			sprintf(str,"A signal was caught while trying to access the specified file.");
			break;
			
		case AIR_ATYPICAL_FILE_READ_ERROR:
			sprintf(err,"AIR_ATYPICAL_FILE_READ_ERROR");
			sprintf(str,"The specified file exists but is not a regular file or symbolic link.");
			break;
                        
		case AIR_BAD_LINK_READ_ERROR:
			sprintf(err,"AIR_BAD_LINK_READ_ERROR");
			sprintf(str,"The specified file is an unsatisfied symbolic link.");
			break;

		case AIR_CANT_CLOSE_READ_ERROR:
			sprintf(err,"AIR_CANT_CLOSE_READ_ERROR");
			sprintf(str,"A file was not closed successfully.");
			break;

		case AIR_FILE_UNAVAILABLE_READ_ERROR:
			sprintf(err,"AIR_FILE_UNAVAILABLE_READ_ERROR");
			sprintf(str,"The specified file could not be accessed before timing out.");
			break;
			
		case AIR_FILE_UNMOUNTED_READ_ERROR:
			sprintf(err,"AIR_FILE_UNMOUNTED_READ_ERROR");
			sprintf(str,"The specified file is on a currently unmounted remote machine.");
			break;
			
		case AIR_GROUP_CANT_READ_ERROR:
			sprintf(err,"AIR_GROUP_CANT_READ_ERROR");
			sprintf(str,"As a group member, you lack read permission for the specified file or directory.");
			break;
			
		case AIR_INVALID_PATH_READ_ERROR:
			sprintf(err,"AIR_INVALID_PATH_READ_ERROR");
			sprintf(str,"The path name of the specified file is invalid.");
			break;
			
		case AIR_NAME_TOO_LONG_READ_ERROR:
			sprintf(err,"AIR_NAME_TOO_LONG_READ_ERROR");
			sprintf(str,"The specified file name or one of its components is too long.");
			break;
			
		case AIR_NO_FILE_READ_ERROR:
			sprintf(err,"AIR_NO_FILE_READ_ERROR");
#if(AIR_CONFIG_REQ_PERMS!=0)
			sprintf(str,"The specified file does not exist.");
#else
			sprintf(str,"The specified file does not exist or cannot be opened.");
#endif
			break;
			
		case AIR_NO_STAT_FILE_READ_ERROR:
			sprintf(err,"AIR_NO_STAT_FILE_READ_ERROR");
			sprintf(str,"An error occurred trying to access the file for reading.");
			break;
			
		case AIR_OWNER_CANT_READ_ERROR:
			sprintf(err,"AIR_OWNER_CANT_READ_ERROR");
			sprintf(str,"As owner, you lack read permission for the specified file or directory.");
			break;

		case AIR_STRUCT_READ_ERROR:
			sprintf(err,"AIR_STRUCT_READ_ERROR");
			sprintf(str,"A struct overflow occurred while trying to access the specified file.");
			break;
			
		case AIR_UNSPECIFIED_FILE_READ_ERROR:
			sprintf(err,"AIR_UNSPECIFIED_FILE_READ_ERROR");
			sprintf(str,"An error occurred trying to access the file for reading.");
			break;
			
		case AIR_UNUSUAL_FILE_READ_ERROR:
			sprintf(err,"AIR_UNUSUAL_FILE_READ_ERROR");
			sprintf(str,"An error specific to your operating system occurred trying to access the file.");
			break;
                        
		case AIR_WORLD_CANT_READ_ERROR:
			sprintf(err,"AIR_WORLD_CANT_READ_ERROR");
			sprintf(str,"As non-owner and non-group member, you lack read permission for the specified file or directory.");
			break;

		
		/* Error messages related to input image files */
		case AIR_BAD_CODE_READ_ERROR:
			sprintf(err,"AIR_BAD_CODE_READ_ERROR");
			sprintf(str,"A coding error was encountered while trying to access the file for reading.");
			break;
			
		case AIR_DECOMPRESS_READ_ERROR:
			sprintf(err,"AIR_DECOMPRESS_READ_ERROR");
			sprintf(str,"Decompression command failed.");
			break;
                        
		case AIR_FSEEK_READ_ERROR:
			sprintf(err,"AIR_FSEEK_READ_ERROR");
			sprintf(str,"Attempt to read from a specific location within a file failed.");
			break;
                        
		case AIR_HEADER_INIT_CODING_ERROR:
			sprintf(err,"AIR_HEADER_INIT_CODING_ERROR");
			sprintf(str,"Coding error: open_header() was not initialized.");
			break;

		case AIR_INFO_BITS_ERROR:
			sprintf(err,"AIR_INFO_BITS_ERROR");
			sprintf(str,"The image header indicates an unsupported number of bits per pixel.");
			break;
			
		case AIR_INFO_DIM_ERROR:
			sprintf(err,"AIR_INFO_DIM_ERROR");
			sprintf(str,"The image header indicates dimensions less than or equal to zero.");
			break;
			
		case AIR_INFO_HLENGTHFIELD_ERROR:
			sprintf(err,"AIR_INFO_HLENGTHFIELD_ERROR");
			sprintf(str,"The field in the image header that lists the header's length is inappropriate.");
			break;
			
		case AIR_INFO_LIMIT_ERROR:
			/* This is only an error for a 16 bit file loaded into an 8 bit version of AIR */
			sprintf(err,"AIR_INFO_LIMIT_ERROR");
			sprintf(str,"The image header global minimum and global maximum values are inappropriate.");
			break;
			
		case AIR_INFO_SIZE_ERROR:
			sprintf(err,"AIR_INFO_SIZE_ERROR");
			sprintf(str,"The image header indicates voxel sizes less than or equal to zero.");
			break;
			
		case AIR_PLANEWISE_DECOMPRESS_READ_ERROR:
			sprintf(err,"AIR_PLANEWISE_DECOMPRESS_READ_ERROR");
			sprintf(str,"Decompression is not supported for programs that process plane by plane.");
			break;

		case AIR_READ_BINARYASNON_FILE_ERROR:
			sprintf(err,"AIR_READ_BINARYASNON_FILE_ERROR");
			sprintf(str,"Binary data not supported in this context.");
			break;
			
		case AIR_READ_HEADER_FILE_ERROR:
			sprintf(err,"AIR_READ_HEADER_FILE_ERROR");
			sprintf(str,"The image header could not be read correctly.");
			break;
			
		case AIR_READ_IMAGE_FILE_ERROR:
			sprintf(err,"AIR_READ_IMAGE_FILE_ERROR");
			sprintf(str,"Failed to read the correct amount of image data.");
			break;

		case AIR_READ_NONASBINARY_FILE_ERROR:
			sprintf(err,"AIR_READ_NONASBINARY_FILE_ERROR");
			sprintf(str,"Data did not turn out to be 1-bit data as expected.");
			break;

		case AIR_READIMAGE_CODING_ERROR:
			sprintf(err,"AIR_READIMAGE_CODING_ERROR");
			sprintf(str,"Coding error in use of subroutine read_image().");
			break;
			
		case AIR_READ_AIR_FILE_ERROR:
			sprintf(err,"AIR_READ_AIR_FILE_ERROR");
			sprintf(str,"The .air file could not be read correctly (wrong size).");
			break;

		case AIR_READ_ASCII_FILE_ERROR:
			sprintf(err,"AIR_READ_ASCII_FILE_ERROR");
			sprintf(str,"A miscellaneous ASCII file contained invalid data.");
			break;

		case AIR_READ_BINARY_FILE_ERROR:	/* No HTML */
			sprintf(err,"AIR_READ_BINARY_FILE_ERROR");
			sprintf(str,"A miscellaneous binary file contained invalid data.");
			break;
			
		case AIR_READ_INIT_FILE_ERROR:
			sprintf(err,"AIR_READ_INIT_FILE_ERROR");
			sprintf(str,"The initialization file contained invalid data.");
			break;

		case AIR_READ_NORM_FILE_ERROR:	/* No HTML */
			sprintf(err,"AIR_READ_NORM_FILE_ERROR");
			sprintf(str,"The .nrm file contained invalid data.");
			break;

		case AIR_READ_OLDWARP_FILE_ERROR:
			sprintf(err,"AIR_READ_OLDWARP_FILE_ERROR");
			sprintf(str,"Coding error in importing old 168 parameter .warp file.");
			break;
			
		case AIR_READ_PERSPWARP_FILE_ERROR:
			sprintf(err,"AIR_READ_PERSPWARP_FILE_ERROR");
			sprintf(str,"A .air file with perspective transformations cannot be used in this context.");
			break;

		case AIR_READ_SCALING_FILE_ERROR:
			/* Note that this pertains to both init files and scaling files used in reslicing */
			sprintf(err,"AIR_READ_SCALING_FILE_ERROR");
			sprintf(str,"The scaling file contained invalid data.");
			break;

		case AIR_READ_SUFFIX_FILE_ERROR:	/* used by meaner() */
			sprintf(err,"AIR_READ_SUFFIX_FILE_ERROR");
			sprintf(str,"The special suffix file contained invalid data.");
			break;

		case AIR_READ_UCF_FILE_ERROR:
			sprintf(err,"AIR_READ_UCF_FILE_ERROR");
			sprintf(str,"A ucf file contained invalid data.");
			break;
			
		case AIR_READ_VECTOR_FILE_ERROR:
			sprintf(err,"AIR_READ_VECTOR_FILE_ERROR");
			sprintf(str,"A vector field file contained invalid data.");
			break;
			
		case AIR_READ_WARP_FILE_ERROR:
			sprintf(err,"AIR_READ_WARP_FILE_ERROR");
			sprintf(str,"The .warp file could not be read correctly (wrong size).");
			break;

		case AIR_WARP_NOT_FIRST_ORDER_ERROR:
			sprintf(err,"AIR_WARP_NOT_FIRST_ORDER_ERROR");
			sprintf(str,"A .warp file expected to be 1st order contained higher order terms\n");
			break;
			
		case AIR_ACCESS_CODING_WRITE_ERROR:
			sprintf(err,"AIR_ACCESS_CODING_WRITE_ERROR");
			sprintf(str,"A programming error occurred preparing to write the specified file.");
			break;
			
		case AIR_ACCESS_DENIED_WRITE_ERROR:
			sprintf(err,"AIR_ACCESS_DENIED_WRITE_ERROR");
			sprintf(str,"The file system denied permission to search in the specified output directories.");
			break;
			
		case AIR_ACCESS_HOPS_WRITE_ERROR:
			sprintf(err,"AIR_ACCESS_HOPS_WRITE_ERROR");
			sprintf(str,"Hopping to multiple remote machines as required to reach the specified output directory is not supported by the file system.");
			break;
			
		case AIR_ACCESS_LINKS_WRITE_ERROR:
			sprintf(err,"AIR_ACCESS_LINKS_WRITE_ERROR");
			sprintf(str,"Too many symbolic links were required to reach the specified output directory.");
			break;
			
		case AIR_ACCESS_SIGNAL_WRITE_ERROR:
			sprintf(err,"AIR_ACCESS_SIGNAL_WRITE_ERROR");
			sprintf(str,"A signal was caught while preparing to write the specified file.");
			break;
			
		case AIR_ATYPICAL_FILE_WRITE_ERROR:
			sprintf(err,"AIR_ATYPICAL_FILE_WRITE_ERROR");
			sprintf(str,"The specified output file already exists and is not a regular file or symbolic link.");
			break;
                        
		case AIR_CANT_CLOSE_WRITE_ERROR:
			sprintf(err,"AIR_CANT_CLOSE_WRITE_ERROR");
			sprintf(str,"A file was not closed successfully after writing. The file should be removed.");
			break;

		case AIR_FILE_UNAVAILABLE_WRITE_ERROR:
			sprintf(err,"AIR_FILE_UNAVAILABLE_WRITE_ERROR");
			sprintf(str,"The specified directory could not be accessed before timing out.");
			break;
			
		case AIR_FILE_UNMOUNTED_WRITE_ERROR:
			sprintf(err,"AIR_FILE_UNMOUNTED_WRITE_ERROR");
			sprintf(str,"The specified output directory is on a currently unmounted remote machine.");
			break;
			
		case AIR_GROUP_CANT_WRITE_ERROR:
			sprintf(err,"AIR_GROUP_CANT_WRITE_ERROR");
			sprintf(str,"As a group member, you lack write permission for the specified file or directory.");
			break;
			
		case AIR_INVALID_PATH_WRITE_ERROR:
			sprintf(err,"AIR_INVALID_PATH_WRITE_ERROR");
			sprintf(str,"The path name of the specified output directory is invalid.");
			break;
			
		case AIR_NAME_TOO_LONG_WRITE_ERROR:
			sprintf(err,"AIR_NAME_TOO_LONG_WRITE_ERROR");
			sprintf(str,"The specified output file name or one of its components is too long.");
			break;
			
		case AIR_NO_DIRECTORY_WRITE_ERROR:
			sprintf(err,"AIR_NO_DIRECTORY_WRITE_ERROR");
			sprintf(str,"The output directory does not exist or is not a directory.");
			break;
			
		case AIR_NO_PERMISSION_WRITE_ERROR:
			sprintf(err,"AIR_NO_PERMISSION_WRITE_ERROR");
			sprintf(str,"The specified file already exists and overwrite permission has not been granted.");
			break;
			
		case AIR_OWNER_CANT_WRITE_ERROR:
			sprintf(err,"AIR_OWNER_CANT_WRITE_ERROR");
			sprintf(str,"As owner, you lack the write permission for the specified file or directory.");
			break;
			
		case AIR_STRUCT_WRITE_ERROR:
			sprintf(err,"AIR_STRUCT_WRITE_ERROR");
			sprintf(str,"A struct overflow occurred while trying to access the specified output directory.");
			break;

		case AIR_UNSPECIFIED_FILE_WRITE_ERROR:
			sprintf(err,"AIR_UNSPECIFIED_FILE_WRITE_ERROR");
			sprintf(str,"An unspecified error occurred trying to access the file for writing.");
			break;

		case AIR_UNUSUAL_FILE_WRITE_ERROR:
			sprintf(err,"AIR_UNUSUAL_FILE_WRITE_ERROR");
			sprintf(str,"An error specific to your operating system occurred trying to write the specified file.");
			break;
			
		case AIR_WORLD_CANT_WRITE_ERROR:
			sprintf(err,"AIR_WORLD_CANT_WRITE_ERROR");
			sprintf(str,"As non-owner and non-group member, you lack write permission for the specified file or directory.");
			break;

		case AIR_FSEEK_WRITE_ERROR:
			sprintf(err,"AIR_FSEEK_WRITE_ERROR");
			sprintf(str,"Attempt to seek to the desired location in an output file failed.");
			break;
			
		case AIR_WRITE_BAD_DIM_ERROR:
			sprintf(err,"AIR_WRITE_BAD_DIM_ERROR");
			sprintf(str,"A programming error led to attempt to save an image with non-positive dimension.");
			break;

		case AIR_WRITE_BADBITS_CODING_ERROR:
			sprintf(err,"AIR_WRITE_BADBITS_CODING_ERROR");
			sprintf(str,"Cannot save images with the specified number of bits per pixel.");
			break;
 
 		case AIR_WRITE_HEADER_FILE_ERROR:
 			sprintf(err,"AIR_WRITE_HEADER_FILE_ERROR");
			sprintf(str,"The image header could not be written correctly.");
			break;

 		case AIR_WRITE_IMAGE_FILE_ERROR:
 			sprintf(err,"AIR_WRITE_IMAGE_FILE_ERROR");
			sprintf(str,"Failed to write the complete image.");
			break;

 		case AIR_WRITE_NONASBINARY_CODING_ERROR:
 			sprintf(err,"AIR_WRITE_NONASBINARY_CODING_ERROR");
			sprintf(str,"Attempt to save non-binary file as binary.");
			break;
			
		/* Error messages related to non-image output files */

		case AIR_WRITE_AIR_FILE_ERROR:
			sprintf(err,"AIR_WRITE_AIR_FILE_ERROR");
			sprintf(str,"Failed to write the .air file.");
			break;

		case AIR_WRITE_ASCII_FILE_ERROR:
			sprintf(err,"AIR_WRITE_ASCII_FILE_ERROR");
			sprintf(str,"Failed to write to a miscellaneous ASCII file.");
			break;

		case AIR_WRITE_BINARY_FILE_ERROR:	/* no HTML */
			sprintf(err,"AIR_WRITE_BINARY_FILE_ERROR");
			sprintf(str,"Failed to write to a miscellaneous binary file.");
			break;
			
		case AIR_WRITE_INIT_FILE_ERROR:	
			sprintf(err,"AIR_WRITE_INIT_FILE_ERROR");
			sprintf(str,"Failed to write the initialization file.");
			break;

		case AIR_WRITE_NORM_FILE_ERROR:	/* no HTML */
			sprintf(err,"AIR_WRITE_NORM_FILE_ERROR");
			sprintf(str,"Failed to write the .nrm file.");
			break;

		case AIR_WRITE_SCALING_FILE_ERROR:
			sprintf(err,"AIR_WRITE_SCALING_FILE_ERROR");
			sprintf(str,"Failed to write the scaling initialization file.");
			break;

		case AIR_WRITE_SUFFIX_FILE_ERROR:
			sprintf(err,"AIR_WRITE_SUFFIX_FILE_ERROR");
			sprintf(str,"Failed to write the special suffix file.");
			break;

		case AIR_WRITE_UCF_FILE_ERROR:
			sprintf(err,"AIR_WRITE_UCF_FILE_ERROR");
			sprintf(str,"Failed to write to a UCF file.");
			break;

		case AIR_WRITE_WARP_FILE_ERROR:
			sprintf(err,"AIR_WRITE_WARP_FILE_ERROR");
			sprintf(str,"Failed to write the .warp file.");
			break;



		/* Other errors */                        
		case AIR_PATH_TOO_LONG_ERROR:
			sprintf(err,"AIR_PATH_TOO_LONG_ERROR");
			sprintf(str,"A file name exceeded %i characters.", AIR_CONFIG_MAX_PATH_LENGTH-1);
			break;


		case AIR_VECTOR_FIELD_MISMATCH_ERROR:
			sprintf(err,"AIR_VECTOR_FIELD_MISMATCH_ERROR");
			sprintf(str,"The number of coordinates in a vector field file did not match the corresponding value in a .warp file.");
			break;
			
		case AIR_INTERP_CANT_2D_ERROR:
			sprintf(err,"AIR_INTERP_CANT_2D_ERROR");
			sprintf(str,"The selected warp is a 2D warp and is therefore not compatible with the selected interpolation model.");
			break;
			
		case AIR_NO_2D_VECTOR_UNITE_ERROR:
			sprintf(err,"AIR_NO_2D_VECTOR_UNITE_ERROR");
			sprintf(str,"2D vector fields cannot be united.");
			break;
			
		case AIR_VECTOR_FIELD_MULTIPLANE_ERROR:
			sprintf(err,"AIR_VECTOR_FIELD_MULTIPLANE_ERROR");
			sprintf(str,"Only vector fields that describe a single plane can be used here.");
			break;
			
		case AIR_NORM_FILE_MISMATCH_ERROR:
			sprintf(err,"AIR_NORM_FILE_MISMATCH_ERROR");
			sprintf(str,"Normalization files for different images were based on incompatible regions.");
			break;
			
		case AIR_NORM_FILE_ZERO_ERROR:
			sprintf(err,"AIR_NORM_FILE_ZERO_ERROR");
			sprintf(str,"Normalization file would cause division by zero.");
			break;



		case AIR_TRANSFORM_BREAKS_SCANLINE_ERROR:
			sprintf(err,"AIR_TRANSFORM_BREAKS_SCANLINE_ERROR");
			sprintf(str,"Transformation cannot be handled by a scanline routine().");
			break;

		case AIR_NO_PERSPECTIVE_ERROR:
			sprintf(err,"AIR_NO_PERSPECTIVE_ERROR");
			sprintf(str,"Perspective transformation passed to function unable to handle perspective.");
			break;

		case AIR_POLYNOMIAL_ORDER_ERROR:
			sprintf(err,"AIR_POLYNOMIAL_ORDER_ERROR");
			sprintf(str,"A polynomial warp with an unimplemented high order was encountered.");
			break;
			
		case AIR_POLYNOMIAL_DIMENSIONS_ERROR:
			sprintf(err,"AIR_POLYNOMIAL_DIMENSIONS_ERROR");
			sprintf(str,"A polynomial warp with an unimplemented number of dimensions was encountered.");
			break;

		case AIR_INFO_SIZE_MISMATCH_ERROR:
			sprintf(err,"AIR_INFO_SIZE_MISMATCH_ERROR");
			sprintf(str,"Mismatch in voxel sizes.");
			break;
			
		case AIR_VOLUME_ZERO_DIM_ERROR:
			sprintf(err,"AIR_VOLUME_ZERO_DIM_ERROR");
			sprintf(str,"An internal AIR volume had a dimension of zero.");
			break;
                        
		case AIR_INFO_DIM_MISMATCH_ERROR:
			sprintf(err,"AIR_INFO_DIM_MISMATCH_ERROR");
			sprintf(str,"Mismatch in image dimensions.");
			break;

		case AIR_DIMENSION_MISMATCH_ERROR:
			sprintf(err,"AIR_DIMENSION_MISMATCH_ERROR");
			sprintf(str,"Mismatch in the number of dimensions.");
			break;

		case AIR_SVD_FAILURE_ERROR:
			sprintf(err,"AIR_SVD_FAILURE_ERROR");
			sprintf(str,"Error computing singular value decomposition.");
			break;
						
		case AIR_CANT_2D_UNMATCHED_ERROR:
			sprintf(err,"AIR_CANT_2D_UNMATCHED_ERROR");
			sprintf(str,"Mismatch in number of planes for 2D registration.");
			break;
			
		case AIR_CANT_3D_SINGLE_PLANE_ERROR:
			sprintf(err,"AIR_CANT_3D_SINGLE_PLANE_ERROR");
			sprintf(str,"3D registration model cannot be used when both files have only one plane of data");
			break;
			
		case AIR_THRESHOLD_TOO_LARGE_ERROR:
			sprintf(err,"AIR_THRESHOLD_TOO_LARGE_ERROR");
			sprintf(str,"Specified voxel intensity is too large for corresponding file.");
			break;
			
		case AIR_THRESHOLD_TOO_SMALL_ERROR:
			sprintf(err,"AIR_THRESHOLD_TOO_SMALL_ERROR");
			sprintf(str,"Specified voxel intensity is too small for corresponding file.");
			break;

		case AIR_ALIGN_BAD_PARAMETER_ERROR:
			sprintf(err,"AIR_ALIGN_BAD_PARAMETER_ERROR");
			sprintf(str,"Invalid parameter passed to function align().");
			break;

		case AIR_ALIGNWARP_BAD_PARAMETER_ERROR:
			sprintf(err,"AIR_ALIGNWARP_BAD_PARAMETER_ERROR");
			sprintf(str,"Invalid parameter passed to function alignwarp().");
			break;

		case AIR_ANTIWARP_ERROR:
			sprintf(err,"AIR_ANTIWARP_ERROR");
			sprintf(str,"Failure in function antiwarp2D() or antiwarp3D().");
			break;

		case AIR_COMPLEX_ZERO_DIVIDE_ERROR:
			sprintf(err,"AIR_COMPLEX_ZERO_DIVIDE_ERROR");
			sprintf(str,"Division by zero in function cdiver().");
			break;
			
		case AIR_SINGULAR_MATRIX_ERROR:
			sprintf(err,"AIR_SINGULAR_MATRIX_ERROR");
			/* Note that library routines should have individual error codes for this */
			sprintf(str," A singular matrix was encountered.");
			break;
			
		case AIR_NON_POSITIVE_DETERMINANT_ERROR:
			sprintf(err,"AIR_NON_POSITIVE_DETERMINANT_ERROR");
			sprintf(str,"A matrix with a negative or zero determinant was encountered.");
			break;

		case AIR_SINGULAR_CDVASB_ERROR:
			sprintf(err,"AIR_SINGULAR_CDVASB_ERROR");
			sprintf(str,"Singular matrix encountered in function cdvasb().");
			break;

		case AIR_COMPLEX_LOG_UNDEFINED_ERROR:
			sprintf(err,"AIR_COMPLEX_LOG_UNDEFINED_ERROR");
			sprintf(str,"Complex logarithm undefined in clog().");
			break;

		case AIR_SINGULAR_COMLOGER_ERROR:
			sprintf(err,"AIR_SINGULAR_COMLOGER_ERROR");
			sprintf(str,"Singular matrix encountered when computing matrix mean with com*loger().");
			break;
			
		case AIR_SINGULAR_COMLOGER2D_ERROR:
			sprintf(err,"AIR_SINGULAR_COMLOGER2D_ERROR");
			sprintf(str,"Singular matrix encountered when computing matrix mean with com*loger2D().");
			break;
			
		case AIR_SINGULAR_TRIANGLEMEAN_ERROR:
			sprintf(err,"AIR_SINGULAR_TRIANGLEMEAN_ERROR");
			sprintf(str,"Singular matrix encountered when computing triangle mean with trianglemean().");
			break;

		case AIR_COMLOGER_CONVERGE_ERROR:
			sprintf(err,"AIR_COMLOGER_CONVERGE_ERROR");
			sprintf(str,"Convergence failure in function comloger().");
			break;
			
		case AIR_COMLOGER2D_CONVERGE_ERROR:
			sprintf(err,"AIR_COMLOGER2D_CONVERGE_ERROR");
			sprintf(str,"Convergence failure in function comloger2D().");
			break;
			
		case AIR_MATRIXMEAN_CONVERGE_ERROR:
			sprintf(err,"AIR_MATRIXMEAN_CONVERGE_ERROR");
			sprintf(str,"Convergence failure in function matrixmean().");
			break;
			
		case AIR_VECTORMEAN_CONVERGE_ERROR:
			sprintf(err,"AIR_VECTORMEAN_CONVERGE_ERROR");
			sprintf(str,"Convergence failure in function vectormean().");
			break;

		case AIR_SCHUR_FAILURE_ERROR:
			sprintf(err,"AIR_SCHUR_FAILURE_ERROR");
			sprintf(str,"Failure of schur decomposition.");
			break;
			
		case AIR_EIGEN_VECTOR_FAILURE:
			sprintf(err,"AIR_EIGEN_VECTOR_FAILURE");
			sprintf(str,"Failure to compute eigenvectors using rg().");
			break;
			
		case AIR_SINGULAR_EEXPER_ERROR:
			sprintf(err,"AIR_SINGULAR_EEXPER_ERROR");
			sprintf(str,"Singular matrix when computing matrix exponential.");
			break;

		case AIR_SINGULAR_ELOGER_ERROR:
			sprintf(err,"AIR_SINGULAR_ELOGER_ERROR");
			sprintf(str,"Singular matrix when computing matrix logarithm.");
			break;

		case AIR_NONPOSITIVE_ELOGER_ERROR:
			sprintf(err,"AIR_NONPOSITIVE_ELOGER_ERROR");
			sprintf(str,"Negative or zero real eigenvalue in function eloger3(), eloger4() or eloger5().");	
			break;
			
		case AIR_ELOGER_CONVERGE_ERROR:
			sprintf(err,"AIR_ELOGER_CONVERGE_ERROR");
			sprintf(str,"Failure to converge in eloger_pade(), log may be complex?\n");
			break;
			
		case AIR_SINGULAR_MATRIXMEAN_ERROR:
			sprintf(err,"AIR_SINGULAR_MATRIXMEAN_ERROR");
			sprintf(str,"Singular matrix in function matrixmean*().");
			break;
			
		case AIR_SINGULAR_VECTORMEAN_ERROR:
			sprintf(err,"AIR_SINGULAR_VECTORMEAN_ERROR");
			sprintf(str,"Singular matrix in function vectormean().");
			break;
			
		case AIR_SPAT_INVERT_MATRIXMEAN_ERROR:
			sprintf(err,"AIR_SPAT_INVERT_MATRIXMEAN_ERROR");
			sprintf(str,"Negative determinant in function matrixmean*().");
			break;
			
		case AIR_SINGULAR_PROJCOMM_ERROR:
			sprintf(err,"AIR_SINGULAR_PROJCOMM_ERROR");
			sprintf(str,"Singular matrix in function proj*2comm*().");
			break;
			
		case AIR_SPAT_INVERT_PROJCOMM_ERROR:
			sprintf(err,"AIR_SPAT_INVERT_PROJCOMM_ERROR");
			sprintf(str,"Negative determinant in function proj*2comm*().");
			break;
				
		case AIR_HQR_FAILURE_ERROR:
			sprintf(err,"AIR_HQR_FAILURE_ERROR");
			sprintf(str,"Failure of root computation in hqr().");
			break;

		case AIR_SINGULAR_DVASB_ERROR:
			sprintf(err,"AIR_SINGULAR_DVASB_ERROR");
			sprintf(str,"Singular matrix encountered in function dvasb().");
			break;

		case AIR_EXCHNG_CONVERGENCE_ERROR:
			sprintf(err,"AIR_EXCHNG_CONVERGENCE_ERROR");
			sprintf(str,"Failure to converge in function exchng().");
			break;

		case AIR_SINGULAR_GAEL_ERROR:
			sprintf(err,"AIR_SINGULAR_GAEL_ERROR");
			sprintf(str,"Singular matrix encountered in function gael().");
			break;
			
		case AIR_BAD_CONTRASTS_ERROR:
			sprintf(err,"AIR_BAD_CONTRASTS_ERROR");
			sprintf(str,"Contrasts did not sum to zero as required.");
			break;
			
		case AIR_INVALID_CONTRASTER_ERROR:
			sprintf(err,"AIR_INVALID_CONTRASTER_ERROR");
			sprintf(str,"Invalid parameter in call to contrast?er().");
			break;

		case AIR_EMPTY_ROI_ERROR:
			sprintf(err,"AIR_EMPTY_ROI_ERROR");
			sprintf(str,"ROI was empty.");
			break;
			
		case AIR_DQAGE_INTEGRATION_ERROR:
			sprintf(err,"AIR_DQAGE_INTEGRATION_ERROR");
			sprintf(str,"Failure to integrate to desired accuracy in dqage().");
			break;
			
		case AIR_NEGATIVE_SMOOTHING_ERROR:
			sprintf(err,"AIR_NEGATIVE_SMOOTHING_ERROR");
			sprintf(str,"Invalid parameters passed to gaussian smoothing function.");
			break;
			
		case AIR_INVALID_LAYOUT_ERROR:
			sprintf(err,"AIR_INVALID_LAYOUT_ERROR");
			sprintf(str,"Invalid parameters passed to layerout().");
			break;
			
		case AIR_INVALID_MAGNIFICATION_ERROR:
			sprintf(err,"AIR_INVALID_MAGNIFICATION_ERROR");
			sprintf(str,"Invalid parameters passed to magnifier().");
			break;
			
		case AIR_INVALID_MASK_ERROR:
			sprintf(err,"AIR_INVALID_MASK_ERROR");
			sprintf(str,"Incorrect data type passed to mask().");
			break;
			
		case AIR_INVALID_MEANCALC_ERROR:
			sprintf(err,"AIR_INVALID_MEANCALC_ERROR");
			sprintf(str,"Coding error in call to meancalc().");
			break;
			
		case AIR_INVALID_RESIZING_ERROR:
			sprintf(err,"AIR_INVALID_RESIZING_ERROR");
			sprintf(str,"Invalid parameters passed to resizer().");
			break;
			
		case AIR_INVALID_SHADING_ERROR:
			sprintf(err,"AIR_INVALID_SHADING_ERROR");
			sprintf(str,"Invalid parameters passed to shader().");
			break;
		
		case AIR_INVALID_UT_ERROR:
			sprintf(err,"AIR_INVALID_UT_ERROR");
			sprintf(str,"function logut() or exput() called with an unsupported value for n.");
			break;
			
		case AIR_DBESI0_ERROR:
			sprintf(err,"AIR_DBESI0_ERROR");
			sprintf(str,"function dbesi0() called with an excessively large argument.");
			break;
			
		case AIR_DCSEVL_BAD_N_ERROR:
			sprintf(err,"AIR_DCSEVL_BAD_N_ERROR");
			sprintf(str,"function dcselv() called with an invalid number of terms.");
			break;
			
		case AIR_DCSEVL_BAD_X_ERROR:
			sprintf(err,"AIR_DCSEVL_BAD_X_ERROR");
			sprintf(str,"function dcselv() called with an invalid value for x.");
			break;
			
		case AIR_D9B0MP_SMALL_X_ERROR:
			sprintf(err,"AIR_D9B0MP_SMALL_X_ERROR");
			sprintf(str,"function d9b0mp called with value less than 4.");
			break;
			
		case AIR_D9B0MP_LARGE_X_ERROR:
			sprintf(err,"AIR_D9B0MP_LARGE_X_ERROR");
			sprintf(str,"function d9b0mp called with excessively large value of x.");
			break;
			
		case AIR_D9LGMC_CANT_INIT_ERROR:
			sprintf(err,"AIR_D9LGMC_CANT_INIT_ERROR");
			sprintf(str,"function d9lgmc() initialization failed.");
			break;
			
		case AIR_D9LGMC_SMALL_X_ERROR:
			sprintf(err,"AIR_D9LGMC_SMALL_X_ERROR");
			sprintf(str,"function d9lgmc() called with value less than 10.");
			break;
		
		case AIR_DGAMLM_CANT_MIN_ERROR:
			sprintf(err,"AIR_DGAMLM_CANT_MIN_ERROR");
			sprintf(str,"function dgamlm() failed to find minimum.");
			break;
			
		case AIR_DGAMLM_CANT_MAX_ERROR:
			sprintf(err,"AIR_DGAMLM_CANT_MAX_ERROR");
			sprintf(str,"function dgamlm() failed to find maximum.");
			break;
		
		case AIR_DGAMMA_X_IS_ZERO_ERROR:
			sprintf(err,"AIR_DGAMMA_X_IS_ZERO_ERROR");
			sprintf(str,"function dgamma() x=0.");
			break;
			
		case AIR_GAMMA_OF_NEGATIVE_ERROR:
			sprintf(err,"AIR_GAMMA_OF_NEGATIVE_ERROR");
			sprintf(str,"function dgamma() or dlngam() x is a negative integer.");
			break;
			
		case AIR_GAMMA_OVERFLOW_ERROR:
			sprintf(err,"AIR_GAMMA_OVERFLOW_ERROR");
			sprintf(str,"function dgamma() or dlngam() large x produced overflow.");
			break;
			
		case AIR_DLNREL_X_TOO_SMALL_ERROR:
			sprintf(err,"AIR_DLNREL_X_TOO_SMALL_ERROR");
			sprintf(str,"function dlnrel() x is less than -1.");
			break;
			
		case AIR_DLBETA_NEGATIVE_ARGS_ERROR:
			sprintf(err,"AIR_DLBETA_NEGATIVE_ARGS_ERROR");
			sprintf(str,"negative argument in function dlbeta().");
			break;
			
		case AIR_DBETAI_BAD_X_ERROR:
			sprintf(err,"AIR_DBETAI_BAD_X_ERROR");
			sprintf(str,"x out of range in dbetai().");
			break;
			
		case AIR_DBETAI_BAD_PQ_ERROR:
			sprintf(err,"AIR_DBETAI_BAD_PQ_ERROR");
			sprintf(str,"negative p or q in dbetai().");
			break;
			
		case AIR_DLTP2C_BAD_Q_ERROR:
			sprintf(err,"AIR_DLTP2C_BAD_Q_ERROR");
			sprintf(str,"negative q in dltp2c().");
			break;
			
		case AIR_DLFP2C_BAD_P_ERROR:
			sprintf(err,"AIR_DLFP2C_BAD_P_ERROR");
			sprintf(str,"negative p in dlfp2c().");
			break;
			
		case AIR_D9GMIC_BAD_A_ERROR:
			sprintf(err,"AIR_D9GMIC_BAD_A_ERROR");
			sprintf(str,"positive a in d9gmic().");
			break;
			
		case AIR_D9GMIC_NEGATIVE_X_ERROR:
			sprintf(err,"AIR_D9GMIC_NEGATIVE_X_ERROR");
			sprintf(str,"negative x in d9gmic().");
			break;
			
		case AIR_D9GMIC_CONVERGE_ERROR:
			sprintf(err,"AIR_D9GMIC_CONVERGE_ERROR");
			sprintf(str,"convergence failiure in d9gmic().");
			break;
			
		case AIR_D9GMIT_BAD_X_ERROR:
			sprintf(err,"AIR_D9GMIT_BAD_X_ERROR");
			sprintf(str,"negative x in d9gmit().");
			break;
			
		case AIR_D9GMIT_CONVERGE_ERROR:
			sprintf(err,"AIR_D9GMIT_CONVERGE_ERROR");
			sprintf(str,"convergence failure in d9gmit().");
			break;
			
		case AIR_D9LGIC_CONVERGE_ERROR:
			sprintf(err,"AIR_D9LGIC_CONVERGE_ERROR");
			sprintf(str,"convergence failure in d9lgic().");
			break;
			
		case AIR_D9LGIT_BAD_X_ERROR:
			sprintf(err,"AIR_D9LGIT_BAD_X_ERROR");
			sprintf(str,"x out of range in d9lgit().");
			break;
			
		case AIR_D9LGIT_CONVERGE_ERROR:
			sprintf(err,"AIR_D9LGIT_CONVERGE_ERROR");
			sprintf(str,"convergence failure in d9lgit().");
			break;
			
		case AIR_DGAMIC_BAD_X_ERROR:
			sprintf(err,"AIR_DGAMIC_BAD_X_ERROR");
			sprintf(str,"negative x in dgamic().");
			break;
		
		case AIR_DGAMIC_BAD_A_X_ERROR:
			sprintf(err,"AIR_DGAMIC_BAD_A_X_ERROR");
			sprintf(str,"zero x and negative a in dgamic().");
			break;
			
		case AIR_HOTELL_3D_ONLY_ERROR:
			sprintf(err,"AIR_HOTELL_3D_ONLY_ERROR");
			sprintf(str,"non-zero 4th dimension passed to Hotelling's T2 routine.");
			break;
			
		case AIR_ICA_EXCESS_SOURCE_ERROR:
			sprintf(err,"AIR_ICA_EXCESS_SOURCE_ERROR");
			sprintf(str,"prespecified sources in ICA exceeded non-trivial components");
			break;
			
		case AIR_MAGNIFY_MOD_ERROR:
			sprintf(err,"AIR_MAGNIFY_MOD_ERROR");
			sprintf(str,"shrinkage produced fractional voxel.");
			break;
			
		case AIR_SHAPE_NO_SUCCESSES_ERROR:
			sprintf(err,"AIR_SHAPE_NO_SUCCESSES_ERROR");
			sprintf(str,"shape averaging failed at every point.");
			break;
			
		case AIR_ILLEGAL_FWHM_ERROR:
			sprintf(err,"AIR_ILLEGAL_FWHM_ERROR");
			sprintf(str,"the specified full width at half maximum is not possible.");
			break;
			
		case AIR_NOT_IN_DISTRIBUTION_TAIL_ERROR:
			sprintf(err,"AIR_NOT_IN_DISTRIBUTION_TAIL_ERROR");
			sprintf(str,"the p value is not sufficiently far out into the tail.");
			break;
			
		case AIR_ANOVA_BAD_MODEL_ERROR:
			sprintf(err,"AIR_ANOVA_BAD_MODEL_ERROR");
			sprintf(str,"the requested ANOVA model is not available.");
			break;
			
		case AIR_SHAPE_CONVERGENCE_ERROR:
			sprintf(err,"AIR_SHAPE_CONVERGENCE_ERROR");
			sprintf(str,"shape normalization failed to converge.");
			break;
			
		case AIR_REQUIRES_16_BITS_ERROR:
			sprintf(err,"AIR_REQUIRES_16_BITS_ERROR");
			sprintf(str,"this program only works when AIR is compiled as 16 bit.");
			break;
			
		default:
			sprintf(str,"Error %i occurred.",errornumber);
			break;
	}
}
