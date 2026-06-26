#include<stdio.h>
int main(int args[],int *argv[], int* envp[])
{
//n escape sequence is a combination of characters used to represent a character that cannot be typed directly on a keyboard.Each escape sequence begins with a backslash(\) followed by a specific character.
//code
	printf("\n\n");
	
	//Going On To Next Line...Using \n Escape Sequence
	printf("Going On To Next Line...Using \\n Escape Sequence \n\n ");

	//Demonstrating   Horizontal      Tab     Using   \t Escape Sequence !!!!
	printf("Demonstrating \t Horizontal \t Tab \t Using \t \\t Escape Sequence !!!!\n\n");

	//" This Is A Double Quoted Output" Done Using \" \" Escape Sequence
	printf("\" This Is A Double Quoted Output\" Done Using \\\" \\\" Escape Sequence \n\n");

	//'This is A Single Quoted Output' Done Using \' \' Escape Sequence

	printf("\'This is A Single Quoted Output\' Done Using \\' \\' Escape Sequence \n\n");

	// /b Move the cursor position to previous -1 cursor position
	printf("BACKSPACE turned to BACKSPACE\b Using Escape Sequence \b\n\n");

	// /r (carriage return -Moves the active position to the initial position of the current line.
	// Demonstrating Carriage Return Using 
	//Escape Sequencearriage Return Using
	printf(" Demonstrating Carriage Return Using \r Escape Sequence\n");


	printf("Demonstrating \x41 Using \\xh Escape Sequence \n\n");
	
	printf("Demonstrating \102 Using \\ooo Escape Sequence\n\n");
return(0);

}//end of main function