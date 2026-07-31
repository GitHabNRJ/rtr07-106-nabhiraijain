#include<stdio.h>

#define NUM_ELEMENTS 10

int main(int args[], int* argv[], int* envp[])
{

	//variable declarations
	int nrjiArray[NUM_ELEMENTS];
	int nrji, nrjnum;
	int nrjj, nrjcount = 0;

	//code

	printf("\n\n");

	//***ARRAY ELEMENTS INPUT****
	printf("Enter  Elements for Array:\n");
	for (int nrji = 0; nrji < NUM_ELEMENTS; nrji++)
	{
		scanf("%d", &nrjnum);
		if (nrjnum < 0)
			nrjnum = nrjnum * ( - 1);
		nrjiArray[nrji] = nrjnum;
	}

	//Number 1 is neither a prime Number nor a consonant.Prime Number are those which are divisible by only number=1 and Itself.

	printf("\n\n");

	//*****PRINTING ENTIRE ARRAY *****
	printf("\n\n");
	printf("Array Elements Are : \n\n");
	for (nrji = 0; nrji < NUM_ELEMENTS; nrji++)
		printf("%d\n",nrjiArray[nrji]);

			//***SEPARATING OUT EVEN NUMBERS FROM ARRAY ELEMENTS
		printf(" Prime Numbers Amongst the Array Elements are \n\n");
	for (int nrji = 0; nrji < NUM_ELEMENTS; nrji++)
	{
		for (int nrjj = 1; nrjj <= nrjiArray[nrji]; nrjj++)
		{
			if ((nrjiArray[nrji] % nrjj) == 0)
				nrjcount++;
		}

	

	           if (nrjcount == 2)
		        printf( "%d\n",nrjiArray[nrji]);
  			         nrjcount = 0;
    }


	return(0);


}//end of main function