/******************************************************************************
 *
 * Session: 3
 *
 * Topic: Pointers
 *
 * Date: 14/2/2023
 *
 * Author: Misara Ahmed
 *
 *******************************************************************************/

#include <stdio.h>

int squareByValue(int num)
{
	num = num * num;
	return num;
}

int main(void)
{
	/* initialize number */
	int number = 5;
	int result;

	result =  squareByValue(number);

	printf("%d %d \n", number, result);
	return 0;
}
