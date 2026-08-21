#include<stdio.h>

int main(int args[], int* argv[], int* envp[])
{
	//variable declarations
	float fnrjArray[10];
	int inrj;

	//code
	for (inrj = 0; inrj < 10; inrj++)
		fnrjArray[inrj] = (float)(inrj + 1) * 1.5f;

	printf("\n\n");
	printf("Elements of the 'float' Array:\n\n");
	for (inrj = 0; inrj < 10; inrj++)
		printf("fnrjArray[%d]=%f\n", inrj, fnrjArray[inrj]);

	
	printf("\n\n");
	printf("Elements of the 'Float' Array: & Addresses \n\n");
	for (inrj = 0; inrj < 10; inrj++)
	{
		printf("fnrjArray[%d]=%f \t\t Address=%p\n", inrj, fnrjArray[inrj], &fnrjArray[inrj]);
	}
	printf("\n\n");

	return(0);
}//end of main function