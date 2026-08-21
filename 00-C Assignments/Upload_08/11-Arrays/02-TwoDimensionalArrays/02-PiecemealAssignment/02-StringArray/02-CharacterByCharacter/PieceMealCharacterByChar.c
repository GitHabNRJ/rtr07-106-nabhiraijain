//MOTIVE: This program replace all VOWELS IN the input string with the *(asterick)
//For Ex: Original String Nabhirai Jain will be N*bh*r** J**n

#include<stdio.h>
#define MAX_STRING_LENGTH 512

int main(int args[], int* argv[], int* envp[])
{

	//function prototype
	int MyStrlen(char str[]);



	//variable declarations
	//int nrjisStringLength = 0;

	//variable declarations 
	//In -line innitialization of 2-D Array
	//function prototype


	//variable declarations


	//****A 'STRING' IS AN ARRAY OF CHARACTERS ...SO CHAR[] is a char Array . Hence , char[] Is a 'String'****
	//**An array of char Arrays is an array of Strings!!!
	//***So Hence , char[] is once char Array or 'String'.
	//***Hence , char[][] is a array of char arrays or w can say Array of Strings.



	//int istrlenght[10];

	//In-line innitialization
	char nrjstrArray[5][10];


	int nrjchar_size;
	int nrjstrArray_size;
	int nrjstrArray_num_elements, nrjstrArray_num_rows, nrjstrArray_num_columns;
	int strActual_num_chars = 0;
	int i, j;
	//code

	printf("\n");

	nrjchar_size = sizeof(char);
	printf("Size of  (2D) Character Array is %d\n\n", nrjchar_size);

	nrjstrArray_size = sizeof(nrjstrArray);
	printf("Size of Two Dimentional(2D) String Array is %d\n\n", nrjstrArray_size);


	nrjstrArray_num_rows = nrjstrArray_size / sizeof(nrjstrArray[0]);
	printf("No of Rows(Strings) In Two Dimentional (2D) Charater Array(String Array) is %d\n\n", nrjstrArray_num_rows);


	nrjstrArray_num_columns = nrjstrArray_size / (nrjstrArray_num_rows * nrjchar_size);
	printf("No of Columns(Strings) In Two Dimentional (2D) Charater Array(String Array) is %d\n\n", nrjstrArray_num_columns);


	nrjstrArray_num_elements = nrjstrArray_num_rows * nrjstrArray_num_columns;
	printf("Maximum Number of Elements(Characters) in Two Dimentional(2D) Character Array(String Array) is= %d\n\n", nrjstrArray_num_elements);



	printf("\n");

	/***********Piece Meal Assignment********/
	//******************Row1************************/
	nrjstrArray[0][0]='M';
	nrjstrArray[0][1]='Y';
	nrjstrArray[0][2]= '\0';
	//******************Row2************************/
	nrjstrArray[1][0]='N';
	nrjstrArray[1][1]='a';
	nrjstrArray[1][2]='m';
	nrjstrArray[1][3]='e';
	nrjstrArray[1][4] = '\0';
	//******************Row3************************/
	nrjstrArray[2][0]='I';
	nrjstrArray[2][1]='s';
	nrjstrArray[2][2]= '\0';
	//******************Row4************************/
	nrjstrArray[3][0]='N';
	nrjstrArray[3][1]='a';
	nrjstrArray[3][2]='b';
	nrjstrArray[3][3]='h';
	nrjstrArray[3][4]='i';
	nrjstrArray[3][5]='r';
	nrjstrArray[3][6]='a';
	nrjstrArray[3][7]='i';
	nrjstrArray[3][8] = '\0';

	//******************Row5************************/
	nrjstrArray[4][0]='J';
	nrjstrArray[4][1]='a';
	nrjstrArray[4][2]='i';
	nrjstrArray[4][3]='n';
	nrjstrArray[4][4] = '\0';

	
	printf("String In the 2D Character Array Is:\n\n");


	for (j = 0; j < nrjstrArray_num_rows; j++)
	{

		printf("%s ", nrjstrArray[j]);


	}

	printf("\n\n");

	return(0);


}//end of main function 



int MyStrelen(char str[])
{
	int nrjj;
	int strlen = 0;
	for (int nrjj = 0; nrjj < MAX_STRING_LENGTH; nrjj++)
	{
		if (str[nrjj] == '\0')
			break;
		else
			strlen++;

	}//end of for loop

	return(strlen);
}//end of MyStrelen