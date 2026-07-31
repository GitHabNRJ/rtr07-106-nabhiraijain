#include <stdio.h>

#define MAX_NAME_LENGTH 100

struct Employee
{
	char name[MAX_NAME_LENGTH];
	unsigned int age;
	char gender;
	double salary;

};

struct MyData
{
	int i;
	float f;
	double d;
	char c;
};

int main(int args[], int* argv[], int* envp)
{
//Typedefs
	typedef struct Employee MY_EMPLOYEE_TYPE;
	typedef struct MyData MY_DATA_TYPE;

	//variable declarations 
	struct Employee emp = { "Funny",25,'M',10000.00 };
	MY_EMPLOYEE_TYPE emp_typedef = { "Bunny",23,'F',204005.00 };

	struct MyData md = { 30,11.56f,26.1345015,'X' };
	MY_DATA_TYPE m_typedef;

	m_typedef.i = 9;
	m_typedef.f = 345.5f;
	m_typedef.d = 8.041998;
	m_typedef.c = 'P';

	printf("\n\n");
	printf("Struct Employee:\n\n");
	printf("emp.name=%s\n", emp.name);
	printf("emp.age=%d\n", emp.age);
	printf("emp.gender=%c\n", emp.gender);
	printf("emp.salary=%lf\n", emp.salary);

	printf("\n\n");
	printf("MY_EMPLOYEE_TYPE Employee:\n\n");
	printf("emp_typedef.name=%s\n", emp_typedef.name);
	printf("emp_typedef.age=%d\n", emp_typedef.age);
	printf("emp_typedef.gender=%c\n", emp_typedef.gender);
	printf("emp_typedef.salary=%lf\n", emp_typedef.salary);

	printf("\n\n");
	printf("Struct MyData:\n\n");
	printf("md.i=%d\n", md.i);
	printf("md.f=%f\n", md.f);
	printf("md.d=%lf\n", md.d);
	printf("md.c=%c\n", md.c);

	printf("\n\n");
	printf("MyData MY_DATA_TYPE  :\n\n");
	printf("m_typedef.i=%d\n",m_typedef.i);
	printf("m_typedef.f=%f\n",m_typedef.f);
	printf("m_typedef.d=%lf\n",m_typedef.d);
	printf("m_typedef.c=%c\n",m_typedef.c);

	printf("\n\n");

	return(0);

}//end of main function