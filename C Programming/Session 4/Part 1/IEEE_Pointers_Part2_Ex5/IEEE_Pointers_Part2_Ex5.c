/*************************************************************************************************************
 * Subject: Pointers - Part (2)
 * Session: Pointers - Part (2), Structures, Unions, and enumerations
 * Date: 25/02/2023
 *************************************************************************************************************/
#include <stdio.h>

void func(int x)
{
	printf("%d\n", x);
}

void main(void)
{
	void (*ptr)(int) = func;
	func(1);
	ptr(2);
	(*ptr)(3);
}
