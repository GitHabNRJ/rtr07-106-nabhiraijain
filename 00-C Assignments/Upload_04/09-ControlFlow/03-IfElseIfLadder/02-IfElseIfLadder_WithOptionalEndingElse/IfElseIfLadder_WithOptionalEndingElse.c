#include<stdio.h>
int main(void)
{
	//variable declaration
	int nrj_num;

	//code
	printf("Enter the number:");
	scanf("%d", &nrj_num);

	// if-else if Ladder demo
	if (nrj_num < 0)
		printf("The Number  %d is negative and less than zero!!!!\n\n", nrj_num);

	else if ((nrj_num) >= 0 && (nrj_num) <= 100)
		printf("The Number %d is Between 0 & 100\n\n", nrj_num);

	else if ((nrj_num) >= 100 && (nrj_num) <= 200)
		printf("The Number %d is Between 100 & 200\n\n", nrj_num);

	else if ((nrj_num) >= 200 && (nrj_num) <= 300)
		printf("The Number %d is Between 200 & 300\n\n", nrj_num);

	else if ((nrj_num) >= 300 && (nrj_num) <= 400)
		printf("The Number %d is Between 300 & 400\n\n", nrj_num);

	else if ((nrj_num) >= 400 && (nrj_num) <= 500)
		printf("The Number %d is Between 400 & 500\n\n", nrj_num);

	else if (nrj_num > 500)
		printf("The Number %d is Greateer than 500\n\n", nrj_num);

	else // This is the terminating else of this if-else if-else ladder
		printf("Invalid value Entered!!!!\n\n");

	return(0);
}//end of main function

