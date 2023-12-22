/*
 ============================================================================
 Name        : 05_Inverted_Full_Pyramid.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned int size;
	unsigned int r;
	unsigned int print;
	unsigned int space;
	unsigned int space_change=1;
	unsigned int print_change;
	printf("Please, enter the size: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&size);
	for( r=1 , print_change=size ; r <= size ; r++ , space_change++ , print_change-- )
	{
		for( space=1 ; space <= space_change ; space++ )
		{
			printf(" ");
		}
		for( print=1 ; print<= print_change ; print++ )
		{
			printf("* ");
		}
		printf("\n");
	}

}
