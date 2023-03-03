/*
 ============================================================================
 Name        : Example.c
 Author      : Mohamed Ayman
 Version     :
 Copyright   : Your copyright notice
 Description : An Exercise Code to test your skill on tracing 
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

		int x, y, z;

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

	printf("\n\nThe numbers are %d %d %d",x,y,z);


	return 0;
}
