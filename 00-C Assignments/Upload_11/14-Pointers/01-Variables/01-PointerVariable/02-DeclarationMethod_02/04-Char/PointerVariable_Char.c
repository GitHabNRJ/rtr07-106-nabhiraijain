#include<stdio.h>

int main(int args[], int* argv[], int* envp[])
{
	//variable declaration

	char ch1;
	char* ptr = NULL;

	//code
	ch1 = 'N';

	printf("\n\n");

	printf("*****BEFORE ptr=&num***\n");
	printf("Value of 'char' =%c\n\n", ch1);
	printf("Address of 'char' =%p\n\n", &ch1);
	printf("Value at Address of 'char' =%c\n\n", *(&ch1));


	ptr = &ch1;


	printf("*****After ptr=&num***");
	printf("Value of 'num' =%c\n\n", ch1);
	printf("Address of 'num' =%p\n\n", &ch1);
	printf("Value at Address of 'num' =%c\n\n", *(&ch1));


	return(0);

}//end of main function