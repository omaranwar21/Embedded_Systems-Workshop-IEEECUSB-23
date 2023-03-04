/*
 * Excersice1.c
 *
 *  Created on: 10 Feb 2023
 *      Author: Assem
 */

#include <stdio.h>

int main(void)
{
   char grade;
   printf("Please Enter Student Equivalent Grade :\n");
   fflush(stdout);
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
