#include<stdio.h>
#include<stdarg.h>

#define NUM_TO_BE_FOUND 3
#define NUM_ELEMENTS 10

int main(int args, int* argv[], int* envp[])
{

	//function prototypes

	void FindNumber(int, int, ...);

	//code
	printf("\n\n");

	FindNumber(NUM_TO_BE_FOUND, NUM_ELEMENTS, 3, 5, 9, 2, 3, 6, 9, 3, 1, 3);

	return(0);

}//end of main function


void FindNumber(int num_to_be_found, int num, ...)
{

    //function protoype declaration
	 int va_FindNumber(int, int, va_list);

	//variable declarations
	int count = 0;
	int n;

	va_list numbers_list;

	va_start(numbers_list, num);

	count = va_FindNumber(num_to_be_found, num, numbers_list);


	if (count == 0)
		printf("Number %d could not be found\n", num_to_be_found);
	else
		printf("Number %d :Found %d number of times !!!!\n", num_to_be_found, count);


	va_end(numbers_list);

}//end of FindNumber function 

int va_FindNumber(int num_to_be_found , int num ,  va_list list)
{

	int count_of_num = 0;
	int n;

	while (num)
	{
		n = va_arg(list, int);
		if (n == num_to_be_found)
			count_of_num++;


		num--;
	}

	return(count_of_num);

}//end of va_FindNumber 