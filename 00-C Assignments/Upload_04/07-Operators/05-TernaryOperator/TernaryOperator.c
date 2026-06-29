#include<stdio.h>
int main(void)
{
	//variable declaration 
	int nrj_a, nrj_b, int_nrj_01;
	char ch_nrj_01;
		
	nrj_a = 10;
	nrj_b = 3;

	//Terniary Operation Relational Expression
	ch_nrj_01 = (nrj_a > nrj_b) ? 'A' : 'B';
	int_nrj_01 = (nrj_a > nrj_b) ? nrj_a : nrj_b;
	printf("Ternary Operator Answer 1---%c & %d\n\n", ch_nrj_01, int_nrj_01);

	int nrj_p, nrj_q, int_nrj_02;
	char ch_nrj_02;
	nrj_p = 12;
	nrj_q = 12;

	ch_nrj_02 = (nrj_p != nrj_q) ? 'P' : 'Q';
	int_nrj_02 = (nrj_p != nrj_q) ? nrj_p : nrj_q;

	printf("Ternary Operator Answer2---%c & %d\n\n", ch_nrj_02, int_nrj_02);

	printf("\n\n");
	return(0);

}//end of main function