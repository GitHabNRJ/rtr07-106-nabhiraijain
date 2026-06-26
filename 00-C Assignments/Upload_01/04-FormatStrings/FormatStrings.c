#include<stdio.h>
int main(void)
{
  //code
	printf("\n\n");
	printf("**************************************************************************");
	printf("\n\n");

	printf("Hello World !!!\n\n");

	int anrj = 13;
	printf("Integer Decimal Valude of 'anrj'=%d\n ",anrj);
	printf("Integer Octal value of 'anrj' =%o \n", anrj);

	//Value of a=13 in Hexadimal in Lower and Uppercase
	printf("Integer Hexadecimal Value of 'anrj' (Hexadecimal Letters In Lower Case) = %x \n", anrj);
	printf("Integer Hexadecimal Value of 'anrj' (Hexadecimal Letters In Upper Case) = %X \n\n", anrj);

	char chnrj = 'A';
	printf("Character ch=%c\n", chnrj);
	char strnrj[] = "AstroMdeiComp's Real Time Rendering Batch";
	printf("String str=%s\n\n", strnrj);

	long numnrj = 30121995L;
	printf("Long Integer=%ld \n\n", numnrj);

	unsigned int bnrj = 7;
	printf("Unsigned Integer 'b'=%u \n\n", bnrj);

	float f_numnrj = 3012.1995f;
	printf("Floating Point Number with Just %%f 'f_num'=%f\n", f_numnrj);
    printf("Floating Point Number with  %%4.2f 'f_num'=%4.2f\n", f_numnrj);
	printf("Floating Point Number with  %%6.5f 'f_num'=%6.5f\n", f_numnrj);


	double d_pinrj = 3.1459265358979323846;
	printf("Double Precision Floating Point Number without Exponential =%g\n", d_pinrj);
	printf("Double Precision Floating Point Number with Exponential(Lower case)=%e\n", d_pinrj);
	printf("Double Precision Floating Point Number with Exponential(Upper case)=%E\n\n", d_pinrj);
	printf("Double Hexadecimal Value of 'd_pi' (Hexadecimal Letters In Lower case)=%a\n", d_pinrj);
	printf("Double Hexadecimal Value of 'd_pi' (Hexadecimal Letters In Upper case=%A\n\n", d_pinrj);

	printf("******************************************************************************");
	printf("\n\n");
	return(0);














	return(0);



}