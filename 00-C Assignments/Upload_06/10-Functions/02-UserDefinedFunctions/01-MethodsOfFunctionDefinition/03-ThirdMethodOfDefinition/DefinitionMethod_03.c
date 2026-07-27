#include<stdio.h>

//User defined function:Method of definition 3****.
//***No RETURN VALUE , VALID PARAMETERS (int,int)*******
//Entry point function==> main()==>Valid Return Type(int) and 3 Paramenters 

int main(int argc, int* argv[], int* envp[])
{

	void MyAddition(int, int);

	int nrj_a, nrj_b;
	//code

	printf("\n\n");
	printf("User defined function : Method of definition 3 * **No RETURN VALUE, VALID PARAMETERS(int, int) * ******\n\n");
	printf("\n\n");
	printf("Enter Integer Value For 'A':");
	scanf("%d", &nrj_a);

	printf("Enter Integer Value For 'B':");
	scanf("%d", &nrj_b);

MyAddition(nrj_a,nrj_b);
	
	return(0);

}

void MyAddition(int nrj_a,int nrj_b)
{
	int  nrj_sum;

	nrj_sum = nrj_a + nrj_b;
	printf("\n\n");
	printf("Sum=%d\n\n", nrj_sum);
}