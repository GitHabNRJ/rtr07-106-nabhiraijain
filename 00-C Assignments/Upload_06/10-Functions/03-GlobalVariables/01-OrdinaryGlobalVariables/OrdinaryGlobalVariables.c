#include<stdio.h>

//**GLOBAL SCOPE***
//If not initialized by us , global variables are initialized to their zeor valuse(with respect to their data types
//i:e int =0, float =0.0 and double etc
//For good programming discipline we shall explicitly innitialize global variable to 0 from programmder end 

// Global variable declaration

int global_count = 0;

int main(void)
{
//function prototypes

	void change_count_one(void);
	void change_count_two(void);
	void change_count_three(void);

	//code
	printf("\n");

	printf("Inside Entry point function main():Value of Global variable global_count=%d \n", global_count);

	change_count_one();
	change_count_two();
	change_count_three();

	printf("\n");

	return(0);

}//end of main function

void change_count_one()
{

	global_count = 100;
	printf("Value of global variable in cnange_count_one after reinitialization global_count=%d\n", global_count);


}//end of change_count_one function

void change_count_two()
{

	global_count = global_count + 1;
	printf("Value of global variable in cnange_count_one after reinitialization global_count=%d\n", global_count);


}//end of change_count_one function


void change_count_three()
{

	global_count= global_count+10;
	printf("Value of global variable in cnange_count_three global_count=%d\n", global_count);


}//end of change_count_one function

