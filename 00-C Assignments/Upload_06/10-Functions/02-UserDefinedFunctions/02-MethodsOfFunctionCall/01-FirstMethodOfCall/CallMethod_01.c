#include<stdio.h>

//*** User defined functions: Method of calling functions
//***01-Calling all functions in main directly

//Entry-Point Function==>main()==>valid return type (int) and 3 Paramenets

int main(int argc, char* argv[], char* envp[])
{

	void NrjAddition(void);
	int NrjSubtraction(void);
	void NrjMultiplication(int, int);
	int NrjDivision(int, int);

	//variable declarations
	int Nrjresult_subtraction;
	int NrjA_multiplication, NrjB_multiplication;
	int a_division, b_division,result_division;

	//code

	//****ADDITION****
	NrjAddition();

	//****SUBTRACTION******
	Nrjresult_subtraction = NrjSubtraction();
	printf("Subtraction of both numbers is %d", Nrjresult_subtraction);
	//****MULTIPLICATION*********
	printf("\n\n");

	printf("Enter Integer Value For 'A' For Multiplication:");
	scanf("%d", &NrjA_multiplication);

	printf("Enter Integer Value For 'B'For Multiplication:");
	scanf("%d", &NrjB_multiplication);
	
	NrjMultiplication(NrjA_multiplication, NrjB_multiplication);

	//*****DIVITION***********
	printf("\n\n");

	printf("Enter Integer Value For 'A':");
	scanf("%d", &a_division);

	printf("Enter Integer Value For 'B':");
	scanf("%d", &b_division);

	result_division= NrjDivision(a_division, b_division);
	printf("Division of both numbers is %d", result_division);
	return(0);
}
void NrjAddition()
{
	int nrj_a, nrj_b, nrj_result;
	printf("\n\n");
	
	printf("Enter Integer Value For 'A':");
	scanf("%d", &nrj_a);

	printf("Enter Integer Value For 'B':");
	scanf("%d", &nrj_b);

	nrj_result =nrj_a+nrj_b;
	printf("Sum=%d\n\n", nrj_result);


}//end of NrjAddition method


int NrjSubtraction(void)
{

	int nrj_a,nrj_b, nrj_result;
	printf("\n\n");

	printf("Enter Integer Value For 'A':");
	scanf("%d", &nrj_a);

	printf("Enter Integer Value For 'B':");
	scanf("%d", &nrj_b);

	if (nrj_a > nrj_b)
		nrj_result = nrj_a - nrj_b;
	else
		nrj_result = nrj_b - nrj_a;

	return(nrj_result);
}//end of NrjSubtraction method

void NrjMultiplication(int nrj_a, int nrj_b)
{

	int nrj_result;
	nrj_result = nrj_a * nrj_b;
	printf("Multiplication =%d\n\n", nrj_result);

}//end of NrjMultiplication method

int NrjDivision(int nrj_a, int nrj_b )
{

	int division_quotient;

	if (nrj_a > nrj_b)
		division_quotient= nrj_a / nrj_b;
	else
		division_quotient= nrj_b / nrj_a;

	return(division_quotient);
}//end of NrjDivition Method
