#include<stdio.h>

int main(int args[], int* argv[], int* envp)
{
//variable declarations

	int nrj_num = 5;
	const int* const ptr1 = &nrj_num;

	

	printf("\n");
	printf("Current Value of 'nrj_num'=%d\n", nrj_num);
	printf("Current 'ptr1' (Address of 'nrj_num') =%p\n", ptr1);



	return(0);
}