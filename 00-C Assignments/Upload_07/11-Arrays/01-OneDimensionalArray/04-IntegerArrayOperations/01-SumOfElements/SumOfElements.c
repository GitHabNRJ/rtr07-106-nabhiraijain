#include<stdio.h>

#define NUM_ELEMENTS 10

int main(int args[],int *argv[],int *envp)
{

//variable declarations
	int nrjiArray[NUM_ELEMENTS];
	int nrji, nrjnum;
	int nrjsum = 0;

	//code
	printf("\n\n");
	printf("Enter Integer Elements for Array:\n");
	for (int nrji=0; nrji < NUM_ELEMENTS; nrji++)
	{
		scanf("%d",&nrjnum);
		nrjiArray[nrji] = nrjnum;

	}

	for (int nrji = 0; nrji < NUM_ELEMENTS; nrji++)
	{
		nrjsum = nrjsum + nrjiArray[nrji];

	}

	printf("\n\n");
	printf("Sum of All Elements of Array=%d\n\n", nrjsum);

	return(0);


}//end of main function