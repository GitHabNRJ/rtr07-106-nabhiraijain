#include<stdio.h>
#include<stdlib.h>

#define MAX_STRING_LENGTH 512

int main(void)
{

	//function prototype
	int MyStrlen(char *);
	void MyStrrev(char *, char *);

	//function prototype
	

	//variable declarations
	char * nrjchArray_Original=NULL;
	char* nrjchArray_Reversed = NULL;
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

	nrjchArray_Reversed = (char*)malloc(MAX_STRING_LENGTH * sizeof(char));
	if (nrjchArray_Reversed == NULL)
	{
		printf("Memory Allocation to Reversed character Array Failed !!! EXITING NOW ...\n\n");
		exit(0);
	}

	//**************String Copy***************************
	MyStrrev(nrjchArray_Reversed, nrjchArray_Original);
	//*************String Output**************************
	printf("\n\n");
	printf("Original String Entered by You Is:\n\n");
	printf("%s\n", nrjchArray_Original);


	printf("\n\n");
	printf("Reversed  String Is:\n\n");
	printf("%s\n", nrjchArray_Reversed);


	//****String Length******************************
	printf("\n\n");
	original_string_length = MyStrlen(nrjchArray_Original);
	printf("Length of Original string Is :%d Characters !!!!\n\n ", original_string_length);
	
	if (nrjchArray_Reversed)
	{
		free(nrjchArray_Reversed);
		nrjchArray_Reversed = NULL;
		printf("Memory allocated for the Reversed String has been FREED SUCCESSFULLY !!!!\n\n");
	}

	if (nrjchArray_Original)
	{
		free(nrjchArray_Original);
		nrjchArray_Original = NULL;
		printf("Memory allocated for the Original String has been FREED SUCCESSFULLY !!!!\n\n");
	}

	

	return(0);
}//end of main function

void MyStrrev(char  *str_destination, char  *str_source)
{

	//Function prototype 
	int MyStrlen(char*);
	int i,j;
	int len;


	int iStringLength = 0;
	
	iStringLength = MyStrlen(str_source);
	len = iStringLength - 1;

	for (i = 0, j = len; i < iStringLength, j >= 0; i++, j--)
	{

		*(str_destination +i) = *(str_source+j);
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


