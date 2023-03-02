#include <stdio.h>
#include <string.h>
#include<stdlib.h>

#define EX_NUM 1

#if EX_NUM == 1

/*  EX 1
***************** Write a program to compare Between user input array and your array **************/

#define ARRAY_SIZE 5
int main(void)
{
    char my_arr[ARRAY_SIZE] = {1, 2, 3, 4, 5};
    char user_arr[ARRAY_SIZE];
    for (char i = 0; i < ARRAY_SIZE; i++)
    {
        printf("Please Enter Number %d Element ", (i + 1));
        fflush(stdout);
        scanf("%d", &user_arr[i]);
    }
    for (char i = 0; i < ARRAY_SIZE; i++)
    {
        if (my_arr[i] != user_arr[i])
        {
            printf("Arrays Are Not Equal");
            break;
        }
        if ((ARRAY_SIZE - 1) == i)
        {
            printf("Arrays Are Equal");
        }
    }
}
#endif
/*************************************************************************************************/
#if EX_NUM == 2
#define NUM_OF_ARRAYS 3
#define NUM_OF_ELEMENTS 2
/*EX 2
************* Write a program to store points of triangle ***************************************/
int main(void)
{
    char triangle[NUM_OF_ARRAYS][NUM_OF_ELEMENTS];
    for (char i = 0; i < NUM_OF_ARRAYS; i++)
    {

        printf("Please Enter point %d x \n", i + 1);
        scanf("%d", &triangle[i][0]);

        printf("Please Enter point %d y \n", i + 1);
        scanf("%d", &triangle[i][1]);
    }
    for (char i = 0; i < NUM_OF_ARRAYS; i++)
    {
        printf("{ %d , %d } \n", triangle[i][0], triangle[i][1]);
    }
}
#endif

#if EX_NUM==3
float avrg(int n1 ,int n2);

int main(void){
	int num1=10;
	int num2=5;
	printf("average = %f",avrg(num1,num2));

}
float avrg(int n1 ,int n2){
	float res = ((float) n1+(float) n2 )/2;
	return res;
}




#endif




#if EX_NUM == 4
#define ARRAY_SIZE 10
/*EX 3
*************** Write Function To Sort The Array  */
void sortArray(int arr[], int size);
void swap(int *x, int *y);
int main(void)
{
    int arr[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("please enter number %d element  ", i + 1);
        scanf("%d", &arr[i]);
    }
    sortArray(arr, ARRAY_SIZE);
    printf("[");
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        if (i == ARRAY_SIZE - 1)
        {
            printf(" %d", arr[i]);
        }
        else
        {
            printf(" %d , ", arr[i]);
        }
    }
    printf("]");
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sortArray(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

#endif
