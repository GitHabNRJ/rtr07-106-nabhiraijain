//**nrjglobal_count is a global variable declared in sourcefile:ExternalGlobalVariablesInMultipleFiles
//To access in this file it must first be declared as a external variable in the gloabl scope of the file using the 'extern' keyword 
//Then, it can be used as any ordinaly variable throughout the file 

#include<stdio.h>

void change_count_two(void)
{

	 extern int nrjglobal_count;
	//code
	 nrjglobal_count = nrjglobal_count + 1;
	printf("change_count_two:Value of global variable nrjglobal_count in file_02c=%d\n", nrjglobal_count);

}