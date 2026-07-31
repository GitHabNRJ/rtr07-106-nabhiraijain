#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define MAX_STRING_LENGTH 1024

struct CharacterCount
{
	char ch;
	int ch_count;

}character_and_count[] = { { 'A',0},
						  { 'B',0},
						  { 'C',0 },
						  { 'D',0 },
						  { 'E',0 },
						  { 'F',0 },
						  { 'G',0 },
						  { 'H',0 },
						  { 'I',0 },
						  { 'J',0 },
						  { 'K',0 },
						  { 'L',0 },
						  { 'M',0 },
						  { 'N',0 },
						  { 'O',0 },
						  { 'P',0 },
						  { 'Q',0 },
						  { 'R',0 },
						  { 'S',0 },
						  { 'T',0 },
						  { 'U',0 },
						  { 'V',0 },
						  { 'W',0 },
						  { 'X',0 },
						  { 'Y',0 },
						  { 'Z',0 }
};

#define SIZE_OF_ENTIRE_ARRAY_OF_STRUCTS sizeof(character_and_count)
#define SIZE_OF_ONE_STRUCT_FROM_THE_ARRAY_OF_STRUCT sizeof(character_and_count[0])
#define NUM_ELEMENTS_IN_ARRAY (SIZE_OF_ENTIRE_ARRAY_OF_STRUCTS/SIZE_OF_ONE_STRUCT_FROM_THE_ARRAY_OF_STRUCT)

int main(int args[], int* argv[], int* envp[])
{
	char str[MAX_STRING_LENGTH];
	int nrji,actual_string_length = 0;
	int nrjj;

	//code
	printf("\n\n");
	printf("Enater A String:\n\n");
	gets(str, MAX_STRING_LENGTH);

	actual_string_length = strlen(str);

	printf("\n\n");
	printf("The String You have Entered Is:\n\n");
	printf("%s\n\n", str);

	for (nrji = 0; nrji < actual_string_length; nrji++)
	{
		for (nrjj = 0; nrjj < NUM_ELEMENTS_IN_ARRAY; nrjj++)
		{

			str[nrji] = toupper(str[nrji]);

			if (str[nrji] == character_and_count[nrjj].ch) 

				character_and_count[nrjj].ch_count++;




		}
	}
	
		printf("The Number of Occurances of All Characters from the alphabet are as Follows:\n\n");

		for (nrji = 0; nrji < NUM_ELEMENTS_IN_ARRAY; nrji++)
		{

			printf("Character %c=%d\n", character_and_count[nrji].ch, character_and_count[nrji].ch_count);

		}
		printf("\n\n");

		return(0);


	}//end of main function