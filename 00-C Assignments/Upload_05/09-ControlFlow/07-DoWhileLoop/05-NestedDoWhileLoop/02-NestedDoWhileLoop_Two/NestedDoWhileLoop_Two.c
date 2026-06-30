#include<stdio.h>
int main(void)
{

	//variable declarations
	int nrj_i, nrj_j, nrj_k;

	//code
	nrj_i = 1;
	do
	{
		printf("----Outerloop iterator value=%d---", nrj_i);
		printf("\n\n");

		nrj_j = 1;
		do
		{
			printf("\tInnerLoop iterator value=%d\n", nrj_j);
			printf("\n\n");

			nrj_k = 1;
			do

			{
				printf("Innermost iterrator value=%d\n", nrj_k);
				nrj_k++;
			} while (nrj_k <= 3);
			printf("\n\n");

			nrj_j++;
		} while (nrj_j <= 5);
		printf("\n\n");
		nrj_i++;
	}while (nrj_i <= 10);
	return(0);


}//end of main function