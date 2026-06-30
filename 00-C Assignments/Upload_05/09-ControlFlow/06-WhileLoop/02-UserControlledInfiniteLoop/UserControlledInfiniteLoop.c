#include<stdio.h>
int main(void)
{

	//variable declarations
	char nrj_option, nrj_ch = '\0';
	//code
	printf("\n\n");

	printf("Enter 'Y' or 'y' to enter the Infinite loop\n");
	printf("Once the Infinite loop Begins, Enter 'Q' or 'q' To Quit The Infinite loop\n\n");

	nrj_option = getchar();

	if (nrj_option == 'Y' || nrj_option == 'y')
	{
		 while (1)  //for (;;)
		{
			printf("Inside the Infinite while loop!!!\n");
			nrj_ch = getchar();
			if (nrj_ch == 'Q' || nrj_ch == 'q')
				break; // User controlled exiting from the for loop
		}//end of for loop

	}//end of while block
	printf("\n\n");
	printf("Exiting user controlled for loop\n");
	printf("\n\n");
} // end of main function
