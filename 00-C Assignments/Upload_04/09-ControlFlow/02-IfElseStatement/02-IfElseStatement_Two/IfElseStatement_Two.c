#include<stdio.h>
int main(void)
{
//variable declarations 
	int nrj_age;

	//code
	printf("\n\n");
	printf("Enter Age:");
	scanf("%d", &nrj_age);
	printf("\n\n");
	if (nrj_age >= 18)
	{
		printf("Entering if-block...\n\n");
		printf("You are Eligible for Voting!!!\n\n");

	}
	else
	{
		printf("Entering else-block...\n\n");
		printf("You are Not Eligible For Voting!!!\n\n");
	}
	printf("Bye!!!\n\n");
	return(0);
}