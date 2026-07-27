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
	char nrjchArray_Original[MAX_STRING_LENGTH];
	char nrjchArray_VowelsReplaced[MAX_STRING_LENGTH];

	int nrjisStringLength = 0;
	int i;

	//code

	//****************String Input**********************
	printf("\n\n");
	printf("Enter A String:\n");
	// The gets_s function reads a line from the standard input stream stdin and stores it in buffer.
	//  char* gets_s(char* buffer,size_t sizeInCharacters);
	//     buffer-Storage location for input string
	//     sizeInCharacters:The size of the buffer
	//ReturnValue: Return buffer if successfull
	//             Else return a NULL pointer indicates an error or end-of -file.

	gets(nrjchArray_Original, MAX_STRING_LENGTH);

	//*************String Output**************************
	printf("\n\n");
	printf("String Entered by You Is:");
	printf("%s\n",nrjchArray_Original);

	//****String Lenght******************************
	printf("\n\n");
	nrjisStringLength = MyStrelen(nrjchArray_Original);
	printf("Lenght of string :%d\n", nrjisStringLength);

	/*********************String Copy*****************/
	MyStrcpy(nrjchArray_Original, nrjchArray_VowelsReplaced);
		printf("The Destination String Is:");
	printf("%s\n", nrjchArray_VowelsReplaced);

	//************Logic to replace the vowel with *    *********************/
	for (i = 0; i < nrjisStringLength; i++)
	{
		switch (nrjchArray_VowelsReplaced[i])
		{
		case 'A':
		case 'a':
			nrjchArray_VowelsReplaced[i] = '*';
			break;
		case 'E':
		case 'e':
			nrjchArray_VowelsReplaced[i] = '*';
			break;
		case 'I':
		case 'i':

			nrjchArray_VowelsReplaced[i] = '*';
			break;
		case 'O':
		case 'o':
			nrjchArray_VowelsReplaced[i] = '*';
			break;
		case 'U':
		case 'u':
			nrjchArray_VowelsReplaced[i] = '*';
			break;

		default:
			break;
		}//end of switch case

		

	}//end of for loop

	printf("The Replaced String Is:");

	printf("%s\n", nrjchArray_VowelsReplaced);

}//end of main function 

void MyStrcpy(char  strsrc[], char strdestin[])
{

	int strlength = 0;
	int i = 0;
	strlength = MyStrelen(strsrc);

	for (i = 0; i < strlength; i++)
	{

		strdestin[i] = strsrc[i];

	}
	strdestin = '\0';


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