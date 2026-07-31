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
	
	printf("num=%d\n", num);
	printf("&num=%p\n", &num);
	printf("*(&num)=%d\n", *(&num));
	printf("ptr=%p\n", ptr);
	printf("*ptr=%d\n", *ptr);

	printf("\n\n");

	printf("Answer of (ptr+10)=%p\n", (ptr + 10));

	printf("Value at  (ptr+10)=%d\n", *(ptr + 10));

	printf("Answer of (*ptr+10=%d\n", (*ptr + 5));

	++*ptr;
	printf("Anser of ++*ptr:%d\n", *ptr);

	*ptr++;
	printf("Anwser of *ptr++:%d\n", *ptr);

	ptr = &num;
	(*ptr)++;
	printf("Anser of (*ptr)++:%d\n\n", (*ptr)++);




	return(0);

}