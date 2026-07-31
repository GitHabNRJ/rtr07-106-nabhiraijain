#include<stdio.h>
#include<stdlib.h>

#define NUM_ROWS 5
#define NUM_COLUMNS 3

int main(int args[], int* argv[], int* envp[])
{
	//int inrjArray[NUM_ROWS][NUM_COLUMNS];
	int i, j;
	int** ptr_iArray_Row = NULL;

	

	printf("\n\n");


	ptr_iArray_Row = (int**)malloc(NUM_ROWS * sizeof(int*));
	if (ptr_iArray_Row == NULL)
	{
		printf("MEMORY Allocation of 1D Array of %d rows failed Exiting Now!!\n", NUM_ROWS);
		exit(0);
	}
	else
	{
		printf("Memory Allocation of 1D Array of %d rows SUCCEDDED!\n", NUM_ROWS);
	}
	//****ALLOCATING MEMORY To Each row 

	for (i = 0; i < NUM_ROWS; i++)
	{
		ptr_iArray_Row[i] = (int *)malloc(NUM_COLUMNS*sizeof(int));
		
			if (ptr_iArray_Row == NULL)
			{
				printf("MEMORY Allocation of 1D Array of %d rows failed Exiting Now!!\n", NUM_ROWS);
				exit(0);
			}
			else
			{
				printf("Memory Allocation of 1D Array of %d rows SUCCEDDED!\n", NUM_ROWS);
			}

	}
		//***ASSIGNING VALUES*****
	for (i=0;i<NUM_ROWS;i++)
	{ 
		for (j = 0; j < NUM_COLUMNS; j++)
		{
			*(*(ptr_iArray_Row+i) + j) = (i + 1) * (j + 1);
		}
	}
	//********Display user-input values of 2-D Array 
	printf("\n\n");
	printf("2D Integer Array Elements Along with Address:\n\n");

	for (i = 0; i < NUM_ROWS; i++)
	{
		for (j = 0; j < NUM_COLUMNS; j++)
		{
			printf("{ptr_iArray_Row[%d][%d]=%d,  at Add:=%p}",i, j, ptr_iArray_Row[i][j], &ptr_iArray_Row[i][j]);
			printf("\t\t");
		}
		printf("\n\n");
	}

	//***FREEING ALLOCATED MEMORY***
	//***FREEING MEMORY OF EACH ROW******

	for (i = (NUM_ROWS - 1); i >= 0; i++)
	{
		if (*(ptr_iArray_Row + i))
		{
			free(*(ptr_iArray_Row + i));
			*(ptr_iArray_Row + i) = NULL;
			printf("MEMORY ALLOCATED TO ROW %D has been FREED SUCCESSFULLY\n", i);
		}
	}
	if (ptr_iArray_Row)
	{
		free(ptr_iArray_Row);
		ptr_iArray_Row = NULL;

		printf("MEMORY ALLOCATED TO double pointer(**ptr_iArray_Row)has been FREED SUCCESSFULLY\n");
	}
	printf("\n\n");



	return(0);
}//end of main function