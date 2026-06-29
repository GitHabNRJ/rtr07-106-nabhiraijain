

#include<stdio.h>
   int main(void)

{

	//variable declaration
	   int nrj_age;
	//code
	printf("\n\n");
	printf("Enter the age of candidate:");
	scanf("%d", &nrj_age);

	if (nrj_age >= 18)
	{
		printf("You are eligible for voting!!!\n\n");
	}
	printf("You are under age not eligible for voting:!!!\n\n");

	return(0);

}