/*
************************************************************************************
*	@File_Name	: 02_Function_Square_of_Any_Number.c
*	@Version  	: 1.0.0
*	@Brief    	: Functions Practice
*	@Details  	:
*	@Date     	: 14 / 12 / 2023
*	@Copyright	: Feel Free to Fork at Any Time
*	@Author   	: Peter Tawaky
************************************************************************************
*/

/* ****************************** Include Section Start ****************************** */
#include <stdio.h>
#include <stdlib.h>
/* ******************************* Includes Section End ******************************* */

/* ************************* Sub-Program Declarations Start ************************** */
void square (void);
/* ************************** Sub-Program Declarations End *************************** */

int main (void){
	square ();
	return 0;
}

void square (void){
	int number;
	int square;
	printf("Please; enter a number: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&number);
	square = number*number;
	printf("it's Square is:%d",square);
}


/*
	History Log
	-------------------------------------------------
	Date				By				Brief
	-------------     	------------- 	-------------
	14.Dec,2023			Peter Tawaky	Implementation
*/
