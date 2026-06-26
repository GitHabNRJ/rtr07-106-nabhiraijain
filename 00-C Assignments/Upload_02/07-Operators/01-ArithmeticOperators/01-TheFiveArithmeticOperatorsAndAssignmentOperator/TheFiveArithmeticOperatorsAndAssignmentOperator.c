#include<stdio.h>
int main(void)
{
//variable declarations
	int a;
	int b;
	int result;

	//code
	printf("\n\n");
	printf("Enter A Number:");
	scanf("%d", &a);

	printf("\n\n");
	printf("Enter another number:");
	scanf("%d", &b);

	printf("\n\n");

	//Following are the 5 arithmetic operators +,-,*,/ &%
	//Resultant of the arithmetic operators performed on 2 operands with any of the above operators is assigned to resultant via =assignment operator 

	result = a + b;
	printf("Addition of A=%d and B=%d Gives result=%d.\n", a, b, result);

	result = a - b;
	printf("Subtraction Of A=%d and B=%d Gives result=%d\n", a, b, result);


	result = a * b;
	printf("Multiplication of A=%d and B=%d Gives result=%d.\n", a, b, result);

	result = a % b;
	printf("Modulo Reminder  Of A=%d and B=%d Gives result=%d\n", a, b, result);

	result = a / b;
	printf("Quotent Of A=%d and B=%d Gives result=%d\n", a, b, result);

	return(0);

}