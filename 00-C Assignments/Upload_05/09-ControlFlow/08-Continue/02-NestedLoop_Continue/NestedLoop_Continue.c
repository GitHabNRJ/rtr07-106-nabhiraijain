#include<stdio.h>
int main(void)
{

//variable declarations
	int nrj_i, nrj_j;

	//code
	printf("\n\n");

	printf("Outer Loop Prints Odd Numbers between 1 and 10.\n\n");
	printf("Innder loop Prints Even Numbers between 1 and 10 for Every odd Number printed by Outer Loop\n\n");

	for (nrj_i=1; nrj_i<= 10; nrj_i++)  //Outer loop will print odd numbers
{
		if (nrj_i % 2 != 0)
		{ 
			printf("i=%d\n", nrj_i);
		    printf("-------\n");
			for (nrj_j = 1; nrj_j <= 10; nrj_j++)
			{
				if (nrj_j % 2 == 0)
				{
					printf("\t j=%d\n", nrj_j);
				}
				else
				{
					continue;
				}
			
			}
        }else
		{
			continue;
		}
		
		printf("\n\n");
     }
	return(0);
}//end of main functin