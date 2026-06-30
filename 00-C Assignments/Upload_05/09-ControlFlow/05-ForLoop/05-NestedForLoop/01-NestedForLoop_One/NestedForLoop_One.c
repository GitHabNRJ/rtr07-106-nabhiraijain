#include<stdio.h>
int main(void)
{

//variable declarations
	int nrj_i, nrj_j;

	//code
	for (nrj_i = 1; nrj_i <= 10; nrj_i++)
	{
		printf("nrj_i=%d", nrj_i);
		printf("-------\n\n");

		for (nrj_j = 1; nrj_j <= 5; nrj_j++)
		{
			printf("\tnrj_j=%d\n", nrj_j);

		}
		printf("\n\n");

	}
	return(0);


}//end of main function