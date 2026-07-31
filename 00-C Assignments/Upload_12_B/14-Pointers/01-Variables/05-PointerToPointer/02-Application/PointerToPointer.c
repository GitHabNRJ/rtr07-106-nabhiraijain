#include<stdio.h>

int main(int args[], int* argv, int* envp[])
{
	int num;
	int* ptr = NULL;
	int** pptr = NULL;

	//code
	num = 10;

	printf("*****************before ptr=&num**************\n");
	printf("Value of 'num' =%d\n", num);
	printf("Address of 'num =%p\n", &num);
	printf("Value at address of num+=%d\n", *(&num));

	ptr = &num;
	printf("\n");

	printf("*****************After ptr=&num**************\n");
	printf("Value of 'num' =%d\n", num);
	printf("Address of 'num =%p\n", ptr);
	printf("Value at address of num=%d\n", *ptr);
    pptr = &ptr;
	printf("\n\n");

	printf("*****************After pptr=&ptr**************\n");
	printf("Value of 'num' =%d\n", num);
	printf("Address of 'num =%p\n", ptr);
	printf("Address of 'ptr'=%p\n", pptr);
	printf("Value at address of num=%d\n", *(&num));
	printf("Value at address of ptr=%p\n", *pptr);
	printf("Value at address of 'num' (*ptr) (*pptr)=%d\n", **pptr);

	return(0);










}//end of main function