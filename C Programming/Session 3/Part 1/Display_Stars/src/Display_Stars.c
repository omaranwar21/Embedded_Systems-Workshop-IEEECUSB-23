/*
 ===================================================================================================
 Name        : array_ex4.c
 Author      : Bassant Ahmed
 Description : Program to display number of * according to the value in each array element
 ===================================================================================================
 */

#include <stdio.h>

int main( void )
{
    /* use initializer list to initialize array n */
    int n[ 5 ] = { 1, 2, 3, 4, 5};

    int i; /* outer for counter for array elements */
    int j; /* inner for counter counts *s */

    /* for each element of array n, output a bar of the histogram */
    for ( i = 0; i < 5; i++ )
    {
        printf("%d\t",n[i]);

        for ( j = 1; j <= n[ i ]; j++ ) { /* print one bar */
            printf( "%c", '*' );
        } /* end inner for */

        printf( "\n" ); /* end a histogram bar */
    } /* end outer for */
    return 0;
}

