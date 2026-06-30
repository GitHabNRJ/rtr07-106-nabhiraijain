#include<stdio.h>
int main(void)
{

	//variable declaration
	int nrj_i, nrj_j;

	//code
	printf("\n\n");
	printf("Printing digits 1 to 10 and 10 to 100:\n\n");

	nrj_i = 10;
	nrj_j = 100;
	while (nrj_i >= 1, nrj_j >= 10)
	{
		printf("\t%d\t\t%d\n", nrj_i, nrj_j);

		nrj_i--;
		nrj_j = nrj_j -10;
	}


	printf("\n\n");
	return(0);

}//end of main loop

