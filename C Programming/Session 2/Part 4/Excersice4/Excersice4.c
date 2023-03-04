/*
 * Excersice1.c
 *
 *  Created on: 10 Feb 2023
 *      Author: Assem
 */

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

#define EPSILION  0.001

void main(void)
{

	/*                   CODE ONE                         */

	/*
	float x = 9.3f/3.0f ;
	if (x == 3.1)
	{
		printf("Yes!");
	}
	else
	{
		printf("No!");
	}
	*/

	/*                   CODE TWO                         */


	float x = 9.3f/3.0f ;
	if ( fabs(x - 3.1f) <= EPSILION )
	{
		printf("Yes!");
	}
	else
	{
		printf("No!");
	}

}
