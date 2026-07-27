#include<stdio.h>

//***Type 3 of calling user defined functions
//***Calling only 1 function directly in amin(),rest of the functions will trace their call indirectly to main(0

int main(int argc, int* argv[], int* envp[])
{
//function prototypes
	void Function_Country(void);

		//CODE
		Function_Country();
	return(0);



}//end of main function

void Function_Country(void)
{
	void Function_OfAMC(void);

	Function_OfAMC();
	printf("\n\n");

	printf("I Live In India");
	printf("\n\n");
}

void Function_OfAMC(void)
{
	//function declaration
    void Function_SurName(void);

	Function_SurName();

	//code
	printf("\n\n");
	printf("Of ASTROMEDICOMP");
}

void Function_SurName(void) //function definition
{
	//function declaration
	void Function_MiddleName(void);

	Function_MiddleName();
	//code
	printf("\n\n");
	printf("Jain");

}

void Function_MiddleName(void) //function definition
{
	
	//function declaration
	void Function_FirstName(void);
	Function_FirstName();
	//code
	printf("\n\n");
	printf("rai");

}

void Function_FirstName(void) //function definition
{
	//function declaration
	void Function_Is(void);

		Function_Is();
	
	//code
	printf("\n\n");
	printf("Nabhi");

}

void Function_Is(void) //function definition
{
	//function declaration
	void Function_Name(void);

	Function_Name();
	
	//code
	printf("\n\n");
	printf("Is");

}

void Function_Name(void) //function definition
{
	//function declaration
	void Function_My(void);

	Function_My();
	
	//code
	printf("\n\n");
	printf("Name");

}

void Function_My(void) //function definition
{
	//code
	printf("\n\n");
	printf("My");

}