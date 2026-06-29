#include<stdio.h>
#include<conio.h>

int main(void)
{
//variable declarations
	int nrj_a, nrj_b;
	int nrj_result;

	char nrj_option, nrj_optiondivision;

	//code
	printf("\n\n");

	printf("Enter the value of 1st Number:\n");
	scanf("%d", &nrj_a);

	printf("Enter the value of 2nd Number:\n");
	scanf("%d", &nrj_b);

	printf("Enter Mathematical Operation Option in Character from List:\n");
	printf("'A' or 'a' For Addition:\n");
	printf("'S' or 's' For Addition:\n");
	printf("'M' or 'm' For Addition:\n");
	printf("'D' or 'd' For Addition:\n");

	nrj_option = getch();
	printf("\n\n");

	switch (nrj_option)
	{
	//Fall through condition for 'A' and 'a'
	case 'A':
	case 'a':
		nrj_result = nrj_a + nrj_b;
		printf("Addition of 1st Number & 2nd Number is result=%d\n\n", nrj_result);
		break;
	case 'S':
	case 's':
		if (nrj_a >= nrj_b)
		{
			nrj_result = nrj_a - nrj_b;
			printf("Subtraction of 1st Number & 2nd Number is result=%d\n\n", nrj_result);
		}
		else
		{
			nrj_result = nrj_b - nrj_a;
			printf("Subtraction of 2nd Number & 1sd Number is result=%d\n\n", nrj_result);
        }
		break;
	case 'M':
	case 'm':

		nrj_result = nrj_a * nrj_b;
		printf("Multiplication of 1st Number & 2nd Number is result=%d\n\n", nrj_result);
		break;
	case 'D':
	case 'd':
		printf("Enter Option In Character : \n\n");
		printf("'Q' or 'q' or '/' For Quotient Upon Divition:\n");
		printf("'R' or 'r' or '%%' For Reminder Upon Divition:\n");

		printf("Enter Option:");
		nrj_optiondivision = getch();

		printf("\n\n");
		switch (nrj_optiondivision)
		{
		case 'Q':
		case 'q':
		case '/':
			if (nrj_a >= nrj_b)
				{
					nrj_result = nrj_a / nrj_b;
					printf("Divition of 1st:%d & 2nd:%d number :%d\n\n", nrj_a, nrj_b, nrj_result);
				}
				else
				{
					nrj_result = nrj_b / nrj_a;
					printf("Divition of 1st:%d & 2nd:%d number :%d\n\n", nrj_b, nrj_a, nrj_result);

				}
			break; // break of case 'Q' or 'q' or '/'
			case 'R':
			case 'r':
			case '%':
				if (nrj_a >= nrj_b)
				{
					nrj_result = nrj_a % nrj_b;
					printf("Divition of 1st:%d & 2nd:%d number :%d\n\n", nrj_a, nrj_b, nrj_result);
				}
				else
				{
					nrj_result = nrj_b % nrj_a;
					printf("Divition of 1st:%d & 2nd:%d number :%d\n\n",nrj_b, nrj_a, nrj_result);

				}
				break;
			default:
				printf("Invalid character %c entered for divition , please ask user to enter again", nrj_optiondivision);
				break;
			}// end of Division switch case
		break; // 'break' of case 'D' or case 'd'
	default:
		printf("Invalid character %c entered in MainSwitch , please ask user to enter again", nrj_option);
		break;
}//end of switch block
printf("Out of the Swich case for MathematicalSwitchCase\n\n");
}//end of main function