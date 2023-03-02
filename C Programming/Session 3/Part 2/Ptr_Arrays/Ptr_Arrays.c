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
	int array[5]={0,10,20,30,40};

	printf("The address of the array's name: %p \n", &array);
	printf("The address of the array's 1st element: %p \n", &array[0]);



	// Exercise //
	*array = 5;
	array[0] = 5;

	printf("The value of the array's 1st element: %d \n", *array);
	printf("The value of the array's 1st element: %d \n", array[0]);


	int *x = array;
	int *y = &array[0];
	int *z = &array;


	printf("x : %p \n", x);
	printf("y : %p \n", y);
	printf("z : %p \n", z);



	array[3] = 5;
	*(array + 3) = 5;
	*(x+3)= 5;


	printf("array[3] = %d \n", array[3]);



// the normal pointer can be incremented, but the name of the array can't as it is CONSTANT pointer.
	x++;

//ERROR
//	array++;


	return 0;
}
