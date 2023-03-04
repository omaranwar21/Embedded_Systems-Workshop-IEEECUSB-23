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
	/* Init of Control Variable */
	i = 1;
	/* The condition is in the While */
	while( i <= num)
	{
		fact_result = fact_result * i;
		/* Control Statement */
		i++;
	}
	printf("\nFactorial of number %d is : %ld\n",num,fact_result);
	printf("\nThe Value of counter is : %ld\n",i);
}
