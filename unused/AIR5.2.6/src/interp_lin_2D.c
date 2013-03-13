/* Copyright 1995-2002 Roger P. Woods, M.D. */
/* Modified 7/16/02 */


/* AIR_Pixels interp_lin_2D()
 *
 * returns the interpolated value
 */

#include "AIR.h"

AIR_Pixels AIR_interp_lin_2D(/*@unused@*/ const struct AIR_Key_info *stats, AIR_Pixels ***volume, const double x_p, const double y_p, const unsigned int k, const double scale, /*@unused@*/ const unsigned int *window, /*@unused@*/ const double pi)

{
	/* Find interpolated value */
	double a,b,d,e;

	unsigned int x_up=(unsigned int)ceil(x_p);
	unsigned int x_down=(unsigned int)floor(x_p);
	unsigned int y_up=(unsigned int)ceil(y_p);
	unsigned int y_down=(unsigned int)floor(y_p);
	if(x_up==x_down){
		a=0.0;
		d=1.0;
	}
	else{
		a=x_p-x_down;
		d=x_up-x_p;
	}
	if(y_up==y_down){
		b=0.0;
		e=1.0;
	}
	else{
		b=y_p-y_down;
		e=y_up-y_p;
	}

	/* Interpolate */
	{
		AIR_Pixels *pi2, **pj2, ***pk2;
		double total;
		
		pk2=volume+k;
		pj2=*pk2+y_down;
		pi2=*pj2+x_down;
		total=*pi2*d*e;

		if (x_up!=x_down){
			pi2++;
			total+=*pi2*a*e;
		}

		if (y_up!=y_down){
			pj2++;
			pi2=*pj2+x_down;
			total+=*pi2*d*b;

			if (x_up!=x_down){
				pi2++;
				total+=*pi2*a*b;
			}
		}

		total*=scale;
		total+=.5;
		if(total>(double)AIR_CONFIG_MAX_POSS_VALUE){
			return AIR_CONFIG_MAX_POSS_VALUE;
		}
		else return (AIR_Pixels)total;
	}
}
