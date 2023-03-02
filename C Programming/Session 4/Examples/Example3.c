#include <stdio.h>

struct result{
	int sum;
	int sub;
	int mul;
	float div;
};
struct result calc (int x ,int y);
void main (void)
{
	struct result Data;
	Data = calc(15,4);
	printf("	%d\n",ptr);
	printf("	Sum=%d\n",Data.sum);
	printf("	Sub=%d\n",Data.sub);
	printf("	Mul=%d\n",Data.mul);
	printf("	Div=%.2f\n",Data.div);
}
struct result calc (int x ,int y)
{
	struct result Local;
	Local.sum=x+y;
	Local.sub=x-y;
	Local.mul=x*y;
	Local.div=x/(float)y;
	return Local;
}