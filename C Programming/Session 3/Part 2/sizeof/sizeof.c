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

int main (void)
{
	char m = 0;
	int x = 1;
	float y = 2.2;
	long l = 3;
	double n = 4;

	printf(" %d \n %d \n %d \n %d \n %d \n" , sizeof(m), sizeof(x), sizeof(y), sizeof(l), sizeof(n) );





	// Exercise //
	char *c;
	char z;

	printf(" %d \t %d", sizeof(c), sizeof(z));

	return 0;
}
