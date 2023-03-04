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
	int input;
	scanf("%d",&input);
	if((input%2)==0)
		printf("%d is an even number",input);
	else
		printf("%d is an odd number",input);
}
