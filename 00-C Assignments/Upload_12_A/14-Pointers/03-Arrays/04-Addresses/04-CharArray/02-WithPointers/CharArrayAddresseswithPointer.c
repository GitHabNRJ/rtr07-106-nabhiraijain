#include<stdio.h>

int main(int args[], int* argv[], int* envp[])
{
	//variable declarations
	char cnrjArray[10];
	int inrj;
	char* ptr = NULL;

	//code
	for (inrj = 0; inrj < 10; inrj++)
		cnrjArray[inrj] = (char)(inrj + 65);

	ptr = cnrjArray;


	printf("Elements of the Integer Array : & address:\n");
	for (inrj = 0; inrj < 10; inrj++)
	{
		printf("inrjArray[%d]=%c \t\t Address=%p\n", inrj, *(cnrjArray+inrj), (cnrjArray+inrj));
	}
	printf("\n\n");

	return(0);
}//end of main function