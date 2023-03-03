/*
 ============================================================================
 Name        : Example_loops(Fact).c
 Author      : Mohamed Ayman
 Version     :
 Copyright   : Your copyright notice
 Description : Factorial
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	/*
	int number = 0;
	printf("Please enter a number: ");
	scanf("%d",&number);
	int temp =number;
	int fact = 1;

	while( number > 0 )
	{
		fact = fact * number;
		number--;
	}

	printf("\nThe factorial of %d is %d ",temp,fact);
	 */

	int number = 0;
	printf("Please enter a number: ");
	scanf("%d",&number);
	int fact = 1;
	int temp = number;
	int i = 1;

	while(i<=number)
	{
		fact*=i;
		i++;
	}

	printf("\nThe factorial of %d is %d ",temp,fact);

	return 0;
}
