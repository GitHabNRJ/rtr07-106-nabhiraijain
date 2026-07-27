#include<stdio.h>

//**GLOBAL SCOPE****

int main(void)
{

//Local variable declaration to main
	int a = 5;

//function prototype declaration
	void change_count(void);

	//code
	printf("\n");
	printf("A=%d\n\n", a);

	change_count();

	change_count();



}

void change_count()
{
	int nrjlocal_count = 0;

	nrjlocal_count = nrjlocal_count + 1;

	printf("Local count=%d\n", nrjlocal_count);

}