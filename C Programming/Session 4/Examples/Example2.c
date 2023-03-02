#include <stdio.h>
struct emp{
	
	char age;
	char hours;
	unsigned int salary;
};
void main (void)
{
	struct emp alaa={22,40,5000};
	printf("age:%d\n",alaa.age); 
	printf("hours:%d\n",alaa.hours); 
	printf("salary:%d $\n",alaa.salary); 
}