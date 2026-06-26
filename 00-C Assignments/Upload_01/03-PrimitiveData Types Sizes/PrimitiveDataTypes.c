//** Sizes of int,unsignedint,long, long long , float , double , long double 
#include<stdio.h>
int main(int args,int *argv[],int *envp[])
{
//code 
	printf("\n\n");

	printf("Size of   Datatype 'int' :              %zd bytes \n", sizeof(int));
	printf("Size of   Datatype 'unsigned int':      %zd bytes \n", sizeof(unsigned int));
	printf("Size of   Datatype 'long':              %zd bytes \n", sizeof(long));
	printf("Size of   Datatype 'long long':         %zd bytes \n", sizeof(long long));
	
	printf("Size of   Datatype 'float':             %zd bytes \n", sizeof(float));
	printf("Size of   Datatype 'double':            %zd bytes \n", sizeof(double));
	printf("size of   Datatype 'long double'        %zd bytes \n", sizeof(long double));

	printf("\n\n");
	return(0);
}