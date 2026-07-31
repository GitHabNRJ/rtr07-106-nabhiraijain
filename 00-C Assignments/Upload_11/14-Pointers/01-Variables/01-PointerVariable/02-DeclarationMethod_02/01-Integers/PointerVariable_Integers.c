#include<stdio.h>

int main(int args[], int* argv[], int* envp[])
{
	//variable declaration

	int num;
	int* ptr = NULL;

	//code
	num = 10;

	printf("\n\n");

	printf("*****BEFORE ptr=&num***\n");
	printf("Value of 'num' =%d\n\n", num);
	printf("Address of 'num' =%p\n\n", &num);
	printf("Value at Address of 'num' =%d\n\n", *(&num));


	ptr = &num;


	printf("*****After ptr=&num***");
	printf("Value of 'num' =%d\n\n", num);
	printf("Address of 'num' =%p\n\n", &num);
	printf("Value at Address of 'num' =%d\n\n", *(&num));


	return(0);

}//end of main function