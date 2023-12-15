/*
 ************************************************************************************
 *	File_Name : 02_Inverted_Half_Pyramid.c
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
	unsigned int dec;
	printf("Enter the number of Row Stars: ");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&size);
	dec = size;
	for( r=0 ; r < size ; r++ , dec-- )
	{
		for( c=0 ; c < dec ; c++ )
		{
			printf("*");
		}
		printf("\n");
	}
}
