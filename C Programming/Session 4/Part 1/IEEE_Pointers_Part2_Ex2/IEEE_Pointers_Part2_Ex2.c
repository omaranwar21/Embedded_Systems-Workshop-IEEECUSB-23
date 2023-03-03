/*************************************************************************************************************
 * Subject: Pointers - Part (2)
 * Session: Pointers - Part (2), Structures, Unions, and enumerations
 * Date: 25/02/2023
 *************************************************************************************************************/

#include <stdio.h>

int main(void)
{
	void *ptr;
	char c = 'a';
	int i = 10;
	float num = 5.5;

	ptr = &c;

//	printf("%c\n", *ptr);             // Error
	//printf("%c\n", *((char*)ptr));  // Correct

	ptr = &i;

//	printf("%d\n", *ptr);            // Error
	//printf("%d\n", *((int*)ptr));  // Correct

	ptr = &num;

//	printf("%f\n", *ptr);              // Error
	//printf("%f\n", *((float*)ptr));  // Correct
}
