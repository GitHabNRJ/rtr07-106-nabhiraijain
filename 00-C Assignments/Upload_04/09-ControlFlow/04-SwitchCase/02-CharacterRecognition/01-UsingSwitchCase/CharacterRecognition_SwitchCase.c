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

	printf("\n\n");
	switch(nrj_ch)
	     {
	//FALL Through condition...
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
		printf("Entered character %c by the user is from the Vowel set of the Alphabet!!\n\n", nrj_ch);
		break;
	default:
		nrj_chvalue =(int)nrj_ch;
		if ((nrj_chvalue >= CHAR_ALPHABET_UPPER_CASE_BEGINNING && nrj_chvalue <= CHAR_ALPAHBET_UPPER_CASE_ENDING) ||
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

			break;
 }//end of Switch case
		printf("Out of the Swich case for CharacterRecognition\n\n");
}//end of main Function
