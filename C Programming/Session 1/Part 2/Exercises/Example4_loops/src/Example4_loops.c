/*
 ============================================================================
 Name        : Example4_loops.c
 Author      : Mohamed Ayman
 Version     :
 Copyright   : Your copyright notice
 Description : do-while vs while loop
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main( void )
{
	printf("\t\t Do-While loop \n");
	int counter = 1; /* initialize counter */

	int sum = 0;
	do {
		sum = sum + counter;
		counter++;
	}while( counter <= 5 ); /* end do...while */

	printf(" The sum = %d", sum);

	printf("\n\t\t While loop \n");

	counter = 1; /* initialize counter */
	sum = 0;

	while( counter <= 5 )
	{
		sum = sum + counter;
		counter++;
	}
	printf(" The sum = %d", sum);

	return 0; /* indicate program ended successfully */
} /* end function main */

