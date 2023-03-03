/*************************************************************************************************************
 * Subject: Pointers - Part (2)
 * Session: Pointers - Part (2), Structures, Unions, and enumerations
 * Date: 25/02/2023
 *************************************************************************************************************/
#include <stdio.h>


const int MAX = 3;

int main(void)
{
	int var[] = {10, 20, 30};
	int *ptr[MAX];

	int i;

for (i = 0; i < MAX; i++)
{
	ptr[i] = &var[i]; /* Assign the address of integer */
}

for (i = 0; i < MAX; i++)
{
	printf("var[%d] = %d\n", i, *ptr[i]);
}

return 0;

}

