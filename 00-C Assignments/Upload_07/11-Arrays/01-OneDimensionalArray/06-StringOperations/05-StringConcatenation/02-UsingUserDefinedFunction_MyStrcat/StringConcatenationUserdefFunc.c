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

	//*************String Output**************************
	//printf("\n\n");
	//printf("The 1st String 'nrjchArray_One[]' Entered by You Is:\n\n");
	//printf("%s\n", nrjchArray_One);

	//rintf("\n\n");
	//printf("The 2nd String 'nrjchArray_Original[]' Entered by You Is:\n\n");
	//printf("%s\n", nrjchArray_Two);

	/*************String Concatenate*****************/

	MyStrConc(nrjchArray_One, nrjchArray_Two);


	printf("\n\n");
	/***************String after concatenation***************/

	//rintf("The 1st String 'nrjchArray_One[]' After concatenation Is:\n\n");
	//printf("%s\n",nrjchArray_One);

	//rintf("\n\n");
	//printf("The 2nd String 'nrjchArray_Original[]' After concatenation   Is:\n\n");
	//printf("%s\n",nrjchArray_Two);
	return(0);

}//end of main function


void MyStrConc(char nrjchArray_One1[], char nrjchArray_Two2[])
{

	int strlen1 = 0, strlen2 = 0;
	int i, j;

	strlen1 = MyStrelen(nrjchArray_One1);
	strlen2 = MyStrelen(nrjchArray_Two2);

	

	printf("\n\n");

	printf("The Length of 1st String=%d\n",strlen1);
	printf("The Lenght of 2nd String=%d\n", strlen2);

	printf("\n\n");

	//for (i = strlen2, j = 0; j < strlen1; i++, j++)
	//{

		//nrjchArray_Two2[i] = nrjchArray_One1[j];
		//printf("%s\n", nrjchArray_Two2);
	//}

	for (i = strlen1,j=0 ;j < strlen2; i++,j++)
	{
		nrjchArray_One1[i] = nrjchArray_Two2[j];
		printf("%s\n", nrjchArray_One1);

	}

	//nrjchArray_Two2[i]= '\0';
	nrjchArray_One1 [i] = '\0';

	printf("The 1st String 'nrjchArray_One[]' After concatenation Is:\n");
	//printf("%s\n", nrjchArray_Two2);
	printf("%s\n", nrjchArray_One1);

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



