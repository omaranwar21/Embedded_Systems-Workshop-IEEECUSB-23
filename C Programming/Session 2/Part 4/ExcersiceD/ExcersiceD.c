/*
 * Excersice1.c
 *
 *  Created on: 10 Feb 2023
 *      Author: Assem
 */

#include<stdio.h>
#define ROWS 5

void main( void )
{
	for( int i =1 ; i<=ROWS ; i++){  //LOOP FOR ROWS
		for(int j=1; j <=ROWS-i ; j++)  //LOOP FOR SPACES
			printf(" ");
		for(int k = 1; k<=2*i-1 ; k++)  //LOOP FOR STARS
			printf("*");
		printf("\n");
	}
}
/*
in pattern like questions, mostly you will need two loops, one for rows and the other is for columns.
go through all rows in outer loops then all columns in the inner loop to print the characters.
if there are multiple characters use more than one (inner) loop to be able to print different characters in the columns
*/
