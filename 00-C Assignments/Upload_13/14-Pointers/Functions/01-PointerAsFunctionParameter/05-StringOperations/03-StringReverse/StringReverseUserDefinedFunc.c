
#include<stdio.h>
#include<string.h>

#define MAX_STRING_LENGTH 512

int main(int args, int* argv[], int* envp)
{

	//prototype declaration
	void MyStrRev(char  nrjchArray_Reverse[], char nrjchArray_Original[]);

	//variable declarations
	char nrjchArray_Original[MAX_STRING_LENGTH];
	char nrjchArray_Reverse[MAX_STRING_LENGTH];


	//code

	//*****STRING INPUT******
	printf("\n\n");
	printf("Enter A String:\n\n");
	// The gets_s function reads a line from the standard input stream stdin and stores it in buffer.
	//  char* gets_s(char* buffer,size_t sizeInCharacters);
	//     buffer-Storage location for input string
	//     sizeInCharacters:The size of the buffer
	//ReturnValue: Return buffer if successfull
	//             Else return a NULL pointer indicates an error or end-of -file.

	gets(nrjchArray_Original, MAX_STRING_LENGTH);

	//*************String Output**************************
	printf("\n\n");
	printf("The Original String 'nrjchArray_Original[]' Entered by You Is:\n\n");
	printf("%s\n", nrjchArray_Original);


	/*************Reverse the String*****************/
	 MyStrRev(nrjchArray_Reverse, nrjchArray_Original);

	printf("\n\n");
	printf("The Reverse String 'nrjchArray_Reverse'  Is:\n\n");
	printf("%s\n", nrjchArray_Reverse);


	return(0);

}//end of main function

void MyStrRev(char  nrjchArray_Reverse1[], char nrjchArray_Original1[])
{
	int strlen = 0;
	int i, j,length=0;
	strlen = MyStrelen(nrjchArray_Original1);
	length = strlen - 1;
	printf("The Lenght of Original String=%d",strlen);
	for (i = 0, j = length; i < strlen, j >= 0; i++, j--)
	{

		nrjchArray_Reverse1[i] = nrjchArray_Original1[j];
	}

	nrjchArray_Reverse1[strlen] = '\0';

}//end of MyStrRev

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
}//end of My