#include<stdio.h>
#include<stdlib.h>

int main(int args, int* argv[], int* envp[])
{
	int** ptr_inrjArray = NULL;

	int inrj, jnrj;
	int num_rows, num_columns;


	//***Accept number of rows from user ***
	printf("\n\n");
	printf("Enter no of rows:");
	scanf("%d", &num_rows);

	//**Accept number of columns num_columns from user ***
	printf("\n\n");
	printf("Enter no of columns:");
	scanf("%d", &num_columns);

	//***ALLOCATING MEMORY TO 1D ARRAY which wil hold the base address of rows 
	printf("\n\n");
	printf("Memory allocation To 2D Integer array****\n\n");
	ptr_inrjArray = (int**)malloc(num_rows * sizeof(int*));
	if (ptr_inrjArray == NULL)
	{
		printf("FAILED TO ALLOCATE MEMORY TO %d ros of 2D Integer array Exiting now!!",num_rows);
		exit(0);
    }
	else
	
		printf("Meomory allocatio to %d ROWS of 2D Integer ARRAY SUCCEEDED!!!\n\n", num_rows);

		for (inrj = 0; inrj < num_rows; inrj++)
		{
			ptr_inrjArray[inrj] = (int*)malloc(num_columns * sizeof(int));
			if (ptr_inrjArray[inrj] == NULL)
			{
				printf("FAILED TO ALLOCATE MEMORY To Columns of Row %d of 2D INTEGER ARRAY !! EXITING NOW..\n\n", inrj);
				exit(0);
			}
			else
				printf("Memory ALLOCATION TO COLUMS OF ROW %d of 2D INTEGER ARRAY SUCCEEDED!!!\n\n", inrj);
        }
	
	//**Displaying values***
		for (inrj = 0; inrj < num_rows; inrj++)
		{
			printf("Base Address of Row %d:ptr_iArray[%d]=%p \t Address:%p\n", inrj, inrj, ptr_inrjArray[inrj], &ptr_inrjArray[inrj]);

		}
		printf("\n\n");
		for (inrj = 0; inrj < num_rows; inrj++)
		{
			for (jnrj = 0; jnrj < num_columns; inrj++)
			{
				printf("ptr_inrjArray[%d][%d]=%d \t At Address :%p\n", inrj, jnrj, ptr_inrjArray[inrj][jnrj],&ptr_inrjArray[inrj][jnrj]);

			}
			printf("\n");
		}
		//***FREEING MEMORY ALLOCATED TO EACH ROW **********

		for (inrj = (num_rows - 1); inrj >= 0; inrj--)
		{
			if (ptr_inrjArray[inrj])
				free(ptr_inrjArray[inrj]);
			ptr_inrjArray[inrj] = NULL;
			printf("MEMORY ALLOCATED TO ROW %d has been successuflly freed!!!\n\n", inrj);
		}
		//**
		if (ptr_inrjArray)
		{
			free(ptr_inrjArray);
			ptr_inrjArray = NULL;
			printf("MEMORY ALLOCATED To ptr_iArray has been successfully freed!!\n\n");
		}
	return(0);
}