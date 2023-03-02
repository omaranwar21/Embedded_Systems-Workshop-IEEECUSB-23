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

void squareByReference(int *sptr);

void sumAndAverage(int m, int n, int k, int *sum, int *avg);

int arrayAverage(int *ptr, int size);

int main (void)
{
	/* initialize number */
	int x = 5;


	printf(" %d\n", x);


	/* initialize numbers, sum and average */
	int y = 10;
	int z = 15;
	int SUM = 0;
	int AVG = 0;

	sumAndAverage(x, y, z, &SUM, &AVG);

	printf(" %d \n %d\n", SUM, AVG);







	int array[5] = {1,2,3,4,5};
	int array_avg = 0;

	array_avg = arrayAverage( array , 5 );

	printf(" %d",array_avg);
	return 0;
}

void squareByReference(int *sptr)
{
	*sptr = *sptr * *sptr;
}

void sumAndAverage(int m, int n, int k, int *sum, int *avg)
{
	*sum = m + n + k;

	*avg = *sum/3 ;
}

int arrayAverage(int *ptr , int size)
{
	int avg = 0;
	for (int i=0 ; i<size ; i++)
	{
		avg = avg + *(ptr +i);
		//avg = avg + ptr[i];       //another way to loop on the array
	}
	avg = avg/size;
	return avg;
}
