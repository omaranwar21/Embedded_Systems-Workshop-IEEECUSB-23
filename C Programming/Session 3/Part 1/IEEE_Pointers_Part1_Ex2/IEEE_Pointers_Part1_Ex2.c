/*************************************************************************************************************
 * Subject: Pointers - Part (1)
 * Session: Functions, Arrays, and Pointers - Part (1)
 * Date: 18/02/2023
 * Author: Youssef Ahmed Zaki
 *************************************************************************************************************/
#include <stdio.h>

int main(void)
{
    int var = 10;
    int *ptr = &var;
    printf("Address of the pointer in memory: %p\n",&ptr);
    printf("Pointer value: %p\n",ptr);
    printf("Address of var: %p\n",&var);
    printf("*ptr = %d \t var = %d\n",*ptr,var);
    *ptr = 15;                                       // var = 15
    printf("*ptr = %d \t var = %d\n",*ptr,var);
    printf("*&ptr = %p",*&ptr);
    return 0;
}
