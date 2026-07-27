#include<stdio.h>

//Entry point function==> main()==>Valid Return Type(int) and 3 Paramenters 

int main(int argc, int* argv[], int* envp[])
{

	void MyAddition(void);

	MyAddition();
	return(0);

}

void MyAddition(void)
{
	int nrj_a, nrj_b, nrj_sum;

	//code
	printf("\n\n");
	printf("Enter Integer Value For 'A':");
	scanf("%d", &nrj_a);

	printf("Enter Integer Value For 'B':");
	scanf("%d", &nrj_b);

	nrj_sum = nrj_a + nrj_b;

printf("\n\n");
printf("Sum of %d and %d =%d\n\n",nrj_a,nrj_b,nrj_sum);

}