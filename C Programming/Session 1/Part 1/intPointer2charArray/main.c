/*
 * main.c
 *
 *  Created on: Feb 19, 2023
 *      Author: Anwar
 */
#include <stdio.h>
int main(void){
	unsigned char au8Array[8]= {1, 2, 3, 4, 5, 6, 7, 8};
	unsigned int*p;
	p = (unsigned int*)au8Array;
	p++;
	printf("%x", *p);
}
