#include<stdio.h>
#include<stdlib.h>

#define NUM_ROWS 5
#define NUM_COLUMNS 3

int main(int args[], int* argv[], int* envp[])
{
	int inrjArray[NUM_ROWS][NUM_COLUMNS];
	int i, j;
	int* ptr_iArray_Row = NULL;


	printf("\n\n");

	//*********User input values of 2D Array
	for (i = 0; i < NUM_ROWS; i++)
	{
		ptr_iArray_Row = inrjArray[i];
		for (j = 0; j < NUM_COLUMNS; j++)
		{
			*(ptr_iArray_Row + j) = (i + 1) * (j + 1);
		}
	}

	printf("\n\n");
	printf("2D Integer Array Elements along with Addresses:\n\n");
	//********Display user-input values of 2-D Array 
	for (i = 0; i < NUM_ROWS; i++)
	{
		
		ptr_iArray_Row = inrjArray[i];
		for (j = 0; j < NUM_COLUMNS; j++)
		{
			printf("*(ptr_iArray_Row + %d)=%d \t \t  At Address (ptr_iArray_Row + j):%p\n", j, *(ptr_iArray_Row + j), (ptr_iArray_Row + j));
			
		}
		printf("\n\n");
	}

	return(0);



}//end of main function