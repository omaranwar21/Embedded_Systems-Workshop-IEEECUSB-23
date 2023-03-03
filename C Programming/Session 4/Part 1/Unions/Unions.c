/******************************************************************************
 *
 * Session: 4
 *
 * Topic: User Defined Data Types (Unions)
 *
 * Date: 22/2/2023
 *
 * Author: Misara Ahmed
 *
 *******************************************************************************/

#include <stdio.h>
#include <string.h>

int main(void)
{
	// Definition
	union Number {
		char str[20];
		int x;
		float y;
	};

	union Number num1;
	num1.x = 10;
	printf("x = %d \n",num1.x);


	num1.y = 50.5;
	printf("y = %f \n",num1.y);


	strcpy(num1.str,"IEEE");
	printf("str = %s \n", num1.str);




	printf("Size of Number = %d \n", sizeof(num1));
	printf("x = %d \n",num1.x);
	printf("y = %f \n",num1.y);





	//Exercise

	union myChars
	{
		int number;
		struct
		{
			char m;
			char n;
			char l;
			char o;
		}CHARS;
	}chars;

	chars.CHARS.m = 0xAA;
	chars.CHARS.n = 0xBB;
	chars.CHARS.l = 0xCC;
	chars.CHARS.o = 0xDD;


	printf("number = %x \n",chars.number);

}
