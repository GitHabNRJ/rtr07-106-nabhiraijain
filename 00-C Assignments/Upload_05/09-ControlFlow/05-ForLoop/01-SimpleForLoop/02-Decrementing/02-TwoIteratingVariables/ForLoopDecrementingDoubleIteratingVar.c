#include<stdio.h>
int main(void)
{

	//variable declaration
	int nrj_i, nrj_j;

	//code
	printf("\n\n");
	printf("Printing digits 10 to 1 and 100 to 10:\n\n");

	for (nrj_i = 10, nrj_j = 100; nrj_i >= 1, nrj_j >= 10; nrj_i--, nrj_j = nrj_j - 10)
	{
		printf("\t %d \t\t  %d\n", nrj_i, nrj_j);

	}

	printf("\n\n");
	return(0);

}//end of main loop