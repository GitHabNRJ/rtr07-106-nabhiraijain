#include<stdio.h>
#include<stdlib.h>

int main(int args, int* argv[], int* envp[])
{

	//function declarations

	void MathematicalOperations(int, int, int*, int*, int*, int*, int*);

	int anrj;
	int bnrj;
	int *answer_sum;
	int *answer_difference;
	int *answer_product;
	int *answer_quotient;
	int *answer_remainder;

	printf("\n\n");
	printf("Enter value of 'A':");
	scanf("%d", &anrj);

	printf("Enter value of 'B':");
	scanf("%d", &bnrj);

	//***Using Pass by reference we are passing the address & using this argument with suffix & as out parametres , once calculation in 
	//calling function is done values are returns to callling function. In such way we can return more than 1 values from function .

	answer_sum = (int*)malloc(1 * sizeof(int));
	if (answer_sum == NULL)
	{
		printf("Could Not Allocate Memory For 'answer_sum'.Exitting Now...\n\n");
		exit(0);
	}

	answer_difference = (int*)malloc(1 * sizeof(int));
	if (answer_difference == NULL)
	{
		printf("Could Not Allocate Memory For 'answer_difference'.Exitting Now...\n\n");
		exit(0);
	}

	answer_product = (int*)malloc(1 * sizeof(int));
	if (answer_product == NULL)
	{
		printf("Could Not Allocate Memory For 'answer_product'.Exitting Now...\n\n");
		exit(0);
	}

	answer_quotient = (int*)malloc(1 * sizeof(int));
	if (answer_quotient == NULL)
	{
		printf("Could Not Allocate Memory For 'answer_quotient'.Exitting Now...\n\n");
		exit(0);
	}

	answer_remainder = (int*)malloc(1 * sizeof(int));
	if (answer_remainder == NULL)
	{
		printf("Could Not Allocate Memory For 'answer_remainder'.Exitting Now...\n\n");
		exit(0);
	}

	MathematicalOperations(anrj,bnrj,answer_sum,answer_difference, answer_product, answer_quotient,answer_remainder);

	printf("\n\n");
	printf("*****RESULTS*******:\n\n");
	printf("Sum=%d\n\n", *answer_sum);
	printf("Difference=%d\n\n",*answer_difference);
	printf("Product=%d\n\n", *answer_product);
	printf("Quotient=%d\n\n", *answer_quotient);
	printf("Remainder=%d\n\n", *answer_remainder);

	if (answer_remainder)
	{
		free(answer_remainder);
		answer_remainder = NULL;
		printf("Memory Allocated For 'answer_remainder' Successfully Freed!!!\n\n");

	}

	if (answer_quotient)
	{
		free(answer_quotient);
		answer_quotient = NULL;
		printf("Memory Allocated For 'answer_quotient' Successfully Freed!!!\n\n");

	}
	
	if (answer_product)
	{
		free(answer_product);
		answer_product = NULL;
		printf("Memory Allocated For 'answer_product' Successfully Freed!!!\n\n");

	}

	if (answer_difference)
	{
		free(answer_difference);
		answer_difference = NULL;
		printf("Memory Allocated For 'answer_difference' Successfully Freed!!!\n\n");

	}

	if (answer_sum)
	{
		free(answer_sum);
		answer_sum = NULL;
		printf("Memory Allocated For 'answer_sum' Successfully Freed!!!\n\n");

	}

	return(0);
}

void MathematicalOperations(int xnrj,int ynrj,int *sum,int *difference,int *product,int *quotient,int *remainder)
{
	
	*sum = xnrj + ynrj;   // xnrj & ynrj are addeded and its value is stored in (*sum==value at addres)
	*difference = xnrj - ynrj;
	*product = xnrj * ynrj;
	*quotient = xnrj / ynrj;
	*remainder = xnrj % ynrj;
}//end of main function
