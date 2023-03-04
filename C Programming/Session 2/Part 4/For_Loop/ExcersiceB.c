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
	int num,i;
	long fact_result = 1;

	printf("Enter any number to calculate the factorial: ");
	fflush(stdout);

	scanf("%d",&num);
	/* The Three requirements are all in one line of code */
	for(i=1;i<=num;i++)
	{
		fact_result = fact_result * i;
	}
	printf("\nFactorial of number %d is : %ld\n",num,fact_result);
}
