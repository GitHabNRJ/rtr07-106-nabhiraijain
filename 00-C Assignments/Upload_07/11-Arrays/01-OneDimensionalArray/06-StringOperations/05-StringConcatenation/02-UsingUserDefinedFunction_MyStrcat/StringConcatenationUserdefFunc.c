#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(int args, int* argv[], int* envp)
{


    //prototype declaration 
	void MyStrConc(char nrjchArray_One1[], char nrjchArray_Two2[]);

	//variable declarations

	char nrjchArray_One[MAX_STRING_LENGTH];
	char nrjchArray_Two[MAX_STRING_LENGTH];

	//code

	//*****STRING INPUT******
	printf("\n\n");
	printf("Enter First  String:\n");
	// The gets_s function reads a line from the standard input stream stdin and stores it in buffer.
	//  char* gets_s(char* buffer,size_t sizeInCharacters);
	//     buffer-Storage location for input string
	//     sizeInCharacters:The size of the buffer
	//ReturnValue: Return buffer if successfull
	//             Else return a NULL pointer indicates an error or end-of -file.

	gets(nrjchArray_One, MAX_STRING_LENGTH);


	printf("Enter Second  String:\n");
	// The gets_s function reads a line from the standard input stream stdin and stores it in buffer.
	//  char* gets_s(char* buffer,size_t sizeInCharacters);
	//     buffer-Storage location for input string
	//     sizeInCharacters:The size of the buffer
	//ReturnValue: Return buffer if successfull
	//             Else return a NULL pointer indicates an error or end-of -file.

	gets(nrjchArray_Two, MAX_STRING_LENGTH);

	//***
	

	//*************String CONCAT**************************
	printf("\n\n");
	printf("***********BEFORE CONCATENATION ********************");
	printf("\n\n");
    printf("The Original First String Entered By You (i:e : 'nrjchArray_One[]')  Is:\n\n");
	printf("%s\n", nrjchArray_One);

	printf("\n\n");
	printf("The  Original 2nd String Entered By You (i:e  'nrjchArray_Original[]' ) Is:\n\n");
	printf("%s\n", nrjchArray_Two);

	/*************String Concatenate*****************/

	MyStrConc(nrjchArray_One, nrjchArray_Two);


	printf("\n\n");
	/***************String after concatenation***************/
	printf("\n\n");

	printf("The 1st String 'nrjchArray_One[]' After concatenation Is:\n\n");
	printf("%s\n",nrjchArray_One);

	printf("\n\n");
	printf("The 2nd String 'nrjchArray_Original[]' After concatenation   Is:\n\n");
	printf("%s\n",nrjchArray_Two);
	return(0);

}//end of main function


void MyStrConc(char nrjstr_destination[], char nrjstr_source[])
{

	int MyStrlen(char str[]);

	int iStringLength_Source = 0;
	int iStringLenght_Destination = 0;
	int i, j;

	iStringLength_Source = MyStrelen(nrjstr_source);
	iStringLenght_Destination = MyStrelen(nrjstr_destination);

	

	printf("\n\n");

	printf("The Length of 1st String=%d\n", iStringLength_Source);
	printf("The Lenght of 2nd String=%d\n", iStringLenght_Destination);

	printf("\n\n");


	for (i = iStringLenght_Destination,j=0 ;j < iStringLength_Source; i++,j++)
	{
		nrjstr_destination[i] = nrjstr_source[j];
		

	}

	//nrjchArray_Two2[i]= '\0';
	nrjstr_destination[i] = '\0';



}//end of MyStrConc

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



