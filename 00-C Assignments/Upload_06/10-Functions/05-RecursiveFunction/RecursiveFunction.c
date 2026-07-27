#include<stdio.h>

int main(int argc, char* argv[], char* envp[])
{

//variable declarations
	unsigned int nrjnum;

	//function prototype
	void recursive(unsigned int);

	//code

	printf("\n\n");
	printf("Enter any Number:\n\n");
	scanf("%u", &nrjnum);

	printf("\n\n");
	printf("Output of Recursive Function:\n\n");

	recursive(nrjnum);

	printf("\n\n");
	return(0);

}//end of main function

void recursive(unsigned int nrjcount)
{

//code
	printf("Recursive function count=%d\n", nrjcount);
	if (nrjcount > 0)
	{
		recursive(nrjcount - 1);
	}

}