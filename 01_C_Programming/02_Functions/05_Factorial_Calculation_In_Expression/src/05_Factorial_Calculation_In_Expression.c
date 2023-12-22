/*
 ************************************************************************************
 *	@File_Name	: Factorial_Calculation_In_Expression.c
 *	@Version  	: 1.0.0
 *	@Brief    	: Function Practice
 *	@Details  	:
 *	@Date     	: 15 / 12 / 202
 *	@Copyright	: Feel Free to Fork at Any Time
 *	@Author   	: Peter Tawaky
 ************************************************************************************
 */

/* ********************************* Includes Section ********************************* */
#include <stdio.h>
#include <stdlib.h>
/* ==================================================================================== */

/* ***************************** Sub-Program Declarations ***************************** */
int factorial ( int number );
/* ==================================================================================== */

/* ******************************* Main Program Section ******************************* */
int main(void)
{
	unsigned int result;
	result = (factorial(1)/1)+(factorial(2)/2)+(factorial(3)/3)+(factorial(4)/4)+(factorial(5)/5);
	printf("Function : find the sum of 1!/1+2!/2+3!/3+4!/4+5!/5 :\n");
	printf("----------------------------------------------------------\n");
	printf("The sum of the series is : %d\n\n",result);

	return 0;
}

/* ****************************** User Defined Functions ****************************** */
/* ==================================================================================== */
/*
	@Brief      : Calculating the factorial of any number sent
	@Parameters : one integer number
	@Return		: the Factorial of this number
 */
int factorial( int number )
{
	register int i;
	signed int fact=1;
	for( i=1 ; i <= number ; i++ )
	{
		fact *= i;
	}
	return fact;
}

/*
	History Log
	-------------------------------------------------
	Date			By		Brief
	-------------     	------------- 	-------------
	15.Dec,2023		Peter Tawaky	Implementation
 */
