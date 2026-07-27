#include<stdio.h>

//Entry point function==> main()==>Valid Return Type(int) and 3 Paramenters 

int main(int argc, int* argv[], int* envp[])
{

	int MyAddition(void);

	int nrj_result;

	nrj_result= MyAddition();
	printf("\n\n");
	printf("Sum=%d\n\n", nrj_result);

	return(0);

}

int MyAddition(void)
{
	int nrj_a, nrj_b, nrj_sum;

	//code
	printf("\n\n");
	printf("Enter Integer Value For 'A':");
	scanf("%d", &nrj_a);

	printf("Enter Integer Value For 'B':");
	scanf("%d", &nrj_b);

	nrj_sum = nrj_a + nrj_b;

	return(nrj_sum);
	

}