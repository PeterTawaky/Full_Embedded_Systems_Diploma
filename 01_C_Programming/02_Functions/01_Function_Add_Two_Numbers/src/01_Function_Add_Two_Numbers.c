/*
 ************************************************************************************
 *	File_Name : Function_Add_Two_Numbers.c
 *	@Version  : 1.0.0
 *	@Brief    : Functions
 *	@Details  :
 *	@Date     :  /  / 202
 *	@Copyright: Feel Free to Fork at Any Time
 *	@Author   : Peter Tawaky
 ************************************************************************************
 */

#include <stdio.h>
#include <stdlib.h>

float add (float n1,float n2);

int main(void) {
	float n1;
	float n2;
	float sum;
	printf("Enter Two Numbers: \n");
	fflush(stdin);	fflush(stdout);
	scanf("%f%f",&n1,&n2);
	sum = add (n1,n2);
	printf("%f",sum);
}


float add (float n1, float n2)  //function definition
{
	return n1 + n2 ;
}
