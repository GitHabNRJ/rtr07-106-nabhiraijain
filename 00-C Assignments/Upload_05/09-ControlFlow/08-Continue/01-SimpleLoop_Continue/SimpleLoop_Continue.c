#include<stdio.h>
int main(void)
{

//variable declaration 
	int nrj_i;

	//code
	printf("/n/n");
	printf("Printing even numbers from 0 to 100\n");
	for (nrj_i = 0; nrj_i<= 100; nrj_i++)
	{
		if (nrj_i % 2 != 0)
		{
			continue;
		}
		else
		{
			printf("\t%d\n",nrj_i);
		}
    }

	printf("\n\n");


	return(0);
}//end of main 