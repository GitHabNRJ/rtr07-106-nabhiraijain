#include<stdio.h>
#include<conio.h>
int main(void)
{

//variable declarations
	int nrj_i, nrj_j;
	//code

	for (nrj_i = 1; nrj_i <= 20; nrj_i++)
	{
		for (nrj_j = 1; nrj_j <= 20; nrj_j++)
		{

			if (nrj_j > nrj_i)
			{
				break;
		   }
			else
			{
				printf("*");

			}
			
	  }
		printf("\n");

	}

	printf("\n\n");
	return(0);


}//end of main function