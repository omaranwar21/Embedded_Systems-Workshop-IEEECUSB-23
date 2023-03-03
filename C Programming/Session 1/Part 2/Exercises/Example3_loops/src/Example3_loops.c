/*
 ============================================================================
 Name        : Example3_loops.c
 Author      : Mohamed Ayman
 Version     :
 Copyright   : Your copyright notice
 Description : Demonistraion
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i=0;
	printf("\t\tWhile Loop\n");
	while(i==1)
	{
		printf("Inner loop\t");
	}
	printf("Outer loop\n");

	printf("\t\tDo-While Loop\n");
	do
	{
		printf("Inner loop\t");
	}while(i==1);
	printf("Outer loop");
}
