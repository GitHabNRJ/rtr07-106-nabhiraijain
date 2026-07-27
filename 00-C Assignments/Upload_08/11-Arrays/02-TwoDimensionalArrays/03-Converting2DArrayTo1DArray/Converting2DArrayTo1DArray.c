#include<stdio.h>

#define NUM_ROWS 5
#define NUM_COLUMNS 3

int main(int args[], int* argv, int* engv[])
{

//variable declarations
	int inrjArray_2D[NUM_ROWS][NUM_COLUMNS];
	int iArray_1D[NUM_ROWS * NUM_COLUMNS];

	int nrji,nrjj;
	int nrjnum;

	//code
	printf("Enter Elements to fill up the Integer 2D Array:\n");
	for (nrji = 0; nrji< NUM_ROWS; nrji++)
	{
		printf("Row Number %d:\n", nrji);
		for (nrjj=0 ; nrjj<NUM_COLUMNS ;nrjj++)
		{
			printf("Enter Element Number %d:\n", nrjj);
			scanf("%d", &nrjnum);
			inrjArray_2D[nrji][nrjj] = nrjnum;
	    }
		printf("\n\n");
	}

	//****Display of 2D Array*******
	printf("\n\n");
	printf("Two-Dimentional(2D) Array of Integer is:\n");

	for (nrji = 0; nrji < NUM_ROWS; nrji++)
	{
		printf("Row Number %d\n", nrji);
		for (nrjj = 0; nrjj < NUM_COLUMNS; nrjj++)
		{
			printf("inrjArray_2D[%d][%d]=%d\t\t", nrji, nrjj, inrjArray_2D[nrji][nrjj]);
		}
		printf("\n\n");
	}

	//*******Converting 2D Interger Array to 1D Array 
	for (nrji = 0; nrji < NUM_ROWS; nrji++)
	{
		for (nrjj = 0; nrjj < NUM_COLUMNS; nrjj++)
		{
		iArray_1D[(nrji * NUM_COLUMNS) + nrjj] = inrjArray_2D[nrji][nrjj];
	   }

	}
	//***************Printing the 1-D Array****************/

	for (nrji = 0; nrji < (NUM_ROWS * NUM_COLUMNS); nrji++)
	{

	printf("iArray_1D[%d]=%d\n", nrji,iArray_1D[nrji]);

	}

	return(0);



}//end of main function 