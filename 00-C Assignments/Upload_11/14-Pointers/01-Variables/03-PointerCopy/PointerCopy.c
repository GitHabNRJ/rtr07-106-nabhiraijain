#include<stdio.h>

int main(int args[], int* argv[], int* envp[])
{

//variable declarations
	int num;
	int* ptr = NULL;
	int* copy_ptr = NULL;

	//codes
	num = 5;
	ptr = &num;

	printf("\n\n");
	printf("**********BEFORE copy_ptr*****\n\n");
	printf("num=%d\n",num);
	printf("&num=%p\n", &num);
	printf("*(&num)=%d\n", *(&num));
	printf("ptr=%p\n", ptr);
	printf("*ptr=%d\n", *ptr);

	copy_ptr = ptr;

	printf("\n\n");
	printf("**********BEFORE copy_ptr*****\n\n");
	printf("num=%d\n", num);
	printf("&num=%p\n", &num);
	printf("*(&num)=%d\n", *(&num));
	printf("ptr=%p\n", ptr);
	printf("*ptr=%d\n", *ptr);
	printf("ptr=%p\n",copy_ptr);
	printf("*ptr=%d\n", *copy_ptr);



	return(0);

}