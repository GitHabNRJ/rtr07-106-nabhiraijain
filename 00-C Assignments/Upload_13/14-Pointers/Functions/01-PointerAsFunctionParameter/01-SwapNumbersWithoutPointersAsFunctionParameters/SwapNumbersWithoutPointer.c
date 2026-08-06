#include<stdio.h>
int main(int args, int* argv[], int* envp[])
{

	void SwapNumbers(int, int);

	//variable declarations
	int anrj;
	int bnrj;

	//code
	printf("\n\n");
	printf("Enter value for 'A':");
	scanf("%d", &anrj);
	printf("Enter value for 'B':");
	scanf("%d", &bnrj);

	printf("\n\n");

	printf("Numbers before swapping:\n");
	printf("Value of 'A':%d\n", anrj);
	printf("Value of 'B':%d\n", bnrj);

	 SwapNumbers(anrj, bnrj);
	 printf("\n\n");

	 printf("Numbers After swapping in main function:\n");
	 printf("Value of 'A':%d\n", anrj);
	 printf("Value of 'B':%d\n", bnrj);

	 return(0);
}//end of main function


void SwapNumbers(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;

	printf("Numbers After swapping in SwapFunction:\n");
	printf("Value of 'X':%d\n", x);
	printf("Value of 'Y':%d\n", y);


}