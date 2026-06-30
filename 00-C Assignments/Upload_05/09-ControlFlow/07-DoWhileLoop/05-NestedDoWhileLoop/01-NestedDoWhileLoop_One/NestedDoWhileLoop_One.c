#include<stdio.h>
int main(void)
{

	//variable declarations
	int nrj_i, nrj_j;

	//code

	nrj_i = 1;
	do
	{
		printf("nrj_i=%d", nrj_i);
		printf("-------\n\n");

		nrj_j = 1;
		do {

			printf("\tnrj_j=%d\n", nrj_j);

			nrj_j++;
		} while (nrj_j <= 5);
		
		printf("\n\n");

		nrj_i++;
	} while (nrj_i <= 10);

	return(0);


}//end of main function