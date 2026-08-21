#include<stdio.h>

int main(int args[], int* argv[], int* envp[])
{
	//variable declarations
	float fnrjArray[10];
	float * ptr_fArray = NULL;

	int fnrj;

	//code
	for (fnrj = 0; fnrj < 10; fnrj++)
		fnrjArray[fnrj] = (float)(fnrj + 1) * 1.5f;

	ptr_fArray = fnrjArray;

	printf("\n\n");
	printf("Elements of the 'float' Array:\n\n");
	for (fnrj = 0; fnrj < 10; fnrj++)
		printf("fnrjArray[%d]=%f\n", fnrj, *(ptr_fArray+fnrj));



	printf("\n\n");
	printf("Elements of the 'float' Array: & Addresses \n\n");
	for (fnrj = 0; fnrj < 10; fnrj++)
	{
		printf("fnrjArray[%d]=%f \t\t Address=%p\n", fnrj, *(ptr_fArray+ fnrj), (ptr_fArray+ fnrj));
	}
	printf("\n\n");

	return(0);
}//end of main function