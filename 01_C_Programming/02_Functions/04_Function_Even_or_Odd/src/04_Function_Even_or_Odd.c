/*
 ************************************************************************************
 *	@File_Name	: Function Even or Odd.c
 *	@Version  	: 1.0.0
 *	@Brief    	: Function Practice
 *	@Details  	:
 *	@Date     	: 14 / 12 / 202
 *	@Copyright	: Feel Free to Fork at Any Time
 *	@Author   	: Peter Tawaky
 ************************************************************************************
 */

/* ****************************** Includes Section Start ****************************** */
#include <stdio.h>
#include <stdlib.h>
/* ===================================================================================+ */

/* ************************* Sub-Program Declarations Start ************************** */
void odd_or_even (int number);
/* =================================================================================== */

int main(void)
{
	auto signed int number;
	printf("Please, enter a number: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d", &number);
	odd_or_even (number);
	return 0;
}

void odd_or_even (int number)
{
	if(number%2)
	{
		printf("%d is Odd number",number);
	}
	else
	{
		printf("%d is Even number",number);
	}
}


/*
	History Log
	-------------------------------------------------
	Date				By				Brief
	-------------     	------------- 	-------------
	14.Dec,2023			Peter Tawaky	Implementation
 */
