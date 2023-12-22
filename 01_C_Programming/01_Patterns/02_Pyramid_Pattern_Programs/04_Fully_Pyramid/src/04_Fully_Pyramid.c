/*
 ============================================================================
 Name        : 04_Fully_Pyramid.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

void design (int size); //prototype

int main(void) {
	unsigned int size;
	printf("Enter the size you want: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&size);
	design (size);
}

void design (int size)
{
	unsigned int row=1;
	unsigned int spaces;
	unsigned int space_change= size;
	unsigned int print;
	unsigned int print_change=1;

	for(  ; row <= size ; space_change-- , print_change+=2 , row++){
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
