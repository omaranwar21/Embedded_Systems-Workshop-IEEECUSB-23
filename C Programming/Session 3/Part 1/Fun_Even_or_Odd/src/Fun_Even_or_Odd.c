/**************************************************************************************************
 Name        : Fun_Even_or_Odd
 Author      : Bassant Ahmed
 **************************************************************************************************/
#include <stdio.h>

int CheckEvenOrOdd(unsigned int Number)
{
	if((Number % 2) == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main(void) {
	int number;
	printf("Please enter the number : ");
	fflush(stdout);
	scanf("%d",&number);
	if(CheckEvenOrOdd(number) == 0)
	{
		printf("%d is Even Number\n",number);
	}
	else
	{
		printf("%d is Odd Number\n",number);
	}
	return 0;
}
