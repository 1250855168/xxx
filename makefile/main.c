/* ************************************************************************
 *       Filename:  man.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2010年08月01日 16时29分03秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
#include <math.h>

#include "mux.h"
#include "dive.h"
#include "dec.h"
#include "sub.h"

int main(void)
{
	float a = 2,b = 4;

	printf("my SunFunction\n:");
	printf("the sum of a and b is:%f\n",my_sum(a,b));	//求a b之和

	printf("the dec of a and b is:%f\n",my_dec(a,b));	//求a b之差

	printf("the mux of a and b is:%f\n",my_mux(a,b));   //求a b之积

	printf("the dvi of a and b is:%f\n",my_div(a,b));   //求a b之商

	printf("\n");

	printf("the system lib:\n");
	printf("the sin of a is: %f\n",sin(a));			//求a的正弦值

	printf("the sin of b is: %f\n",atan(a));			//求a的反余弦值

	printf("the a of b  pow is: %f\n",pow(a,b));		//求a的b次幂

	printf("the sqrt of b is: %f\n",sqrt(b));			//求a的平方根


}


