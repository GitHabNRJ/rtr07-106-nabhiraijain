#include<stdio.h>
#include<stdlib.h>

#define MAX_STRING_LENGTH 512

int main(void)
{

	//function prototype
	void MyStrcat(char*, char*);
	int MyStrlen(char *);
	

	//function prototype
	

	//variable declarations
	char* nrjchArray_One = NULL;
	char * nrjchArray_Two=NULL;
	int original_string_length = 0;

	//code
	printf("\n");

	nrjchArray_One = (char *)malloc(MAX_STRING_LENGTH * sizeof(char));
	if (nrjchArray_One == NULL)
	{
		printf("Memory Allocation TO FIRST STRING Array Failed !!! EXITING NOW ...\n\n");
		exit(0);
	}
	//****************String Input**********************
	
	printf("Enter First String:");
	// The gets_s function reads a line from the standard input stream stdin and stores it in buffer.
	//  char* gets_s(char* buffer,size_t sizeInCharacters);
	//     buffer-Storage location for input string
	//     sizeInCharacters:The size of the buffer
	//ReturnValue: Return buffer if successfull
	//             Else return a NULL pointer indicates an error or end-of -file.

	gets_s(nrjchArray_One, MAX_STRING_LENGTH);

	printf("\n\n");
	nrjchArray_Two = (char*)malloc(MAX_STRING_LENGTH * sizeof(char));
	if (nrjchArray_Two == NULL)
	{
		printf("Memory Allocation to Second character Array Failed !!! EXITING NOW ...\n\n");
		exit(0);
	}

	printf("Enter Second String:");
	gets_s(nrjchArray_Two, MAX_STRING_LENGTH);

	//***************************Before Concatenation Original Strings Entered************************************

	printf("\n\n");
	printf("***************Before Concatenation Original String Entered*******************\n");

	printf("\n\n");
	printf("Original First String Entered by You Is:\n\n");
	printf("%s\n", nrjchArray_One);


	printf("\n\n");
	printf("Original Second String Entered by You Is:\n\n");
	printf("%s\n", nrjchArray_Two);


	//**************String Concatenate***************************
	MyStrcat(nrjchArray_One, nrjchArray_Two);
	//*************String Output**************************

	printf("***************After Concatenation  Strings *******************\n");


	printf("\n\n");
	printf(" 'nrjchArray_One' Is: \t\t");
	printf("%s\n", nrjchArray_One);

	
	printf("\n\n");
	printf("nrjchArray_Two Is:\t\t");
	printf("%s\n", nrjchArray_Two);


	//****String Length******************************
	printf("\n\n");
	original_string_length = MyStrlen(nrjchArray_One);
	printf("Length of First string Is :%d Characters !!!!\n\n ", original_string_length);
	
	if (nrjchArray_Two)
	{
		free(nrjchArray_Two);
		nrjchArray_Two = NULL;
		printf("Memory allocated for the Second String has been FREED SUCCESSFULLY !!!!\n");
	}

	if (nrjchArray_One)
	{
		free(nrjchArray_One);
		nrjchArray_One = NULL;
		printf("Memory allocated for the First String has been FREED SUCCESSFULLY !!!!\n");
	}

	

	return(0);
}//end of main function

void MyStrcat(char  *str_destination, char  *str_source)
{

	//Function prototype 
	int MyStrlen(char*);
	int i,j;



	int iStringLength_Source = 0;
	int iStringLength_Destination = 0;
	
	iStringLength_Source = MyStrlen(str_source);
	iStringLength_Destination = MyStrlen(str_destination);
	

	for (i = iStringLength_Destination, j =0; j < iStringLength_Source; i++, j++)
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


