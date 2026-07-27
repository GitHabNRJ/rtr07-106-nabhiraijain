#include<stdio.h>

int main(int argc, int* argv[], int* envp[])
{

//function declarations
	int MyAddition(int, int);

	//variable declarations
	int nrj_result;
	int nrj_num01, nrj_num02, nrj_num03, nrj_num04;

	//code
	nrj_num01 = 10;
	nrj_num02 = 20;
	nrj_num03 = 30;
	nrj_num04 = 40;

	nrj_result=MyAddition(MyAddition(nrj_num01, nrj_num02), MyAddition(nrj_num03, nrj_num04));

	printf("\n\n");

	printf("Sum OF: \n\n  nrj_num01=%d + nrj_num02=%d + nrj_num03=%d + nrj_num04=%d is \n\n \n\n  Addition=%d\n",nrj_num01,nrj_num02,nrj_num03,nrj_num04,nrj_result);

	printf("\n\n");
	return(0);

}//end of main function

//***Function defination of MyAddition

int MyAddition(int nrj_a, int nrj_b)
{

//variable declaration
	int nrj_sum;

	//code

	nrj_sum = nrj_a + nrj_b;

	return(nrj_sum);
}