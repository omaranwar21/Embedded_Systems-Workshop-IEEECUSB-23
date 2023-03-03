/*
 ============================================================================
 Name        : Example2.c
 Author      : Mohamed Ayman
 Version     :
 Copyright   : Your copyright notice
 Description : Execise testing your tracing skills using turnary operator
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x=5, y=6;

	printf("x %d y %d\n",x,y);

	(y>x) ? (x++):(y++);

	printf("x %d y %d\n",x,y);

	if(x=9)
	{
		printf("mya mya");
	}
	else
	{
		printf("msh mya mya");
	}
}
