#include <stdio.h>
struct sensors{
	char temperature;
	char humidity;
	char vibration;
};
void measure(struct sensors *ptr);
void main (void)
{
	struct sensors reading1;
	measure(&reading1);
	struct sensors reading2=reading1;
	printf("temperature= %d celsius\n",
	reading2.temperature);
	printf("humidity= %d %%\n",
	reading2.humidity);
	printf("vibration= %d hz\n",
	reading2.vibration);
}

void measure(struct sensors *ptr)
{
	ptr->temperature=25; /*temp in Celsius */
	ptr->humidity=40; /*% humidity*/
	ptr->vibration=100; /*vibration in hertz*/
}