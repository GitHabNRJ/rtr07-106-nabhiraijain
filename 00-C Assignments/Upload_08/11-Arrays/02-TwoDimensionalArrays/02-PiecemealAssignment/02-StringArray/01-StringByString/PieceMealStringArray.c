//MOTIVE: This program replace all VOWELS IN the input string with the *(asterick)
//For Ex: Original String Nabhirai Jain will be N*bh*r** J**n

#include<stdio.h>
#define MAX_STRING_LENGTH 512

int main(int args[], int* argv[], int* envp[])
{

	//function prototype
	int MyStrelen(char str[]);
	void MyStrcpy(char[], char[]);


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



	nrjchar_size = sizeof(char);
	nrjstrArray_size = sizeof(nrjstrArray);

	nrjstrArray_num_elements = nrjstrArray_size / nrjchar_size;

	nrjstrArray_num_rows = nrjstrArray_size / sizeof(nrjstrArray[0]);

	nrjstrArray_num_columns = nrjstrArray_size / (nrjstrArray_num_rows * nrjchar_size);



	printf("\n");

	printf("Size of  (2D) Character Array is %d\n\n", nrjchar_size);
	printf("Size of Two Dimentional(2D) String Array is %d\n\n", nrjstrArray_size);
    printf("Number of elements in Two Dimentional(2D) String Array is %d\n\n", nrjstrArray_num_elements);
    printf("No of rows in (2D) String Array is %d\n\n", nrjstrArray_num_rows);
   printf("No of columns in (2D) String Array is %d\n\n", nrjstrArray_num_columns);


	/***********Piece Meal Assignment********/

	MyStrcpy(nrjstrArray[0],"My");
	MyStrcpy(nrjstrArray[1],"Name");
	MyStrcpy(nrjstrArray[2],"Is");
	MyStrcpy(nrjstrArray[3],"Nabhirai");
	MyStrcpy(nrjstrArray[4],"Jain");


	//printf("String In the 2D Array using Nested Loops:\n");


	for (j = 0; j < nrjstrArray_num_rows; j++)
	{

		printf("nrjstrArray[%d]=%s\n", j, nrjstrArray[j]);


	}

	printf("\n\n");

	return(0);


}//end of main function 

void MyStrcpy(char strdestin[], char  strsrc[])
{
	int MyStrelen(char[]);
	int strlength = 0;
	int i;
	strlength = MyStrelen(strsrc);
	//printf("%d", strlength);
	for (i = 0; i < strlength; i++)
	{

		strdestin[i] = strsrc[i];

	}
	strdestin[i] = '\0';

	//printf("%s", strdestin);

}//end of MyStrCpy Method 

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