#include<stdio.h>

int main(int args, int* argv[], int* envp[])
{

	//function declarations

	void MathematicalOperations(int, int, int*, int*, int*, int*, int*);

	int anrj;
	int bnrj;
	int answer_sum;
	int answer_difference;
	int answer_product;
	int answer_quotient;
	int answer_remainder;

	printf("\n\n");
	printf("Enter value of 'A':");
	scanf("%d", &anrj);

	printf("Enter value of ''B:");
	scanf("%d", &bnrj);

	//***Using Pass by reference we are passing the address & using this argument with suffix & as out parametres , once calculation in 
	//calling function is done values are returns to callling function. In such way we can return more than 1 values from function .

	MathematicalOperations(anrj,bnrj,&answer_sum,&answer_difference, &answer_product, &answer_quotient,&answer_remainder);

	printf("\n\n");
	printf("*****RESULTS*******:\n\n");
	printf("Sum=%d\n\n", answer_sum);
	printf("Difference=%d\n\n",answer_difference);
	printf("Product=%d\n\n", answer_product);
	printf("Quotient=%d\n\n", answer_quotient);
	printf("Remainder=%d\n\n", answer_remainder);
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
