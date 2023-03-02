#include <stdio.h>
#include "STD_TYPES.h"
typedef struct
{
	u32 salary;
	u32 bonus;
	u32 deduction;
}emp;



void main (void)
{
	emp ahmed;
	emp amr;
	emp waled;
	printf("Please Enter Ahmed salary : ");
	scanf("%d",&ahmed.salary);
	printf("please enter ahmed bonus: ");
	scanf("%d",&ahmed.bonus);
	printf("Please enter ahmed deduction: ");
	scanf("%d",&ahmed.deduction);
	
	printf("Please Enter amr salary : ");
	scanf("%d",&amr.salary);
	printf("please enter amr bonus: ");
	scanf("%d",&amr.bonus);
	printf("Please enter amr deduction: ");
	scanf("%d",&amr.deduction);
	
	printf("Please Enter waled salary : ");
	scanf("%d",&waled.salary);
	printf("please enter waled bonus: ");
	scanf("%d",&waled.bonus);
	printf("Please enter waled deduction: ");
	scanf("%d",&waled.deduction);
	int sum=(ahmed.salary+ahmed.bonus-ahmed.deduction+
			amr.salary+amr.bonus-amr.deduction
			+waled.salary+waled.bonus-waled.deduction);
	printf("Total value needed: %d",sum);

}	