/*************************************************************************************************************
 * Subject: Pointers - Part (1)
 * Session: Functions, Arrays, and Pointers - Part (1)
 * Date: 18/02/2023
 * Author: Youssef Ahmed Zaki
 *************************************************************************************************************/
#include <stdio.h>

void swap_pass_by_reference(int *num1_ptr,int *num2_ptr)
{
    int temp;
    temp = *num1_ptr;
    *num1_ptr = *num2_ptr;
    *num2_ptr = temp;
}

void swap_pass_by_value(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main(void)
{
    int num1 = 5, num2 = 3;
    printf("The two numbers before swapping : %d %d\n", num1, num2);
    swap_pass_by_value(num1, num2);
    printf("The two numbers after using swapping by Value : %d %d\n", num1, num2);
    swap_pass_by_reference(&num1, &num2);
    printf("The two numbers after using swapping by reference : %d %d\n", num1, num2);
    return 0;
}
