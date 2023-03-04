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
	int i;
	scanf("%d",&i);

	// First if statement
	if (i > 0)
	{
		printf("i is Larger than 0\n");

		// Second if statement
		if (i < 10)
		{
			// Nested - if statement
			// Will only be executed if statement above
			// is true
			printf("i is smaller than 10\n");

			// Third if statement
			if (i == 5 )
			{
				// Nested - if statement
				// Will only be executed if ALL statement above
				// ARE true
				printf("i equals 5\n");
			}
			else
			{
				printf("i doesn't equal 5\n");
			}
		}
		else
		{
			printf("i is greater than 10");
		}
	}
	else
	{
		printf("i is Smaller than 0\n");
	}
}
