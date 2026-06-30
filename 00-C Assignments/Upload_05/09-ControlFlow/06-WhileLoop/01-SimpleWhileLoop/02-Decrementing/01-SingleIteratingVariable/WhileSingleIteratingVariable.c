#include<stdio.h>
int main(void)
{

	//variable declaration
	int nrj_i;

	//code
	printf("\n\n");
	printf("Printing digits 1 to 10:\n\n");

	nrj_i = 10;
	while (nrj_i >= 1)
	{
		printf("\t%d\n", nrj_i);

		nrj_i--;
	}

	printf("\n\n");
	return(0);

}//end of main loop