#include<stdio.h>

//MACRO CONSTANT USED AS ARRAY SIZE IN SUBSCRIPT AND AS ARRAY LENGHT.
//HENCE,THIS PROGRAM'S ARRAYS' SIZES CAN BE SIMPLY CHANGED BY CHANGING THESE FOLLOWING 3 GLOBASL MACRO CONSTANT VALUES,BEFORE COMPILING,LINKING AND EXECUTING  THE PROGRAM!!!!

#define NRJINT_ARRAY_NUM_ELEMENTS 5
#define NRJFLOAT_ARRAY_NUM_ELEMENTS 3
#define NRJCHAR_ARRAY_NUM_ELEMENTS 15

int main(void)
{
//variable declarations
	int nrjiArray[NRJINT_ARRAY_NUM_ELEMENTS];
	float nrjfArray[NRJFLOAT_ARRAY_NUM_ELEMENTS];
	char nrjcArray[NRJCHAR_ARRAY_NUM_ELEMENTS];
	int nrji;

	//CODE

	//**********ARRAY ELEMENTS INPUT*****************
	printf("\n\n");
	printf("Enter Elements For 'Integer' Array:\n");
	for (int nrji = 0; nrji < NRJINT_ARRAY_NUM_ELEMENTS; nrji++)
		scanf("%d", &nrjiArray[nrji]);

	printf("Enter Elements For 'Floating' Array:\n");
	for (int nrji = 0; nrji < NRJFLOAT_ARRAY_NUM_ELEMENTS; nrji++)
		scanf("%f", &nrjfArray[nrji]);

	printf("Enter Elements For 'Char' Array:\n");
	for (int nrji = 0; nrji < NRJCHAR_ARRAY_NUM_ELEMENTS; nrji++)
	{
		nrjcArray[nrji] = getch();
		printf("%c\n", nrjcArray[nrji]);
	}

	//*****ARRAY ELEMENTS OUTPUT***********************
	printf("\n\n");
	printf("Integer Array Entered By You:\n\n");
	for (int nrji = 0; nrji < NRJINT_ARRAY_NUM_ELEMENTS; nrji++)
		printf("%d\n", nrjiArray[nrji]);

	printf("\n\n");

	printf("Floating-Point Array Entered by You:\n\n");
	for (int nrji = 0; nrji < NRJFLOAT_ARRAY_NUM_ELEMENTS; nrji++)
		printf("%f\n", nrjfArray[nrji]);

	printf("\n\n");

	printf("Character Array Entered By You : \n\n");
	for (int nrji = 0; nrji < NRJCHAR_ARRAY_NUM_ELEMENTS; nrji++)
	{
		printf("%c\n", nrjcArray[nrji]);

	}

	return(0);

}