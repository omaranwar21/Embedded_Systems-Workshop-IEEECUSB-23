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
#include <math.h>

int main()
{
	// Address operator (&) //
	int a = 5;

	printf("Address of a: %p\n", &a);


	// Pointer definition //
	int *b;

	b = &a;

	printf("Address of a: %p \n", &a);
	printf("Address of a: %p \n", b);
	printf("Value of a: %d \n", a);
	printf("Value of a: %d \n", *b);


	// Changing the value of a //
	a = 10;

	*b = 10;

	printf("Value of a: %d \n", a);


	// Exercise //
	int x = 5;
	int *y = &x;
	int z = *y;
	x = 7;

	printf("%d \t %d\n", *y , z);


	// Note: If the pointer doesn't point to a variable, its better to assign it to NULL //
	int *m = NULL;
	int *n;

	printf("Pointer x: %p \n", m);
	printf("Pointer y: %p", n);


	return 0;
}
