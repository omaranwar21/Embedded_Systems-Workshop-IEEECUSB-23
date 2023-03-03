/*
 ============================================================================
 Name        : Example.c
 Author      : Mohamed Ayman
 Version     :
 Copyright   : Your copyright notice
 Description : Example
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	/*	int x, y, z;

	printf("Please enter Three numbers: ");

	scanf("%d%d%d",&x,&y,&z);

	printf("\n\nThe numbers are %d %d %d\n",x,y,z);


	if( (x==1) && (y++) )
	{
		z++;
	}
	else if( (x++) && (y == 1) )
	{
		y++;
	}
	else if(z==1)
	{
		x++;
	}
	else
	{

	}

	printf("\n\nThe numbers are %d %d %d",x,y,z);*/



	int a = 5;
	int b = 20;
	if ( a && b )
	{
		printf("Line 1 Condition is true\n" );
	}
	if (a || b )
	{
		printf("Line 2 Condition is true\n");
	}
	/* lets change the value of a and b */
	a = 0;
	b = 10;
	if ( a && b )
	{
		printf("Line 3 - Condition is true\n" );
	} else
	{
		printf("Line 3 Condition is not true\n");
	}

	if ( !( a && b ) )
	{

		printf("Line 4 Condition is true\n");
	}

	return 0;
}
