#include <stdio.h>


union num{
	char x;
	short int y;
	int z;
};

void main (void)
{
	
	union num ahmed;
	
	printf("%d",sizeof(union num));
	
	
}