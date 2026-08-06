#include<stdio.h>
#include<stdarg.h>

int main(int args, int* argv[], int* envp[])
{

//function 
	int CalculateSum(int, ...);

	//variable declarations
	int answer;

	//code
	printf("\n\n");

	answer= CalculateSum(5, 10, 20, 30, 10,20,30,80);
	printf("Answer=%d\n\n", answer);

	answer = CalculateSum(10, 1,1,1,1,1,1,1,1,1,1);
	printf("Answer=%d\n\n", answer);

	answer = CalculateSum(0);
	printf("Answer=%d\n\n", answer);

	return(0);
	



}//end of main function

int CalculateSum(int num, ...)
{

	int sum_total = 0;
	int n;

	//variable argument variable declaration 
	va_list num_list;

	//Variable arugment list macro declaration 
	va_start(num_list, num);

	while (num)
	{
		n = va_arg(num_list, int);
		sum_total = sum_total + n;
		num--;
	}

	va_end(num_list);

	return(sum_total);

}//end of CalculateSum