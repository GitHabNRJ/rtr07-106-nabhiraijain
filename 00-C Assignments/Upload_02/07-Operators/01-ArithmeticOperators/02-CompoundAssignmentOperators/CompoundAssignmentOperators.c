#include<stdio.h>
int main(void)
{
//variable declarations
	int a;
	int b;
	int x;

	//code
	printf("\n\n");
	printf("Enter a number:");
	scanf("%d", &a);

	printf("\n\n");
	printf("Enter another number:");
	scanf("%d", &b);
	printf("\n\n");

	x = a;
		a += b; // a=a+b 
	printf("Addition of A=%d and B=%d Gives %d\n", x, b, a);

	x = a;
	a -= b; //a=a-b;
	printf("Subtraction of A=%d and B=%d Gives %d\n", x, b, a);


	x = a;
	a *=  b;
	printf("Multiplication of A=%d and B=%d Gives %d.\n", x, b, a);

	x = a;
	a %= b;
	printf("Modulo Reminder  Of A=%d and B=%d Gives %d\n", x, b,a);

	x = a;
	a /= b;
	printf("Quotent Of A=%d and B=%d Gives %d\n", x, b, a);

	printf("\n\n");

}//end of main function