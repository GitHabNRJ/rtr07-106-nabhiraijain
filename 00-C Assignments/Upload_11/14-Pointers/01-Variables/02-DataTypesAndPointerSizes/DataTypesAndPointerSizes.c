#include<stdio.h>

struct Employee
{
	char nrj_name[100];
	int nrj_age;
	float nrj_salary;
	char nrj_sex;
	char nrj_matital_Status;

};

int main(int args[], int* argv[], int* envp[])
{
	//code
	printf("\n\n");
	printf("SIZED OF DATA TYPES AND POINTERS To those representive data types are :\n");

	printf("Size of (int)               :%zd\t\t\t sizeofPointer to int (int*):%zd\n", sizeof(int), sizeof(int*));
	printf("Size of (float)             :%zd\t\t\t sizeofPointer to float(int*):%zd\n", sizeof(float), sizeof(float*));
	printf("Size of (char)              :%zd\t\t\t sizeofPointer to char (int*):%zd\n", sizeof(char), sizeof(char*));
	printf("Size of (Employee)          :%zd\t\t\t sizeofPointer to Employee (int*):%zd\n", sizeof(struct Employee), sizeof(struct Employee*));

	return(0);


};
