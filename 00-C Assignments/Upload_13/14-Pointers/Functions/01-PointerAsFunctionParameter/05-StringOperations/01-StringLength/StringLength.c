#include<stdio.h>
#include<stdlib.h>

#define MAX_STRING_LENGTH 512

int main(void)
{

	//function prototype
	int MyStrlen(char *);

	//variable declarations
	char * nrjchArray=NULL;
	int nrjisStringLength = 0;

	//code
	printf("\n\n");

	nrjchArray = (char *)malloc(MAX_STRING_LENGTH * sizeof(char));
	if (nrjchArray == NULL)
	{
		printf("Memory Allocation to character Array Failed !!! EXITING NOW ...\n\n");
		exit(0);
	}
	//****************String Input**********************
	printf("\n\n");
	printf("Enter A String:\n\n");
	// The gets_s function reads a line from the standard input stream stdin and stores it in buffer.
	//  char* gets_s(char* buffer,size_t sizeInCharacters);
	//     buffer-Storage location for input string
	//     sizeInCharacters:The size of the buffer
	//ReturnValue: Return buffer if successfull
	//             Else return a NULL pointer indicates an error or end-of -file.

	gets_s(nrjchArray, MAX_STRING_LENGTH);

	//*************String Output**************************
	printf("\n\n");
	printf("String Entered by You Is:\n\n");
	printf("%s\n", nrjchArray);

	//****String Length******************************
	printf("\n\n");
	nrjisStringLength = MyStrlen(nrjchArray);
	printf("Lenght of string Is :%d Characters !!!!\n\n ", nrjisStringLength);
	
	if (nrjchArray)
	{
		free(nrjchArray);
		nrjchArray = NULL;
	}

	return(0);
}//end of main function

int MyStrlen(char *str)
{
	int nrjj;
	int string_length = 0;
	for (int nrjj = 0; nrjj < MAX_STRING_LENGTH; nrjj++)
	{
		if (*(str+nrjj) == '\0')
			break;
		else
			string_length++;

	}//end of for loop

	return(string_length);
}//end of MyStrelen


