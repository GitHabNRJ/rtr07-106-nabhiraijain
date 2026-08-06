#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>


#define NAME_LENGTH 100
#define MARITTAL_STATUS 10

struct Employee
{
	char name[NAME_LENGTH];
	int age;
	char sex;
	float salary;
	char marital_status;
};

int main(int args[], int* argv[], int* engv[])
{

	//function prototype
	void MyGetString(char[], int);

	//variable declarations 
	struct Employee* pEmployeeRecord = NULL;
	int num_employees, i;

	//code
	printf("\n\n");
	printf("Enter Number of Employees Whose details you want to record:");
	scanf("%d", &num_employees);

	printf("\n");
	pEmployeeRecord = (struct Employee *)malloc(sizeof(struct Employee)* num_employees);

	if (pEmployeeRecord == NULL)
	{
		printf("Failed to Allocate Memory for %d employees !!! EXITING NOW ...\n\n", num_employees);
		exit(0);
	}
	else
	{
		printf("Memory allocated successfully for %d employees\n", num_employees);

	}
	

	//*** User Input initialization of array of struct Employee ***

	for (i = 0; i < num_employees; i++)
	{

	printf("\n\n\n");
	printf("******DATA ENTRY FOR EMPLOYEE NUMBER %d **********\n", (i + 1));
	printf("\n\n");

	printf("Enter Employee Name:");
	MyGetString(pEmployeeRecord[i].name, NAME_LENGTH);
	printf("\n\n\n");


	printf("Enter Employee Age (in years):");
	scanf("%d", &pEmployeeRecord[i].age);
	printf("\n\n");

	printf("Enter Employee's Sex:(M/F):");
	pEmployeeRecord[i].sex = getch();
	printf("%c", pEmployeeRecord[i].sex);
	pEmployeeRecord[i].sex = toupper(pEmployeeRecord[i].sex);
	
	printf("\n\n\n");
	printf("Enter Employee salary (in Indian Rupees: ");
	scanf("%f", &pEmployeeRecord[i].salary);


	printf("\n\n");
	printf("Is Employee married:(Married:M & Single:S ,Unmarried:U \n");
	pEmployeeRecord[i].marital_status = getch();
	printf("%c", pEmployeeRecord[i].marital_status);
	pEmployeeRecord[i].marital_status = toupper(pEmployeeRecord[i].marital_status);
	printf("\n\n\n");

   }//end of for loop

	//***Display**********
	printf("\n\n");
	printf("****DISPLAYING EMPLOYEE RECORDS*********\n");


	for (i = 0; i < num_employees; i++)
	{

		printf("*********EMPLOYEE NUMBER %d ************:\n\n", (i + 1));
		printf("Name        :%s\n", pEmployeeRecord[i].name);
		printf("Age          :%d\n", pEmployeeRecord[i].age);

		if (pEmployeeRecord[i].sex == 'M')
			printf("Sex:     Male\n");
		else if (pEmployeeRecord[i].sex == 'F')
			printf("Sex:  Female\n");
		else
			printf("Invalid data in Sex records for Employee\n");

		printf("Salary of Employee:Rs %f\n", pEmployeeRecord[i].salary);

		if (pEmployeeRecord[i].marital_status == 'M')
			printf("Maritial status:Married\n");

		else if (pEmployeeRecord[i].marital_status == 'S')
			printf("Employee Maritial Status :Single\n");
		else
				printf("Employee is Unmarried");

		printf("\n\n");



	}//end of for loop

	if (pEmployeeRecord)
	{
		free(pEmployeeRecord);
		pEmployeeRecord = NULL;
		printf("Memory allocated via Malloc is freed\n\n");
	}





}//end of main function

void MyGetString(char str[], int str_size)
{

	//variable declarations
	int i;
	char ch = '\0';

	//code
	i = 0;
	do
	{
		ch = getch();
		str[i] = ch;
		printf("%c", str[i]);
		i++;

	} while ((ch!='\r') && (i < str_size));

	if (i == str_size)
	{
		str[i - 1] = '\0';

	}
	else
	{
		str[i] = '\0';
	}
}//end of MyGetString function 


