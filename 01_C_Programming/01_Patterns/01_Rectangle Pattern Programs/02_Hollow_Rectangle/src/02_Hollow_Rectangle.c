/*
 ************************************************************************************
 *	File_Name : 02_Hollow_Rectangle.c
 *	@Version  : 1.0.0
 *	@Brief    :	Pattern
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
	unsigned int column_stars;
	unsigned int r,c;
	printf("Enter the number of Row Stars: ");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&row_stars);
	printf("Enter the number of Column Stars: ");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&column_stars);
	for( r=0 ; r < row_stars ; r++ )
	{
		if((r == 0) || (r == (row_stars-1)))    //solid print
		{
			for( c = 0 ; c < column_stars ; c++ )
			{
				printf("*");
			}
			printf("\n");
		}
		else                               //Hollow Print
		{
			printf("*");
			for( c = 0+2 ; c < column_stars ; c++ )
			{
				printf(" ");
			}
			printf("*\n");
		}

	}
}
