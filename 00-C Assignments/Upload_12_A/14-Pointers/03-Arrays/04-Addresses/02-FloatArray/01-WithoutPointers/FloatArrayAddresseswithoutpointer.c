#include<stdio.h>

int main(int args[], int* argv[], int* envp[])
{
	//variable declarations
	int fnrjArray[10];
	int fnrj;

	//code
	for (fnrj = 0; fnrj < 10; fnrj++)
		fnrjArray[fnrj] = (float)(fnrj + 1) * 3.0f;

	printf("Elements of the Integer Array : & address:\n");
	for (fnrj = 0; fnrj < 10; fnrj++)
	{
		printf("inrjArray[%d]=%d \t\t Address=%p\n", fnrj, fnrjArray[fnrj], &fnrjArray[fnrj]);
	}
	printf("\n\n");

	return(0);
}//end of main function