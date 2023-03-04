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
	int i = 1;
	while(i <= 10)
	{
		if(i == 5)
		{
			break;
			//continue;
		}
		printf("i = %d\n", i);
		i++;
	}
	printf("The End");
}
