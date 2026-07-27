#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	
	//function prototype
	int MyStrelen(char str[]);
	
	//variable declarations
	char nrjchArray[MAX_STRING_LENGTH];
	int nrjisStringLength = 0;

	//code

	//****************String Input**********************
	printf("\n\n");
	printf("Enter A String:\n\n");
	// The gets_s function reads a line from the standard input stream stdin and stores it in buffer.
	//  char* gets_s(char* buffer,size_t sizeInCharacters);
	//     buffer-Storage location for input string
	//     sizeInCharacters:The size of the buffer
	//ReturnValue: Return buffer if successfull
	//             Else return a NULL pointer indicates an error or end-of -file.

	gets(nrjchArray, MAX_STRING_LENGTH);

	//*************String Output**************************
	printf("\n\n");
	printf("String Entered by You Is:\n\n");
	printf("%s\n", nrjchArray);

	//****String Lenght******************************
	printf("\n\n");
	nrjisStringLength = MyStrelen(nrjchArray);
	printf("Lenght of string :%d", nrjisStringLength);

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


