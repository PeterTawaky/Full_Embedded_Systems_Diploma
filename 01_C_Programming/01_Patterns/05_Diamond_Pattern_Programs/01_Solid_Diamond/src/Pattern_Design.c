/*
 * pattern_Design.c
 *
 *  Created on: Dec 21, 2023
 *      Author: Peter Tawaky
 */

#include <stdio.h>
#include <stdlib.h>
#include "patter_Design.h"
void upper_part (int size) //size=9
{
	unsigned int row=1;
	unsigned int spaces;
	unsigned int space_change= (size/2);
	unsigned int print;
	unsigned int print_change=1;

	for(  ; row <= (size/2)+1 ; space_change-- , print_change+=2 , row++){
		for( spaces = 1 ; spaces <= space_change ; spaces++ )
		{
			printf(" ");
		}
		for(print=1 ; print <= print_change ; print++ )
		{
			printf("*");
		}
		printf("\n");
	}
}
void lower_part (int size)
{
	unsigned int row=1;
	unsigned int spaces;
	unsigned int space_change= 1;
	unsigned int print;
	unsigned int print_change= size-2;

	for(  ; row <= (size/2) ; row++ , space_change ++ , print_change-=2)
	{
		for(spaces = 1 ; spaces <= space_change ; spaces++ )
		{
			printf(" ");
		}
		for( print = 1 ; print <= print_change ; print++ )
		{
			printf("*");
		}
		printf("\n");
	}
}

