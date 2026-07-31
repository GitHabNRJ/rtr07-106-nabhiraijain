#include<stdio.h>
#include<stdlib.h>

#define NUM_ROWS 5
#define NUM_COLUMNS 5

int main(int args, int* argv[], int* envp[])
{
//variable declaration
	int* iArray[NUM_ROWS];
	int i, j;

	//code
	printf("\n\n");
	for (i = 0; i < NUM_ROWS; i++)
	{
		iArray[i] = (int*)malloc((NUM_COLUMNS - i) * sizeof(int));
		if (iArray[i] == NULL)
		{
			printf("FAILED TO ALLOCATED MEMORY to row &d of 2D Integer array!!Exiting now\n\n", i);
			exit(0);
		}
		else
			printf("Memory Allocation to row %d of 2D Integer array succeeded!!!!\n\n",i);
    }

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < (NUM_COLUMNS - i); j++)
		{
			iArray[i][j] = (i * 1) + (j * 1);
		}
	}
	for (i = 0;i < 5; i++)
	{
		for (j = 0;j < (NUM_COLUMNS - i); j++)
		{
			printf("iArray[%d][%d]=%d \t At Address:%p\n", i, j, iArray[i][j], &iArray[i][j]);
	    }
		printf("\n");
    }

	for (i = (NUM_ROWS - 1); i >= 0; i--)
	{
		if (iArray[i])
		{
			free(iArray[i]);
			iArray[i] = NULL;
			printf("MEMORY ALLOCATED TO ROW %d has been successfully freed!!!\n\n", i);
		}
	}
	return(0);
}//end of main function