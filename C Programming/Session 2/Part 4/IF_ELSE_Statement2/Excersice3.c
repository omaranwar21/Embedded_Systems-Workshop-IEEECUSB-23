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
	char ch;

	/* 					For Display 					  */
	printf("Enter a char: ");
	fflush(stdout);
	/******************************************************/
	scanf("%c",&ch);

	if( ch >= 'A' && ch <= 'Z' )
	{
		printf("Char is CAP\n");
	}
	else
	{
		printf("Char is small\n");
	}
}
