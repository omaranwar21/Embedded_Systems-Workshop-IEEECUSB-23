/*************************************************************************************************************
 * Subject: Pointers - Part (1)
 * Session: Functions, Arrays, and Pointers - Part (1)
 * Date: 18/02/2023
 * Author: Youssef Ahmed Zaki
 *************************************************************************************************************/

#include <stdio.h>

int main(void)
{
	/*******************************************************************************
	 *                     How to define pointers in different manners             *
	 *******************************************************************************/


	int a = 5;

	/* First Method */

	 int *b = &a;

	/* Second Method */

	//int *b;
	//b = &a;

	printf("b = %d\n",*b);
	printf("Address of variable 'a' is: %p\n",b);
	printf("Address of variable 'a' is: %p", &a);

	return 0;
}
