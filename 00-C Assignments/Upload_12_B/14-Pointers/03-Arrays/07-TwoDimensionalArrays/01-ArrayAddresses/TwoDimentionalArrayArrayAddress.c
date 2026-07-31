#include<stdio.h>
#include<stdlib.h>

#define NUM_ROWS 5
#define NUM_COLUMNS 3

int main(int args[], int* argv[], int* envp[])
{
	int inrjArray[NUM_ROWS][NUM_COLUMNS];
	int i, j;

	printf("\n\n");

	//*********User input values of 2D Array
	for (i = 0; i < NUM_ROWS; i++)
	{
		for (j = 0; j < NUM_COLUMNS; j++)
		{
			inrjArray[i][j] = (i + 1) * (j + 1);
		}
	}
	//********Display user-input values of 2-D Array 
	for (i = 0; i < NUM_ROWS; i++)
	{
		for (j = 0; j < NUM_COLUMNS; j++)
		{
			printf("{inrjArray[%d][%d]=%d,  at Add:=%p}",i, j, inrjArray[i][j],&(inrjArray[i][j]));
			printf("\t\t");
		}
		printf("\n\n");
	}
	printf("\n\n");



	return(0);



}//end of main function