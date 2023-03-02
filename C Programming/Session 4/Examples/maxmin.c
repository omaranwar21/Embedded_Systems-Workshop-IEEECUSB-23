#include <stdio.h>

struct MinMax
{
    int min;
    int max;
};
/* Function declaration */
struct MinMax getMinMax(int * array,  int SIZE);

int main()
{
    int array[10];
    int N, i;

     struct MinMax arrayMinMax;


    printf("Enter size of array: ");
    scanf("%d", &N);

    printf("Enter %d elements in array:\n ", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", (array + i));
    }


    arrayMinMax = getMinMax(array, N);


    printf("Minimum value in array : %d \n", arrayMinMax.min);
    printf("Maximum value in array : %d \n", arrayMinMax.max);

    
    return 0;
}

/**
 * Function to find minimum and maximum value in array.
 *
 * @returns     The function returns a struct object containing
 *              minimum and maximum value in array.
 */
struct MinMax getMinMax(int * numbers, const int SIZE)
{
    int i;
    int min = *(numbers + 0);
    int max = *(numbers + 0);

    struct MinMax arrayMinMax;


    // Find minmum and maximum value
    for (i = 0; i < SIZE; i++)
    {
        if(*(numbers + i) < min)
            min = *(numbers + i);

        if(*(numbers + i) > max)
            max = *(numbers + i);
    }


    // Copy minimum and maximum vaue to return object.
    arrayMinMax.min = min;
    arrayMinMax.max = max;
    return arrayMinMax;
}