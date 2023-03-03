/*
 ============================================================================
 Name        : Conditions_Exercise_3.c
 Author      : Mohamed Ayman
 Version     :
 Copyright   : Your copyright notice
 Description : Code to check check and print the student grade
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char grade;

	printf("Please Enter Student Equivalent Grade :\n");
	scanf("%c",&grade);

	switch(grade)
	{
	case 'a' :
	case 'A' :
		printf("Student Grade is Excellent!\n");
		break;
	case 'b' :
	case 'B' :
		printf("Student Grade is Very Good!\n");
		break;
	case 'c' :
	case 'C' :
		printf("Student Grade is Good\n");
		break;
	case 'd' :
	case 'D' :
		printf("Student Grade is Pass\n");
		break;
	case 'f' :
	case 'F' :
		printf("Student Grade is Fail\n");
		break;
	default  :
		printf("Invalid grade\n");
	}
	return 0;
}
