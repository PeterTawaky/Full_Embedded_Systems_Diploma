/*
 ************************************************************************************
 *	@File_Name	: 02_Function_Swap_Two_Numbers.c
 *	@Version  	: 1.0.0
 *	@Brief    	: Function Practice
 *	@Details  	:
 *	@Date     	: 14 / 12 / 2023
 *	@Copyright	: Feel Free to Fork at Any Time
 *	@Author   	: Peter Tawaky
 ************************************************************************************
 */

/* ****************************** Includes Section Start ****************************** */
#include <stdio.h>
#include <stdlib.h>
/* ******************************* Includes Section End ******************************* */

/* ************************* Sub-Program Declarations Start ************************** */
void swap (int n1, int n2);
/* ************************** Sub-Program Declarations End *************************** */

int main(void)
{
	signed int n1;
	signed int n2;
	printf("Please, enter two nymbers: ");
	printf("\n");
	printf("1) ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&n1);
	printf("2) ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&n2);
	printf("Before Swap-->n1= %d     n2=%d",n1,n2);
	printf("\n");
	swap(n1,n2);

	return 0;
}

void swap (signed int n1, signed int n2)
{
	signed int temp=n1;
	n1 = n2 ;
	n2 = temp ;
	printf("After Swap-->n1= %d     n2=%d",n1,n2);

}


/*
	History Log
	-------------------------------------------------
	Date				By				Brief
	-------------     	------------- 	-------------
	14.Dec,2023			Peter Tawaky	Implementation
 */
