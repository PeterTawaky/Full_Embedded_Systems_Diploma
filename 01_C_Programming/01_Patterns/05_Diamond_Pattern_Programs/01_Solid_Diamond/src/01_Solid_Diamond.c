/*
 ************************************************************************************
 *	@File_Name	: Solid Diamond.c
 *	@Version  	: 1.0.0
 *	@Brief    	: Application on Pattern
 *	@Details  	: Use Multi Files & Function Concept
 *	@Date     	: 21 / 12 / 2023
 *	@Copyright	: Feel Free to Fork at Any Time
 *	@Author   	: Peter Tawaky
 ************************************************************************************
 */

/* ********************************* Includes Section ********************************* */
#include <stdio.h>
#include <stdlib.h>
#include "patter_Design.h"

/* ******************************* Main Program Section ******************************* */
int main(void)
{
	unsigned int size;
	printf("Enter the size you want: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&size);
	if(size % 2)
	{
		upper_part (size);
		lower_part (size);
	}
	else
	{
		size-=1;
		upper_part (size);
		lower_part (size);
	}
	return 0;
}

/*
	History Log
	------------------------------------------------------------
	Date			By		Brief
	-------------     	------------- 	-------------
	21.Dec,2023		Peter Tawaky	Implementation
	22.Dec,2023     Peter Tawaky    Making the Lower_Part Function
 */
