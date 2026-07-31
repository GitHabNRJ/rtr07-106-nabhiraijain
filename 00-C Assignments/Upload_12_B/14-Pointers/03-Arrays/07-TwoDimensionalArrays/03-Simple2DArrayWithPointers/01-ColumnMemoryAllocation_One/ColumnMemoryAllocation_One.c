#include<stdio.h>
#include<stdlib.h>

#define NUM_ROWS 5
#define NUM_COLUMNS 3

int main(int args[], int* argv[], int* envp[])
{
	int* iArray[NUM_ROWS]; //A 2-D Array which have 5 rows colums column be added dynamically later

	int i, j;
	printf("\n\n");
	for (i = 0; i < NUM_ROWS; i++)
	{
		iArray[i] = (int*)malloc(NUM_COLUMNS * sizeof(int));
		if (iArray[i] == NULL)
		{
			printf("FAILED TO ALLOCATE MEMORY TO ROW %d of 2D INTEGER ARRAY!!! Exiting now\n", i);
			exit(0);
		}
		else
		{
			printf("Memory Allocation to row %d OF 2d INTEGER ARRAY SUCCESSED !!\n\n", i);
		}
	}
		//Assigning values to 2D Array
		printf("\n\n");
		printf("ASSIGNING VALUE TO  2D ARRAY:");

		for (i = 0; i < NUM_ROWS; i++)
		{
			for (j = 0; j < NUM_COLUMNS; j++)
			{
				iArray[i][j] = (i + 1) * (j + 1);
		    }
		}

		printf("\n\n");
		printf("DISPLAYING 2D ARRAY:\n\n");
		for (i = 0; i < NUM_ROWS; i++)
		{
			for (j = 0; j < NUM_COLUMNS; j++)
			{
				printf("iArray[%d][%d] =%d",i,j,iArray[i][j]);
			}
			printf("\n\n");
		}
		printf("\n\n");

	

	//FREEING MEMORY ASSIGNED TO 2D Array must be freed in Reverse Order 

	for (i = (NUM_ROWS - 1); i >= 0; i--)
	{
		free(iArray[i]);
		iArray[i] = NULL;
		printf("MEMORY ALLOCATED TO ROW %d of 2D Array has been freed successfully!!!\n\n", i);
	}


	return(0);

}//end of main function
