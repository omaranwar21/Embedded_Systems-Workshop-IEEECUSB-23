#include <stdio.h>

struct complex{
  double real;
  double imaginary;
};

struct complex AddComplex(struct complex* first, struct complex * second);
void PrintComplex(struct complex * complex);







void main (void)
{
	struct complex x={5,6};
	struct complex y={6,5};
	struct complex sum;
	sum = AddComplex(&x,&y);
	PrintComplex(&x);
	PrintComplex(&y);
	printf("Sum = ");
	PrintComplex(&sum);
	
	
	
}


struct complex AddComplex(struct complex* first, struct complex * second)
{
	struct complex Temp_COMPLEX;
    //adding real part
    Temp_COMPLEX.real=first->real + second->real;
    // adding imaginary part
    Temp_COMPLEX.imaginary=first->imaginary + second->imaginary;

    return Temp_COMPLEX;
}



void PrintComplex(struct complex * complex)
{
	printf("%lf + %lf i\n",complex->real,complex->imaginary);
}