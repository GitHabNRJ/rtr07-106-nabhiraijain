//MOTIVE: This program replace all VOWELS IN the input string with the *(asterick)
//For Ex: Original String Nabhirai Jain will be N*bh*r** J**n

#include<stdio.h>
#include<ctype.h>

#define MAX_STRING_LENGTH 512

int main(int args[], int* argv[], int* envp[])
{

	//function prototype
	int MyStrelen(char str[]);


	//variable declarations
	char nrjchArray_Original[MAX_STRING_LENGTH];
	char nrjchArray_CapitalizedFirstLetterOfEveryWord[MAX_STRING_LENGTH];

	//char nrjchArray_VowelsReplaced[MAX_STRING_LENGTH];

	int nrjisStringLength = 0;
	int nrjword_count = 0;
	int nrjspace_count = 0;
	int i,j;


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
	printf("%s\n", nrjchArray_Original);

	//****String Lenght******************************
	printf("\n\n");
	nrjisStringLength = MyStrelen(nrjchArray_Original);
	printf("Lenght of string :%d\n", nrjisStringLength);

	//strcpy(nrjchArray_CapitalizedFirstLetterOfEveryWord, nrjchArray_Original);


	//************Logic to count the word & space in the user String  *    *********************/
	for (i = 0, j = 0; i < nrjisStringLength; i++,j++)
	{

		if (i == 0) //converting 1st charater at index '0' to upper case in the User entered string 
		{
			nrjchArray_CapitalizedFirstLetterOfEveryWord[j] = toupper(nrjchArray_Original[i]);
		}
		else if ((nrjchArray_Original[i]) == ' ') 
		{

			nrjchArray_CapitalizedFirstLetterOfEveryWord[j] = nrjchArray_Original[i];
			nrjchArray_CapitalizedFirstLetterOfEveryWord[j + 1] = toupper(nrjchArray_Original[i + 1]);
			i++;  // In else if case we have entered value in arrary(nrjchArray_CapitalizedFirstLetterOfEveryWord) at 2 indexes whereas i,j still poiting to previous space index so incremendint each i&j by 1
			j++;


		}
		else
		{
			nrjchArray_CapitalizedFirstLetterOfEveryWord[j] = nrjchArray_Original[i];

		}//end of if-elseif-else ladder

	
	}//end of for loop

	nrjchArray_CapitalizedFirstLetterOfEveryWord[i] = '\0';
	//*****************************CapitalizeStringArray*************/

	printf("String after Capitalize 1st Letter of Word in Original String Is:");
	printf("%s\n", nrjchArray_CapitalizedFirstLetterOfEveryWord);

		
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