#include<stdio.h>
int main(void)
{

	//variable declarations
	int nrj_i, nrj_j, nrj_k;

	//code
	for (nrj_i = 1; nrj_i <= 10; nrj_i++)
	{
		printf("----Outerloop iterator value=%d---", nrj_i);
		printf("\n\n");

		for (nrj_j = 1; nrj_j <= 5; nrj_j++)
		{
			printf("\tInnerLoop iterator value=%d\n", nrj_j);
			printf("\n\n");

			for (nrj_k = 1; nrj_k <=3; nrj_k++)
			{
				printf("Innermost iterrator value=%d\n", nrj_k);
			}
				printf("\n\n");
			

		}
		printf("\n\n");

	}
	return(0);


}//end of main function