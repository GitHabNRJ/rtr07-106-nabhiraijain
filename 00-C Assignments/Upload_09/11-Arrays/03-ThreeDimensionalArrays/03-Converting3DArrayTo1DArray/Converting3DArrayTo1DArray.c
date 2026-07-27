#include<stdio.h>

#define NUM_ROWS 5
#define NUM_COLUMNS 3
#define NUM_DEPTH 2

int main(int args[], int* argv, int* engv[])
{

	//variable declarations
	int inrjArray_3D[NUM_ROWS][NUM_COLUMNS][NUM_DEPTH];
	int iArray_1D[NUM_ROWS * NUM_COLUMNS];

	int nrji,nrjj,nrjk;
	int nrjnum;

	//code
	printf("Enter Elements to fill up the Integer 3D Array:\n");
	for (nrji = 0; nrji < NUM_ROWS; nrji++)
	{
		printf("****Row Number %d:*******\n", nrji);
		for (nrjj = 0; nrjj < NUM_COLUMNS; nrjj++)
		{
			printf("Column Number %d:", nrjj);
			for (nrjk = 0; nrjk < NUM_DEPTH; nrjk++)
			{
				printf("Enter %d Element :\n", nrjk);
				scanf("%d", &nrjnum);
				inrjArray_3D[nrji][nrjj][nrjk] = nrjnum;
			}
		}
		printf("\n\n");
	}

	//****Display of 3D Array*******
	printf("\n\n");
	printf("Three-Dimentional(3D) Array of Integer is:\n");

	for (nrji = 0; nrji < NUM_ROWS; nrji++)
	{
		printf("Row Number %d\n", nrji);
		for (nrjj = 0; nrjj < NUM_COLUMNS; nrjj++)
		{
			printf("{");
			for (nrjk = 0; nrjk < NUM_DEPTH; nrjk++)
			{
				printf("inrjArray_3D[%d][%d][%d]=%d,", nrji, nrjj, nrjk, inrjArray_3D[nrji][nrjj][nrjk]);
			}
			printf("\b}");
			printf("\t\t");
		}
		printf("\n\n");
	}

	
       	//*******Converting 3D Interger Array to 1D Array 
	         for (nrji = 0; nrji < NUM_ROWS; nrji++)
	             {
				 for (nrjj = 0; nrjj < NUM_COLUMNS; nrjj++)
				 {

					 for (nrjk = 0; nrjk < NUM_DEPTH; nrjk++)
					 {

						 iArray_1D[(nrji * NUM_COLUMNS * NUM_DEPTH) + (nrjj * NUM_DEPTH) + nrjk] = inrjArray_3D[nrji][nrjj][nrjk];
					 }

				 }
	}
	//***************Printing the 1-D Array****************/

	
	for (nrji = 0; nrji < (NUM_ROWS * NUM_COLUMNS* NUM_DEPTH); nrji++)
	{

		printf("iArray_1D[%d]=%d\n", nrji, iArray_1D[nrji]);

	}
	
	

	return(0);

}//end of main function 