#include<stdio.h>
int main(void)
{
//variable declarations

	int nrj_month;

	//code
	printf("\n\n");

	printf("Enter Number of Month(1 to 12) : ");
	scanf("%d",&nrj_month);

	printf("Entered mont is %d", nrj_month);
	printf("\n\n");

	switch (nrj_month)
	{
	case 1:
		printf("Month number %d Is January!!!\n\n", nrj_month);
		break;
	case 2:
		printf("Month number %d Is February!!!\n\n", nrj_month);
		break;
	case 3:
		printf("Month number %d Is March!!!\n\n", nrj_month);
		break;
    case 4:
		printf("Month number %d Is April!!!\n\n", nrj_month);
		break;
     case 5:
		printf("Month number %d Is May!!!\n\n", nrj_month);
		break;
	case 6:
		printf("Month number %d Is June!!!\n\n", nrj_month);
		break;

	case 7:
		printf("Month number %d Is July!!!\n\n", nrj_month);
		break;
	case 8:
		printf("Month number %d Is August!!!\n\n", nrj_month);
		break;
	case 9:
		printf("Month number %d Is Sep!!!\n\n", nrj_month);
		break;
	case 10:
		printf("Month number %d Is October!!!\n\n", nrj_month);
		break;
	case 11:
		printf("Month number %d Is November!!!\n\n", nrj_month);
		break;
	case 12:
		printf("Month number %d Is December!!!\n\n", nrj_month);
		break;
	default:
		printf("Invalid month %d enter , Please try again!!\n\n", nrj_month);
		break;

	}//end of switch case
	printf("Switch case Block completed\n\n");




}//end of main function