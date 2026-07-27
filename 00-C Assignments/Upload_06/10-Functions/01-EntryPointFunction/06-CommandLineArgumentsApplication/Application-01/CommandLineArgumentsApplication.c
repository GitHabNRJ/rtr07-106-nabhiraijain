#include<stdio.h>
#include<ctype.h> //atoi is libratry function which converts the ASCII numberic values in string format to its integer counterpart
#include<stdlib.h>

int main(int argc, char* argv[], char* envp[])
{
	//variable declarations

	int nrj_i;
	int nrj_num;
	int nrj_sum = 0;

	//code

	if (argc == 1)
	{
		printf("\n\n");
		printf("No Numbers given for Addition!!Exitting now..\n\n");
		printf("Usage:CommandLineArgumentsApplication<first number><second number>...\n\n");
		exit(0);
	}

	//** This program adds all command line argumens given in integer form only and outputs the sum**
	//**Due to usage of atoi(), all command line arguments of types other than int are ignored

	printf("\n\n");
	printf("Sum of all Integer command line arguments id:\n\n");

	for (nrj_i = 1; nrj_i < argc; nrj_i++)
	{
		nrj_num = atoi(argv[nrj_i]);
		nrj_sum = nrj_sum + nrj_num;

	}
	printf("Sum=%d\n\n", nrj_sum);

	return(0);

}


	




