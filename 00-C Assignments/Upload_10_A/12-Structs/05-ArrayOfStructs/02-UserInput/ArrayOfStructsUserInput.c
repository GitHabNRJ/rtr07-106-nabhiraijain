#include<stdio.h>
#include <ctype.h>

#define NAME_LENGTH 100
#define MARITAL_STATUS 10

#define NUM_EMPLOYEES 5

struct Employee
{
	char name[NAME_LENGTH];
	int age;
	float salary;
	char sex;
	char marital_status;
};

int main(int args[], int* argv[], int* envp[])
{

	//function prototype
	void MyGetString(char[], int);
	
	//variable declarations
	struct Employee EmployeeRecord[NUM_EMPLOYEES]; //An array of 5 struct further each of type Employee
	int nrji;

	//****Hard coded innitialization of struct Employee 


	//*****Employee1************
	for (nrji = 0; nrji < NUM_EMPLOYEES; nrji++)
	{
		printf("*******DATA ENTRY FOR Employee Number:%d\n", (nrji + 1));
		printf("Enter Employee Name:");
        MyGetString(EmployeeRecord[nrji].name, NAME_LENGTH);

		printf("Enter Age (In Years):");
		scanf("%d", &EmployeeRecord[nrji].age);
		printf("\n");

		printf("Enter Salary (In Indian Rupees):");
		scanf("%f", &EmployeeRecord[nrji].salary);
		printf("\n");

		printf("Is The Employee Married (Y/y for Yes ,N/n for NO:");
		EmployeeRecord[nrji].marital_status = getch();
		printf("%c", EmployeeRecord[nrji].marital_status);
		EmployeeRecord[nrji].marital_status = toupper(EmployeeRecord[nrji].marital_status);
		
		printf("\n");
		printf("Enter Employee's Sex(M/m or F/f:");
		EmployeeRecord[nrji].sex = getch();
		printf("%c", EmployeeRecord[nrji].sex);
		EmployeeRecord[nrji].sex = toupper(EmployeeRecord[nrji].sex);
		printf("\n\n\n");
}

	//**********Display ************
	printf("\n\n");

	printf("********Displaying employee records******\n");
	for (nrji = 0; nrji < NUM_EMPLOYEES; nrji++)
	{

		printf("Employee Number :%d\n", nrji);
		printf("Name :%s\n", EmployeeRecord[nrji].name);
		printf("AGE :%d years\n", EmployeeRecord[nrji].age);

		
		printf("Salary :%f\n", EmployeeRecord[nrji].salary);
		printf("sex :%c\n", EmployeeRecord[nrji].sex);

		if (EmployeeRecord[nrji].sex == 'M')
			printf("Sex    :Male\n");
		else if (EmployeeRecord[nrji].sex == 'F')
			printf("Sex    :Female\n");
		else
			printf("Sex is Invalid!!");


		printf("Marital_status :%c\n", EmployeeRecord[nrji].marital_status);

		if (EmployeeRecord[nrji].marital_status == 'M')
		printf("marital_status    :Married\n");
		else if (EmployeeRecord[nrji].marital_status == 'N')
		printf("marital_status    :Unmarried\n");
		else
			printf("marital_status is Invalid!!");
		printf("\n\n");
	}

	return(0);

}//end of main function 

void MyGetString(char str[], int str_size)
{
	//variable declaration 

	int i;
	char ch = '\0';

	//code
	i = 0;
	do
	{
		ch = getch();
		str[i] = ch;
		printf("%c",str[i]);
		i++;

	} while ((ch != '\r') && (i < str_size));

	if (i == str_size)
		str[i - 1] = '\0';
	else
		str[i] = '\0';

	printf("\n");
}//end of MyGetString method
