#include<stdio.h>
#include<stdlib.h>

#define MAX_STRING_LENGTH 512

int main(void)
{

	//function prototype
	char* ReplaceVowelsWithHashSymbol(char*);


	//variable declarations
	char string[MAX_STRING_LENGTH];
	char* replaced_string = NULL;

	//code
	printf("\n\n");

	printf("Enter String :");
	gets_s(string, MAX_STRING_LENGTH);

	replaced_string = ReplaceVowelsWithHashSymbol(string);
	if (replaced_string == NULL)
	{
		printf("ReplaceVowelsWithHashSymbol() Function has Failed !!! EXITING NOW ...\n\n");
		exit(0);
	}
	
	printf("\n\n");
	printf("Replaced String Is:\n\n");
	printf("%s\n\n",replaced_string);


	if (replaced_string)
	{
		free(replaced_string);
		replaced_string = NULL;
	}

	return(0);
}//end of main function

char* ReplaceVowelsWithHashSymbol(char* s)
{
	//function prottotype
	void MyStrcpy(char*, char*);
	int MyStrlen(char*);

	//variable declarations
	char* new_string = NULL;
	int i;

    //code
	new_string = (char*)malloc(MyStrlen(s) * sizeof(char));
	if (new_string == NULL)
	{
		printf("COULD NOT ALLOCATE MEMORY FOR NEW STRING !!!\n\n");
		return(NULL);
	}
		MyStrcpy(new_string, s);
		for (i = 0; i < MyStrlen(new_string); i++)
		{
			switch (new_string[i])
			{
			case 'A':
			case 'a':
			case 'E':
			case 'e':
			case 'I':
			case 'i':
			case 'O':
			case 'o':
			case 'U':
			case 'u':
				new_string[i] = '#';
				break;
			default:
				break;


			}
		}
		return(new_string);
}


void MyStrcpy(char* str_destination, char* str_source)
{

	//Function prototype 
	int MyStrlen(char*);
	int i;


	int iStringLength = 0;

	iStringLength = MyStrlen(str_source);

	for (i = 0; i < iStringLength; i++)
	{

		*(str_destination + i) = *(str_source + i);

	}
	*(str_destination + i) = '\0';


}//end of MyStrCpy Method 

int MyStrlen(char* str)
{
	int nrjj;
	int string_length = 0;
	for (int nrjj = 0; nrjj < MAX_STRING_LENGTH; nrjj++)
	{
		if (*(str + nrjj) == '\0')
			break;
		else
			string_length++;

	}//end of for loop

	return(string_length);
}//end of MyStrelen


