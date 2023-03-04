/*
 * Excersice1.c
 *
 *  Created on: 10 Feb 2023
 *      Author: Assem
 */

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int sum = 0, x=0;

	scanf("%d",&x);
	while( x > 0 )
	{
		printf("%d\n",x);
		fflush(stdout);

		sum+=x;
		scanf("%d",&x);
	}
	printf("Sum = %d",sum);
}
