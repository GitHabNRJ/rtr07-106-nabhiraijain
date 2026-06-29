#include<stdio.h>
int main(void)
{

//variable declaration
	int nrj_num;
	printf("\n\n");
	nrj_num = 10;

	if (nrj_num) //Non -zero Positive value
	{
		printf("if-block 1:'A' Exists And has value:%d\n\n", nrj_num);
	}
	nrj_num = -10;
	if (nrj_num) // Non -zero negative value 
	{
		printf("if-block2: 'A' Exists and has value:%d\n\n", nrj_num);
	}
	nrj_num = 0;
	if (nrj_num) //Zero value
	{
		printf("if-block3: 'A' Exists and has value:%d\n\n", nrj_num);

	}
	printf("All Three if -statements are Done!!!\n\n");
	return(0);

}//end of main function