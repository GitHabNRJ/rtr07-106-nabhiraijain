#include<stdio.h>
#include "File_01.c"
#include "File_02.c"

//**GLOBAL SCOPE***
int nrjglobal_count = 0;

int main(void)
{
//function prototypes
	void change_count(void);
	void change_count_one(void);
	void change_count_two(void);

	//code
	printf("\n");

	change_count();
	change_count_one();
	change_count_two();


	return(0);
}

void change_count(void)
{
//code
	nrjglobal_count = nrjglobal_count + 1;
	printf("Global variable value=%d\n",nrjglobal_count);

}