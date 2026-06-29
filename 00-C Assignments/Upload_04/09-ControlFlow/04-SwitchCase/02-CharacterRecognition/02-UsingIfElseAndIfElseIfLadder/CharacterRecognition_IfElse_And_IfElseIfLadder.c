#include<stdio.h>
#include<conio.h>

//ASCII Values For 'A' to 'Z' ==> 65 to 90
#define CHAR_ALPHABET_UPPER_CASE_BEGINNING 65
#define CHAR_ALPAHBET_UPPER_CASE_ENDING 90

//ASCII Values For 'a' to 'z' ==> 97 to 122
#define CHAR_ALPHABET_LOWER_CASE_BEGINNING 97
#define CHAR_ALPHABET_LOWER_CASE_ENDING 122

//ASCII Values For '0' to '9'==> 48 to 57
#define CHAR_DIGIT_BEGINING 48
#define CHAR_DIGIT_ENDING 57

int main(void)
{

	//variable declaration
	char nrj_ch;
	int nrj_chvalue;

	//code
	printf("\n\n");

	printf("ASCII Values For 'A' to 'Z' ==> 65 to 90 \nASCII Values For 'a' to 'z' ==> 97 to 122 \nASCII Values For '0' to '9' ==> 48 to 57\n\n");
	printf("Enter Character:");
	nrj_ch = getch();
	nrj_chvalue = (int)nrj_ch;
	printf("\n\n");
	if ((nrj_ch == 'A' || nrj_ch == 'a') || (nrj_ch == 'E' || nrj_ch == 'e') ||( nrj_ch == "I" || nrj_ch == 'i' )||( nrj_ch == "O" || nrj_ch == 'o' )
	||( nrj_ch == "U" || nrj_ch == 'u'))
	{
		//FALL Through condition...
		printf("Entered character %c by the user is from the Vowel set of the Alphabet!!\n\n", nrj_ch);
	}
	else if ((nrj_chvalue >= CHAR_ALPHABET_UPPER_CASE_BEGINNING && nrj_chvalue <= CHAR_ALPAHBET_UPPER_CASE_ENDING) ||
			(nrj_chvalue >= CHAR_ALPHABET_LOWER_CASE_BEGINNING && nrj_chvalue <= CHAR_ALPHABET_LOWER_CASE_ENDING))
		    {

			printf("Enter Character %c by the user is from the Consonent set from the English Alphabet whose ASCII value:%d\n\n", nrj_ch, nrj_chvalue);
		     }
		else if (nrj_chvalue >= CHAR_DIGIT_BEGINING && nrj_chvalue <= CHAR_DIGIT_ENDING)
		{

			printf("Entered value %c is from the Numeric Digit Set '0 to '9' whose ASCII value:%d \n\n", nrj_ch, nrj_chvalue);
		}
		else
		printf("Entered character %c is a Special Character\n\n", nrj_ch);

	printf("Out of the if-else if-else if-else  block for CharacterRecognition via ifelse block\n\n");
}//end of main Function
