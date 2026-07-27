#include<stdio.h>

#define MAX_NUMBER(nrj_a,nrj_b) ((nrj_a>nrj_b)?nrj_a:nrj_b)

int main(int argc, char* argv[], char* envp[])
{
//variable declarations

	int nrjiNum_01;
	int nrjiNum_02;
	int nrjiResult;

	float nrjfNum_01;
	float nrjfNum_02;
	float nrjfResult;

	//code
	//********COMPARING INTEGER VALUSES*************
	printf("\n\n");
	printf("Enter An Integer Number:");
	scanf("%d", &nrjiNum_01);

	printf("Enter Another Integer Number:");
	scanf("%d", &nrjiNum_02);

	nrjiResult = MAX_NUMBER(nrjiNum_01, nrjiNum_02);
	printf("\n\n");
	printf("Result of Macro Function MAX_NUMBER()=%d\n",nrjiResult);


	//********COMPARING FLOATING POINT VALUSES*************
	printf("\n\n");
	printf("Enter 1st Floating point Number:");
	scanf("%f", &nrjfNum_01);

	printf("Enter Another Floating point Number:");
	scanf("%f",&nrjfNum_02);

	nrjfResult = MAX_NUMBER(nrjfNum_01, nrjfNum_02);
	printf("\n\n");
	printf("Result of Macro Function MAX_NUMBER()=%f\n", nrjfResult);


}//end of main function