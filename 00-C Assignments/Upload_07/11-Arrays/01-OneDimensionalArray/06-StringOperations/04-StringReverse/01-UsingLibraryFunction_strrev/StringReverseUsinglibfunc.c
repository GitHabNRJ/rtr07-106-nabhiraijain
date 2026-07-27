
#define MAX_STRING_LENGTH 512

int main(int args, int* argv[], int* envp)
{

	//variable declarations

	char nrjchArray_Original[MAX_STRING_LENGTH];


	//code

	//*****STRING INPUT******
	printf("\n\n");
	printf("Enter A String:\n\n");
	// The gets_s function reads a line from the standard input stream stdin and stores it in buffer.
	//  char* gets_s(char* buffer,size_t sizeInCharacters);
	//     buffer-Storage location for input string
	//     sizeInCharacters:The size of the buffer
	//ReturnValue: Return buffer if successfull
	//             Else return a NULL pointer indicates an error or end-of -file.

	gets(nrjchArray_Original, MAX_STRING_LENGTH);

	//*************String Output**************************
	printf("\n\n");
	printf("The Original String 'nrjchArray_Original[]' Entered by You Is:\n\n");
	printf("%s\n", nrjchArray_Original);


	/*************Reverse the String*****************/


	printf("\n\n");
	printf("The Reverse String 'nrjchArray_reverse' Entered by You Is:\n\n");
	printf("%s\n", strrev(nrjchArray_Original));


	return(0);

}//end of main function


