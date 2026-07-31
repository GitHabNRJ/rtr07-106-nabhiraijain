#include<stdio.h>

int main(int args[], int* argv[], int* envp[])
{
	//variable declarations
	double dnrjArray[10];
	double* nptr = NULL;
	int inrj;

	//code
	printf("\n\n");
	for (inrj = 0; inrj < 10; inrj++)
		dnrjArray[inrj] = (float)(inrj + 1) * 3.111111f;


	nptr = dnrjArray;
	printf("Elements of the Double Array : & Address:\n");
	for (inrj = 0; inrj < 10; inrj++)
	{
		printf("inrjArray[%d]=%lf \t\t Address=%p\n", inrj, *(dnrjArray+inrj), (dnrjArray+inrj));
		
	}
	printf("\n\n");

	return(0);
}//end of main function