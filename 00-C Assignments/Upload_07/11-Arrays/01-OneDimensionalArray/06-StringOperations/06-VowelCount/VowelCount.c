#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{

	//function prototype
	int MyStrelen(char str[]);

	//variable declarations
	char nrjchArray[MAX_STRING_LENGTH];
	int nrjisStringLength = 0;
	int count_A = 0, count_E = 0, count_I = 0, count_O=0,count_U=0;
	int i;

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

	gets(nrjchArray, MAX_STRING_LENGTH);

	//*************String Output**************************
	printf("\n\n");
	printf("String Entered by You Is:\n");
	printf("%s\n", nrjchArray);

	//****String Lenght******************************
	printf("\n\n");
	nrjisStringLength = MyStrelen(nrjchArray);
	printf("Lenght of string :%d",nrjisStringLength);

	//************Logic to count the vowels*********************/
	for (i = 0; i < nrjisStringLength; i++)
	{
		switch (nrjchArray[i])
		{
		case 'A':
		case 'a':
			count_A++;
			break;
		case 'E':
		case 'e':
			count_E++;
			break;
		case 'I':
		case 'i':
			count_I++;
			break;
		case 'O':
		case 'o':
			count_O++;
			break;
		case 'U':
		case 'u':
			count_U++;
			break;

		default:
			break;
         }//end of switch case


	}//end of for loop

	printf("\n\n");
	printf("In the String entered by user the count of vowels is as follouws:\n");
	printf(" 'A' or 'a' has occured %d Times!!!\n", count_A);
	printf(" 'E' or 'e' has occured %d Times!!!\n", count_E);
	printf(" 'I' or 'i' has occured %d Times!!!\n", count_I);
	printf(" 'O' or 'o' has occured %d Times!!!\n", count_O);
	printf(" 'U' or 'u'   has occured %d Times!!!\n", count_U);
	


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


