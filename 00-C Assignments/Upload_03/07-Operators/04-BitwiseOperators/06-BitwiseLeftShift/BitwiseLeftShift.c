#include<stdio.h>
int main(void)
{

	//function prototype
	void PrintBinaryFormOfNumber(unsigned int);

	//variable declarations
	unsigned int a;
	unsigned int num_bits;
	unsigned int result;

	//code
	printf("\n\n");
	printf("Enter An Integer=");
	scanf("%u", &a);

	printf("\n\n");
	printf("By How many bits you want to shift  A=%d to right ?", a);
	scanf("%u", &num_bits);

	printf("\n\n\n");

	//Bitwise And Operator implementation
	result = a << num_bits;
	printf("Bitwise RightShifting Of \nA=%d (Decimal) by %d bits  gives result %d(Decimal).\n\n", a, num_bits, result);
	PrintBinaryFormOfNumber(a);
	PrintBinaryFormOfNumber(result);

	return(0);
}//end of main function


void PrintBinaryFormOfNumber(unsigned int decimal_number)
{

	//variable declarations
	unsigned int quotient, remainder;
	unsigned int num;
	unsigned int binary_array[8];
	int i;

	//code
	for (i = 0; i < 8; i++)
		binary_array[i] = 0;


	printf("The Binary Form of the Decimal Integer %d Is \t=\t", decimal_number);
	num = decimal_number;
	i = 7;
	while (num != 0)
	{
		quotient = num / 2;
		remainder = num % 2;
		binary_array[i] = remainder;
		num = quotient;
		i--;
	}
	for (i = 0; i < 8; i++)
		printf("%u", binary_array[i]);

	printf("\n\n");

}//end of PrintBinayFormOfNumbers function