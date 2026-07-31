#include<stdio.h>

int main(int args, int* argv[], int* envp[])
{

	int nrj_num = 5;
	int  const* ptr1 = NULL;

	ptr1 = &nrj_num;
	printf("\n");
	printf("Current Value of 'nrj_num'=%d\n", nrj_num);
	printf("Current 'ptr1'(Address of 'nrj_num')=%p\n", ptr1);

	ptr1++;

	printf("\n\n");
	printf("After ptr1++,value of 'ptr1'=%p\n", ptr1);
	printf("Value at this new 'ptr1'=%d\n", *ptr1);
	printf("\n");

	return(0);

}//end of main function