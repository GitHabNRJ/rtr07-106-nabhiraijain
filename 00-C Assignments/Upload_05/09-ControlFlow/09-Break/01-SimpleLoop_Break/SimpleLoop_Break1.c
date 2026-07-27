#include<stdio.h>
#include<conio.h>
int main(void)
{
	//variable declarations
	int nrj_i;
	char nrj_ch;

	//code
	printf("\n\n");
	printf("Print the  numbers from 1 to 100 :Breaks the loop on entering 'Q','q'\n");
	for (nrj_i = 1; nrj_''i <= 100; nrj_i++)
	{
		printf("\t%d\n", nrj_i);
		nrj_ch = getch();
		if (nrj_ch == 'Q' || nrj_ch == 'q')
		{
			break;
		}

	}
	printf("\n\n");
	printf("EXITING LOOP..");
	printf("\n\n");

	return(0);
}//end of main function