/*
 ============================================================================
 Name        : Sum_Array.c
 Author      : Bassant Ahmed
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

#define SIZE 5

int main(void) {

	int arr[SIZE];
	int sum = 0;

	printf("Enter %d numbers: \n",SIZE);
	fflush(stdout);

	for(int i = 0; i < SIZE ; i++){
		scanf("%d",&arr[i]);
	}

	for(int i = 0; i < SIZE ; i++){
		sum+= arr[i];
	}

	printf("Sum = %d\n",sum);

	return 0;
}
