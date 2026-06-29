#include<stdio.h>
int main(void)
{
	int nrj_month;

	//code
	printf("\n\n");

	printf("Enter Number of Month(1 to 12) : ");
	scanf("%d", &nrj_month);

	printf("Entered mont is %d", nrj_month);
	printf("\n\n");

	// Calender using if-else if-else Ladder 
	if (nrj_month == 1)
		printf("Month number %d Is January!!!\n\n", nrj_month);
	else if (nrj_month == 2)
		printf("Month number %d Is February!!!\n\n", nrj_month);
	else if (nrj_month == 3)
		printf("Month number %d Is March!!!\n\n", nrj_month);
	else if (nrj_month == 4)
		printf("Month number %d Is April!!!\n\n", nrj_month);
	else if (nrj_month == 5)
		printf("Month number %d Is May!!!\n\n", nrj_month);
	else if (nrj_month == 6)
		printf("Month number %d Is June!!!\n\n", nrj_month);
	else if (nrj_month == 7)
		printf("Month number %d Is July!!!\n\n", nrj_month);
	else if (nrj_month == 8)
		printf("Month number %d Is August!!!\n\n", nrj_month);
	else if (nrj_month == 9)
		printf("Month number %d Is September!!!\n\n", nrj_month);
	else if (nrj_month == 10)
		printf("Month number %d Is October!!!\n\n", nrj_month);
	else if (nrj_month == 11)
		printf("Month number %d Is November!!!\n\n", nrj_month);
	else if (nrj_month == 12)
		printf("Month number %d Is December!!!\n\n", nrj_month);
	else
		printf("Invalid month %d enter , Please try again!!\n\n", nrj_month);

	printf("if -else if-else block ladder like  Switch case Block completed\n\n");

	return(0);
}//end of main function