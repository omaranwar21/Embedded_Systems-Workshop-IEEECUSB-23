/******************************************************************************
 *
 * Session: 4
 *
 * Topic: User Defined Data Types (Enums)
 *
 * Date: 22/2/2023
 *
 * Author: Misara Ahmed
 *
 *******************************************************************************/
#include <stdio.h>

int main (void)
{
	//Example
	enum day
	{
		sun, mon, tue, wed, thu, fri, sat
	};

	enum day today = wed;
	printf("Wednesday = %d \n",today);
	printf("Friday = %d \n",fri);

	// Exercise

	enum DAY
	{
		SUN, MON, TUE = 10, WED, THU, FRI, SAT
	};







	enum DAY TODAY = WED;
	printf("Wednesday = %d \n",TODAY);
	printf("Sunday = %d \n",SUN);




	enum price
	{
		cake = 50 , soda = 70 , bread = 100
	};


	//ERROR, You can't make multiple keys with the same name in the same enum
//	enum myprice
//	{
//		CAKE = 50 , SODA = 70 , CAKE = 100
//	};
//
//	// You can assign the same value to more than one key
//	enum myprice
//	{
//		CAKE = 50 , SODA = 50 , BREAD = 100
//	};



}

