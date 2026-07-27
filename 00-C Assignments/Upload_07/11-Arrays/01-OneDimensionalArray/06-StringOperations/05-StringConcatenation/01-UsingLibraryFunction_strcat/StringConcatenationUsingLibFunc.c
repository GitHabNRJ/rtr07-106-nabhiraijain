#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(int args, int* argv[], int* envp)
{

	//variable declarations

	char nrjchArray_One[MAX_STRING_LENGTH];
	char nrjchArray_Two[MAX_STRING_LENGTH];

	//code

	//*****STRING INPUT******
	printf("\n\n");
	printf("Enter First  String:\n\n");
	// The gets_s function reads a line from the standard input stream stdin and stores it in buffer.
	//  char* gets_s(char* buffer,size_t sizeInCharacters);
	//     buffer-Storage location for input string
	//     sizeInCharacters:The size of the buffer
	//ReturnValue: Return buffer if successfull
	//             Else return a NULL pointer indicates an error or end-of -file.

	gets(nrjchArray_One, MAX_STRING_LENGTH);


	printf("Enter Second  String:\n\n");
	// The gets_s function reads a line from the standard input stream stdin and stores it in buffer.
	//  char* gets_s(char* buffer,size_t sizeInCharacters);
	//     buffer-Storage location for input string
	//     sizeInCharacters:The size of the buffer
	//ReturnValue: Return buffer if successfull
	//             Else return a NULL pointer indicates an error or end-of -file.

	gets(nrjchArray_Two, MAX_STRING_LENGTH);

	//*************String Output**************************
	printf("\n\n");
	printf("The 1st String 'nrjchArray_One[]' Entered by You Is:\n\n");
	printf("%s\n",nrjchArray_One);

	rintf("\n\n");
	printf("The 2nd String 'nrjchArray_Original[]' Entered by You Is:\n\n");
	printf("%s\n",nrjchArray_Two);

	/*************String Concatenate*****************/
	
		strcat(nrjchArray_One, nrjchArray_Two);


	printf("\n\n");
	/***************String after concatenation***************/

	printf("The 1st String 'nrjchArray_One[]' After concatenation Is:\n\n");
	printf("%s\n", nrjchArray_One);

	rintf("\n\n");
	printf("The 2nd String 'nrjchArray_Original[]' After concatenation   Is:\n\n");
	printf("%s\n", nrjchArray_Two);
	return(0);

}//end of main function






