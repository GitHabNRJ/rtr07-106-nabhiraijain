#include<stdio.h>
int main(void)
{

	//variable declarations
	int nrj_i, nrj_j;

	//code

	nrj_i = 1;
	while( nrj_i <= 10)
   {
		printf("nrj_i=%d", nrj_i);
		printf("-------\n\n");

		nrj_j=1;
		while( nrj_j<= 5) 
		{
			printf("\tnrj_j=%d\n",nrj_j);

			nrj_j++;
		}
		printf("\n\n");

		nrj_i++;
	}//end of while loop
	return(0);


}//end of main function