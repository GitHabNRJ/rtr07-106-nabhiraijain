#include <stdio.h>

struct Employee
{
	char name[100];
	int age;
	float salary;
	char sex;
	char marital_status;
};

int main(int args[], int* argv, int* envp)
{
  //code
	printf("\n\n");

	printf("SIZES OF DATA TYPES AND POINTERS TO THOSE RESPECTIVE DATA TYPES ARE:\n");

	printf("Size of (int) :%zd \t\t Sizeof(int*):%zd \t\t sizeof(int**):%zd\n", sizeof(int), sizeof(int*), sizeof(int**));
	printf("Size of (float) :%zd \t\t Sizeof(float*):%zd \t\t sizeof(float**):%zd\n", sizeof(float), sizeof(float*), sizeof(float**));
	printf("Size of (char) :%zd \t\t Sizeof(double*):%zd \t\t sizeof(double**):%zd\n", sizeof(char), sizeof(char*), sizeof(char**));
	printf("Size of (double) :%zd \t\t Sizeof(char*):%zd \t\t sizeof(char**):%zd\n", sizeof(double), sizeof(double*), sizeof(double**));
	printf("Size of (Employee) :%zd \t Sizeof(Employee*):%zd \t\t sizeof(Employee**):%zd\n", sizeof(struct Employee), sizeof(struct Employee*), sizeof(struct Employee **));


	return(0);



}//end of main function



