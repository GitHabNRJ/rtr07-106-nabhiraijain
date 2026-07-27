#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
//variable declarations
	char nrjchArray[MAX_STRING_LENGTH];

	//code
	printf("\n\n");
	printf("Enter A String:\n\n");
	// The gets_s function reads a line from the standard input stream stdin and stores it in buffer.
	//  char* gets_s(char* buffer,size_t sizeInCharacters);
	//     buffer-Storage location for input string
	//     sizeInCharacters:The size of the buffer
	//ReturnValue: Return buffer if successfull
	//             Else return a NULL pointer indicates an error or end-of -file.

	gets(nrjchArray, MAX_STRING_LENGTH);

	printf("\n\n");
	printf("String Entered by You Is:\n\n");
	printf("%s\n", nrjchArray);

	return(0);



}//end of main function