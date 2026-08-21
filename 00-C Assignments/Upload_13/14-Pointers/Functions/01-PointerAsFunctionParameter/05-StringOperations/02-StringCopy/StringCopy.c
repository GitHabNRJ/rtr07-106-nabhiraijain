#include<stdio.h>
#include<stdlib.h>

#define MAX_STRING_LENGTH 512

int main(void)
{

	//function prototype
	int MyStrlen(char *);
	void MyStrcpy(char *, char *);

	//function prototype
	

	//variable declarations
	char * nrjchArray_Original=NULL;
	char* nrjchArray_Copy = NULL;
	int original_string_length = 0;

	//code
	printf("\n\n");

	nrjchArray_Original = (char *)malloc(MAX_STRING_LENGTH * sizeof(char));
	if (nrjchArray_Original == NULL)
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

	gets_s(nrjchArray_Original, MAX_STRING_LENGTH);

	nrjchArray_Copy = (char*)malloc(MAX_STRING_LENGTH * sizeof(char));
	if (nrjchArray_Copy == NULL)
	{
		printf("Memory Allocation to COPIED character Array Failed !!! EXITING NOW ...\n\n");
		exit(0);
	}

	//**************String Copy***************************
	MyStrcpy(nrjchArray_Copy, nrjchArray_Original);
	//*************String Output**************************
	printf("\n\n");
	printf("Original String Entered by You Is:\n\n");
	printf("%s\n", nrjchArray_Original);


	printf("\n\n");
	printf("Copied  String Is:\n\n");
	printf("%s\n", nrjchArray_Copy);


	//****String Length******************************
	printf("\n\n");
	original_string_length = MyStrlen(nrjchArray_Original);
	printf("Length of Original string Is :%d Characters !!!!\n\n ", original_string_length);
	
	if (nrjchArray_Copy)
	{
		free(nrjchArray_Copy);
		nrjchArray_Copy = NULL;
		printf("Memory allocated for the Copied String has been FREED SUCCESSFULLY !!!!\n\n");
	}

	if (nrjchArray_Original)
	{
		free(nrjchArray_Original);
		nrjchArray_Original = NULL;
		printf("Memory allocated for the Original String has been FREED SUCCESSFULLY !!!!\n\n");
	}

	

	return(0);
}//end of main function

void MyStrcpy(char  *str_destination, char  *str_source)
{

	//Function prototype 
	int MyStrlen(char*);
	int i;


	int iStringLength = 0;
	
	iStringLength = MyStrlen(str_source);

	for (i = 0; i < iStringLength; i++)
	{

		*(str_destination +i) = *(str_source +i);

	}
	*(str_destination+i) = '\0';


}//end of MyStrCpy Method 

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


