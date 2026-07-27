#include<stdio.h>

//**User defined FUNCTIONS: 2nd type of calling function
//**calling only 2 functions directly in main(), rest of the functions trace their call indirectly to main()

int main(int argc, char* argv[], char* envp[])
{
//function prototypes
	void display_information(void);
	void Function_Country(void);

	//code
	display_information(); 
	Function_Country();

	return(0);
}

//**User defined function definations

void display_information(void)
{
//Function protoypes
	void Function_My(void);
	void Function_Name(void);
	void Function_Is(void);
	void Function_FirstName(void);
	void Function_MiddleName(void);
	void Function_SurName(void);
	void Function_OfAMC(void);

	//code

	//**FUNCTION CALLS*****
	Function_My();
	Function_Name();
	Function_Is();
	Function_FirstName();
	Function_MiddleName();
	Function_SurName();
	Function_OfAMC();
}

void Function_My(void) //function definition
{
//code
	printf("\n\n");
	printf("My");

}
void Function_Name(void) //function definition
{
	//code
	printf("\n\n");
	printf("Name");

}

void Function_Is(void) //function definition
{
	//code
	printf("\n\n");
	printf("Is");

}

void Function_FirstName(void) //function definition
{
	//code
	printf("\n\n");
	printf("Nabhi");

}

void Function_MiddleName(void) //function definition
{
	//code
	printf("\n\n");
	printf("rai");

}

void Function_SurName(void) //function definition
{
	//code
	printf("\n\n");
	printf("Jain");

}

void Function_OfAMC(void)
{
	//code
	printf("\n\n");
	printf("Of ASTROMEDICOMP");

}

void Function_Country(void)
{
//code
	printf("\n\n");
	printf("I Live In India");
	printf("\n\n");


}


