#include<stdio.h>
int main(int argc, char* argv[],char * envp[])
{

	//variable declarations
	int nrj_i;

	//code
	printf("\n\n");
	printf("Hello World!!!!\n\n");
	printf("Number of command line arguments=%d\n\n", argc);

	printf("Command Line Arguments Passed To this program are :\n\n", argc);
	for (nrj_i = 0; nrj_i < argc; nrj_i++)
	{

		printf("Command Line Argument Number %d=%s\n", (nrj_i + 1), argv[nrj_i]);


	}
	printf("First 20 Environment Vairables Passed to this program are :\n\n");
		for (nrj_i= 0; nrj_i < 20; nrj_i++)
		{

			printf("Command Line Argument Number %d=%s\n", (nrj_i + 1), envp[nrj_i]);


		}

	printf("\n\n");
	return(0);
}

