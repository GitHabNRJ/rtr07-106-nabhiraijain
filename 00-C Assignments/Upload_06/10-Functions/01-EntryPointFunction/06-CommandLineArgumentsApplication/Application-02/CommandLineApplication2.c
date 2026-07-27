#include<stdio.h>
#include<ctype.h> //atoi is libratry function which converts the ASCII numberic values in string format to its integer counterpart
#include<stdlib.h>

int main(int argc, char* argv[], char* envp[])
{
	//variable declarations

	int nrj_i;
	

	//code

	if (argc!= 4)
	{
		printf("\n\n");
		printf("Invalid Usage!!! Exotting Now...\n\n");
		printf("Usage:CommandLineArgumentsApplication<first name><middle name><surname>\n\n");
	}

	//** This program prints your full Name as entered in the command line arguments***
	

	printf("\n\n");
	printf("Your Full Name is :\n\n");

	//loops start from i=1 because i=0 will result in 'argv[i]'='argv[0]' which is the name of the program itself 'CommandLineApplication2.exe
	for (nrj_i = 1; nrj_i < argc; nrj_i++)
	{
		
		printf("%s", argv[nrj_i]);
	}
	printf("\n\n");
 return(0);

}







