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
	/* variable declaration */
	int a;

	printf("Please Enter a Number : ");
	fflush(stdout);
	scanf("%d",&a);

	/* check the condition and evaluating this condition */
	if( a < 0 )
		printf("\na is Negative\n");

	else if(a > 0)
		printf("\n a is Positive\n");

	else
		printf("\n a equal to 0\n");

}
