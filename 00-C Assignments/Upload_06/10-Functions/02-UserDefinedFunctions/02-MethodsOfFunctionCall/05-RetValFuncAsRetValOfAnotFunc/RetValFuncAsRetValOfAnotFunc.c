#include<stdio.h>

int main(int argc, int* argv[], int* envp)
{

//function declaration
	int MyAddition(int, int);

	//variable declarations
	int nrj_result;
	int nrj_num01, nrj_num02;

	//code

	nrj_num01 = 10;
	nrj_num02 = 20;

	printf("\n\n");
	printf("nrj_num01=%d\n", nrj_num01);
	printf("nrj_num02=%d\n", nrj_num02);

	printf("Sum of both numbers:\n\n");

	printf("%d+%d=%d", nrj_num01, nrj_num02, MyAddition(nrj_num01, nrj_num02));
	printf("\n\n");
	
}

int MyAddition(int nrj_a, int nrj_b)
{
	int Add(int, int);

	return(Add(nrj_a, nrj_b));

}

int Add(int nrj_x,int nrj_y)
{

	return(nrj_x + nrj_y);
}

