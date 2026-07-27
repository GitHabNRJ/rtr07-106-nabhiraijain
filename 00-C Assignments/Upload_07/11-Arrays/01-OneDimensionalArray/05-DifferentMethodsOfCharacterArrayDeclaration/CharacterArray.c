#include <stdio.h>

int main(int args,int *argv[],int*envp[])
{
//variable declarationa

	char chArray_01[] = { 'A','S','T','R','O','M','E','D','I','C','O','M','P','\0' };
	char chArray_02[9] = { 'W','E','L','C','O','M','E','S','\0' };
	char chArray_03[] = { 'Y','O','O','\0' };
	char chArray_04[] = "To";  // '\0' is assumed although there is only 2 characters 
	char chArray_05[] = { "REAL-TIME RENDERING BATCH OF 2024-25" };

	char chArray_WithoutNullTerminator[] = { 'H','e','l','l','o' };

	printf("\n\n");

	printf("Size of chArray_01:%zu\n\n", sizeof(chArray_01));
	printf("Size of chArray_01:%zu\n\n", sizeof(chArray_02));
	printf("Size of chArray_01:%zu\n\n", sizeof(chArray_03));
	printf("Size of chArray_01:%zu\n\n", sizeof(chArray_04));
	printf("Size of chArray_01:%zu\n\n", sizeof(chArray_05));




	return(0);

}//end of main function