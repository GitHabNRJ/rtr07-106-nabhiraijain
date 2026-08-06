#include<stdio.h>

enum
{
	NEGATIVE = -1,
    ZERO,
	POSITIVE,
};

int main(int args, int* argv[], int* envp[])
{
	//Function Declaration
	int Difference(int, int, int*);

	//variable declaration 
	int anrj;
	int bnrj;
	int nrj_answer, nrj_ret;

	//code

	printf("\n\n");
	printf("Enter Value of 'A':");
	scanf("%d", &anrj);

	printf("\n\n");
	printf("Enter Value of 'A':");
	scanf("%d", &bnrj);

	nrj_ret= Difference(anrj, bnrj, &nrj_answer);

	printf("\n\n");
	printf("Difference of %d and %d=%d\n\n", anrj, bnrj, nrj_answer);

	if (nrj_ret == POSITIVE)
	{
		printf("Difference between both numbers is POSITIVE");

	}else if(nrj_ret == NEGATIVE)
	{
		printf("Difference between both numbers is NEGATIVE");

	}
	else
		printf("Difference betwen both numbser is ZERO");

	printf("\n\n");
}//end of main function

int Difference(int x, int y, int* diff)
{
	*diff = x - y;
	if ((*diff) > 0)
		return (POSITIVE);   //POSITIVE looks string but at top we declarated as ENUM so it will return the coresponding int value to main calling function
	else if((*diff < 0))
		return (NEGATIVE);
	else
		return ZERO;
}