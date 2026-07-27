#include<stdio.h>

#define NUM_ELEMENTS 10

int main(int args[], int* argv[], int* envp)
{

	//variable declarations
	int nrjiArray[NUM_ELEMENTS];
	int nrji, nrjnum;
	int nrjsum = 0;

	//code
	
	printf("\n\n");
	printf("Enter Integer Elements for Array:\n");
	for (int nrji = 0; nrji < NUM_ELEMENTS; nrji++)
	{
		scanf("%d", &nrjnum);
		nrjiArray[nrji] = nrjnum;

	}

	printf("\n\n");

	//***SEPARATING OUT EVEN NUMBERS FROM ARRAY ELEMENTS
	printf("Even Numbers Amongst the Array Elements are \n\n");
	for (int nrji = 0; nrji < NUM_ELEMENTS; nrji++)
	{
		if ((nrjiArray[nrji] % 2) == 0)
			printf("%d\n", nrjiArray[nrji]);

	}

	//***SEPARATING OUT ODD NUMBERS FROM ARRAY ELEMENTS
	printf("ODD Numbers Amongst the Array Elements are \n\n");
	for (int nrji = 0; nrji < NUM_ELEMENTS; nrji++)
	{
		if ((nrjiArray[nrji] % 2)!= 0)
			printf("%d\n", nrjiArray[nrji]);

	}


	return(0);


}//end of main function