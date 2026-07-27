#include<stdio.h>

//User defined function:Method of definition 3****.
//***int RETURN VALUE , VALID PARAMETERS (int,int)*******
//Entry point function==> main()==>Valid Return Type(int) and 3 Paramenters 

int main(int argc, int* argv[], int* envp[])
{

	int MyAddition(int, int);

	int nrj_a, nrj_b, nrj_result;
	//code

	printf("\n\n");
	printf("User defined function : Method of definition 4 * **int RETURN VALUE, VALID PARAMETERS(int, int) * ******\n\n");
	printf("\n\n");
	printf("Enter Integer Value For 'A':");
	scanf("%d", &nrj_a);

	printf("Enter Integer Value For 'B':");
	scanf("%d", &nrj_b);

	nrj_result=MyAddition(nrj_a, nrj_b);
	printf("Sum=%d\n\n",nrj_result);


	return(0);

}

int MyAddition(int nrj_a, int nrj_b)
{
	int  nrj_sum;

	nrj_sum = nrj_a + nrj_b;
	printf("\n\n");
	

	return(nrj_sum);
}