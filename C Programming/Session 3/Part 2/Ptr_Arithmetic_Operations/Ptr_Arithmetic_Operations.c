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

int main(void)
{
	char *x = NULL;
	int *y =NULL;

	printf("Pointer to char (x): %p \n", x);
	printf("Pointer to int (y): %p \n", y);

	x--;
	y++;

	printf("Pointer to char increment (x) : %p \n", x);
	printf("Pointer to int increment (y) : %p \n", y);



	// Exercise //

	printf("Post-increment: %p \n", x++);
	printf("Pre-increment: %p \n", ++y);


	// Exercise //
	int arr[] = {1,2,3};
	*arr = 5;

	printf("arr[0] = %d, arr[1] = %d, arr[2] = %d\n" , arr[0], arr[1], arr[2]);
	*(arr + 1) = 10;
	printf("arr[0] = %d, arr[1] = %d, arr[2] = %d\n" , arr[0], arr[1], arr[2]);
	2[arr] = 15;
	printf("0[arr] = %d, 1[arr] = %d, 2[arr] = %d\n" , 0[arr], 1[arr], 2[arr]);

	return 0;
}
