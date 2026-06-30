#include<stdio.h>
int main(void)
{

    //variable declarations
	char nrj_option, nrj_ch = '\0';
	//code
	printf("\n\n");

	printf("Enter 'Y' or 'y' to enter the Infinite loop\n");
	printf("Once the Infinite loop Begins, Enter 'Q' or 'q' To Quit The Infinite loop\n\n");

	 do
		  {
          
		 do
		 {

			 printf("Inside the loop!!!\n");
			 nrj_ch = getch();

		 } while (nrj_ch != 'Q' & nrj_ch!= 'q');

			printf("Inside the Infinite do-while loop again!!!, provide the user input to enter the queue again!!!\n");
			nrj_option= getch();

		  } while(nrj_option == 'Y' || nrj_option == 'y');
			

	printf("\n\n");
	printf("Exiting user controlled for loop\n");
	printf("\n\n");
} // end of main function
