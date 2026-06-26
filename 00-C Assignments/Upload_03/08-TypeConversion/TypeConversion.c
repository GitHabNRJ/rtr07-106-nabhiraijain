#include<stdio.h>
int main(void)
{
	//variable declaration 
	int i, j;
	char ch_01, ch_02;

	int a;
	int result_int;
   float f, result_float;

	int i_explicit;
	float f_explicit;

	//code
	printf("\n\n");
//INTERCONVERSION AND IMPLICIT TYPE-CASTING BETWEEN 'CHAR' and 'int' types 
	i = 70;
	ch_01 = i;
	printf("I=%d\n", i);
	printf("Character 1 (after ch_01 = i)=%c\n\n", ch_01);
	ch_02 = 'Q';
	j = ch_02;
	printf("Character 2=%c\n", ch_02);
	printf("J (after j= ch_02)=%d\n\n", j);

	//IMPLICIT CONVERSION IF'int' To 'float'...
	a = 5;
	f = 7.8f;
	result_float = a + f;
	printf("Integer a=%d AND fLOATING-Point number %f Added Gives Floating-Point Sum=%f\n\n", a, f, result_float);

	//EXPLICIT TYPE-CASTING USING CAST OPERATOR 
	f_explicit = 30.121995f;
	i_explicit=(int)f_explicit;

	printf("Floating Point Number WHICH will be typecaster Explicitly=%f\n",f_explicit);
	printf("Resultant Integer After Explicit typecasting of %f=%d\n\n",f_explicit, i_explicit);

	return(0);
}






