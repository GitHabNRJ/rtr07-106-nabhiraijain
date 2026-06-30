#include<stdio.h>
int main(void)
{
	//variable declaration
	int nrj_i, nrj_j, nrj_c;

	//code
	printf("/n/n");

	nrj_i = 0;
	while(nrj_i < 64) 
	{

		nrj_j = 0;
		while(nrj_j < 64)
		{

			// Bitwise & and Bitwise XOR ^ Operator
			// 0x-hexadecimal prefix 8 decimal --0x8 is hexadecimal of 8                 

			nrj_c = ((nrj_i & 0x8) == 0) ^ ((nrj_j & 0x8) == 0);
			if (nrj_c == 0)
				printf(" ");
			if (nrj_c == 1)
				printf("*");
			
			nrj_j++;
		}
		printf("\n\n");

		nrj_i++;
	}

	return(0);


}//end of main loop