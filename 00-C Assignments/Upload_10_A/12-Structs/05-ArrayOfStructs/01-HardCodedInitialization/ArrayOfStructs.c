#include<stdio.h>

#define NAME_LENGTH 100
#define MARITAL_STATUS 10

struct Employee
{
	char name[NAME_LENGTH];
	int age;
	float salary;
	char sex;
	char marital_status[MARITAL_STATUS];
};

int main(int args[], int* argv[], int* envp[])
{

//variable declarations
	struct Employee EmployeeRecord[5]; //An array of 5 struct further each of type Employee
	int nrji;

	//****Hard coded innitialization of struct Employee 

	
	//*****Employee1************
	strcpy(EmployeeRecord[0].name,"Rajesh");
	EmployeeRecord[0].age = 30;
	EmployeeRecord[0].salary = 45000.8f;
	EmployeeRecord[0].sex = 'M';
	strcpy(EmployeeRecord[0].marital_status,"Unmarried");


	//*****Employee1************
	strcpy(EmployeeRecord[1].name,"Suresh");
	EmployeeRecord[1].age = 40;
	EmployeeRecord[1].salary = 35000.8f;
	EmployeeRecord[1].sex = 'M';
	strcpy(EmployeeRecord[1].marital_status, "Married");


	//*****Employee2************
	strcpy(EmployeeRecord[2].name,"Kavita");
	EmployeeRecord[2].age = 40;
	EmployeeRecord[2].salary = 270000.8f;
	EmployeeRecord[2].sex = 'F';
	strcpy(EmployeeRecord[2].marital_status,"Unmarried");

	//*****Employee3************
	strcpy(EmployeeRecord[3].name,"Sangram");
	EmployeeRecord[3].age = 20;
	EmployeeRecord[3].salary = 89000.8f;
	EmployeeRecord[3].sex = 'M';
	strcpy(EmployeeRecord[3].marital_status,"Married");


	//*****Employee4************
	strcpy(EmployeeRecord[4].name,"Sonia");
	EmployeeRecord[4].age = 29;
	EmployeeRecord[4].salary = 159800.8f;
	EmployeeRecord[4].sex = 'F';
	strcpy(EmployeeRecord[4].marital_status,"Unmarried");

	//**********Display ************
	printf("\n\n");

	printf ("********Displaying employee records******\n");
	for (nrji = 0; nrji < 5; nrji++)
	{

		printf("Employee Number %d\n", nrji);
		printf("Name :%s\n", EmployeeRecord[nrji].name);
		printf("AGE :%d\n", EmployeeRecord[nrji].age);
		printf("Salary :%f\n", EmployeeRecord[nrji].salary);
		printf("sex :%c\n", EmployeeRecord[nrji].sex);
		printf("Marital_status :%s\n", EmployeeRecord[nrji].marital_status);

		printf("\n\n");
	}



}