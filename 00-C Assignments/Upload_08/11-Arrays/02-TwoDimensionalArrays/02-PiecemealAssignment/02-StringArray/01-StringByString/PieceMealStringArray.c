//MOTIVE: This program replace all VOWELS IN the input string with the *(asterick)
//For Ex: Original String Nabhirai Jain will be N*bh*r** J**n

#include<stdio.h>
#define MAX_STRING_LENGTH 512

int main(int args[], int* argv[], int* envp[])
{

	//function prototype
	int MyStrlen(char str[]);
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

	printf("\n");

	nrjchar_size = sizeof(char);
	nrjstrArray_size = sizeof(nrjstrArray);
	printf("Size of  (2D) Character Array is %d\n\n", nrjstrArray_size);

	nrjstrArray_num_rows = nrjstrArray_size / sizeof(nrjstrArray[0]);
	printf("No of rows in (2D) String Array is %d\n\n", nrjstrArray_num_rows);

	nrjstrArray_num_columns = nrjstrArray_size / (nrjstrArray_num_rows * nrjchar_size);
	printf("No of columns in (2D) String Array is %d\n\n", nrjstrArray_num_columns);

	nrjstrArray_num_elements = nrjstrArray_size / nrjchar_size;
	printf("Number of elements in Two Dimentional(2D) String Array is %d\n\n", nrjstrArray_num_elements);
	


	printf("\n");

	
	

	/***********Piece Meal Assignment********/

	MyStrcpy(nrjstrArray[0],"My");
	MyStrcpy(nrjstrArray[1],"Name");
	MyStrcpy(nrjstrArray[2],"Is");
	MyStrcpy(nrjstrArray[3],"Nabhirai");
	MyStrcpy(nrjstrArray[4],"Jain");


	printf("The String In the 2D Character Array are :\n \n");


	for (i = 0; i < nrjstrArray_num_rows; i++)
	{

		printf("%s ", nrjstrArray[i]);


	}

	printf("\n\n");

	return(0);


}//end of main function 

void MyStrcpy(char str_destination[], char  str_source[])
{
	int MyStrelen(char[]);
	int iStrLength = 0;
	int i;
	iStrLength = MyStrlen(str_source);
	//printf("%d", strlength);
	for (i = 0; i < iStrLength; i++)
	{

		str_destination[i] = str_source[i];

	}
	str_destination[i] = '\0';



}//end of MyStrCpy Method 

int MyStrlen(char str[])
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