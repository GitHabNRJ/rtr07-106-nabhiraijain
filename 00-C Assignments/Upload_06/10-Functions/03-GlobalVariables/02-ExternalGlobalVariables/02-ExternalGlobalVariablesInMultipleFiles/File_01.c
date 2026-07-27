//**nrjglobal_count is a global variable declared in sourcefile:ExternalGlobalVariablesInMultipleFiles
//To access in this file it must first be declared as a external variable in the gloabl scope of the file using the 'extern' keyword 
//Then, it can be used as any ordinaly variable throughout the file 

#include<stdio.h>

extern int nrjglobal_count;
void change_count_one(void)
{
//code
	nrjglobal_count = nrjglobal_count + 1;
	printf("change_count_one:Value of global variable nrjglobal_count in file_01c=%d\n", nrjglobal_count);
}