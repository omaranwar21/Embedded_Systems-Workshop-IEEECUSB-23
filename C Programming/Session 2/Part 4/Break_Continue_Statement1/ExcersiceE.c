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
	for( int i = 1 ; i <= 10 ; i++)
	{
		if(i == 5)
		{
			//break;
			continue;
		}
		printf("i = %d\n", i);
	}
	printf("The End");
}
