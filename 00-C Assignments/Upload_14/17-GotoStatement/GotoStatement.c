#include<stdio.h>
#include<string.h>

int main(void)
{

//variable declaration
	char ch, ch_i;
	unsigned int ascii_ch = 0;

	//code
	printf("\n\n");
	printf("Enter the 1st character of 1st Name:");
	ch = getch();

	ch = toupper(ch);

	for (ch_i = 'A'; ch_i <= 'Z'; ch_i++)
	{
		if (ch == ch_i)
		{
			ascii_ch = (unsigned int)ch;

			goto result_output;
		}
	}


printf("\n\n");
printf("Go to statement not executed ,so printing Hello World\n");

result_output:

printf("\n\n");
if (ascii_ch == 0)
{
	printf("You must have strange name!! Could not find the character %c in entire english aplabet", ch);
}


else
printf("Character %c found it has ASCII Value:%u", ch, ascii_ch);


printf("\n\n");

return(0);
}
