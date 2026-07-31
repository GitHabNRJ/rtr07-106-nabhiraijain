#include<stdio.h>

int main(int args[], int* argv[], int* envp[])
{
//variable declarations
	int inrjArray[10];
	int inrj;

	//code
	for (inrj = 0; inrj < 10; inrj++)
		inrjArray[inrj] = (inrj + 1) * 3;

	printf("Elements of the Integer Array : & address:\n");
	for (inrj = 0; inrj < 10; inrj++)
	{
		printf("inrjArray[%d]=%d \t\t Address=%p\n", inrj, inrjArray[inrj], &inrjArray[inrj]);
    }
	printf("\n\n");

return(0);
}//end of main function