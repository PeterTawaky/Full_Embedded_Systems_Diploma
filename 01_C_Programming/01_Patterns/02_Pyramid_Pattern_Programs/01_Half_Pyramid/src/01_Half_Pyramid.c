/*
 ************************************************************************************
 *	File_Name : 01_Half_Pyramid.c
 *	@Version  : 1.0.0
 *	@Brief    : Pyramid Pattern Pattern
 *	@Details  :
 *	@Date     : 11 / 12 / 2023
 *	@Copyright: Feel Free to Fork at Any Time
 *	@Author   : Peter Tawaky
 ************************************************************************************
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned int size;
	unsigned int r,c;
	unsigned int inc=1;
	printf("Enter the number of Row Stars: ");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&size);
	for( r=0 ; r < size ; r++ , inc++ )
	{
		for( c=0 ; c < inc ; c++ )
		{
			printf("*");
		}
		printf("\n");
	}
}
