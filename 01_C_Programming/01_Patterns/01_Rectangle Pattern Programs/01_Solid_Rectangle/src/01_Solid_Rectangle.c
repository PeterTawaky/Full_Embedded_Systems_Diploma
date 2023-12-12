/*
 ************************************************************************************
 *	File_Name : 01_Solid_Rectangle.c
 *	@Version  : 1.0.0
 *	@Brief    : Pattern
 *	@Details  :
 *	@Date     : 11 / 12 / 2023
 *	@Copyright: Feel Free to Fork at Any Time
 *	@Author   : Peter Tawaky
 ************************************************************************************
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned int row_stars;
	unsigned int coulmn_stars;
	unsigned int r,c;
	printf("Enter the number of Row Stars: ");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&row_stars);
	printf("Enter the number of Column Stars: ");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&coulmn_stars);
	for( r=0 ; r < row_stars ; r++ )
	{
		for( c=0 ; c<coulmn_stars ; c++ )
		{
			printf("*  ");
		}
		printf("\n");
	}
}
