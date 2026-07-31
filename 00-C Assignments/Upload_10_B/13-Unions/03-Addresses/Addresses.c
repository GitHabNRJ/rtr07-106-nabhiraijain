#include<stdio.h>

struct MyStruct
{
	int i;
	float f;
	double d;
	char c;
};



union MyUnion
{
	int i;
	float f;
	double d;
	char c;
};

int main(int args[], int* argv[], int *envp[])
{

	//variable declaration
	
	struct MyStruct s1;
	union MyUnion u1;

	//code
	//**********MyUnion u1********
	printf("\n\n");
	printf("Members of Struct s are:\n\n");

	s1.i = 5;
	s1.f = 45.6f;
	s1.d = 8.333333;
	s1.c = 'C';

	printf("s1.i=%d\n\n",s1.i);
	printf("s1.f=%f\n\n",s1.f);
	printf("s1.d=%lf\n\n",s1.c);
	printf("s1.c=%c\n\n",s1.c);

	printf("Address of Members of Struct are:-\n");
	printf("Addres of s1.i=%p\n",&s1.i);
	printf("Addres of s1.f=%p\n",&s1.f);
	printf("Addres of s1.d=%p\n",&s1.d);
	printf("Addres of s1.c=%p\n",&s1.c);

	printf("My Struct address=%p\n",&s1);

	//**MyUnion u2********//
	printf("\n\n");
	printf("Members of Union u are:\n\n");

	u1.i = 556;
	u1.f = 55.6f;
	u1.d = 9.333333;
	u1.c = 'A';

	printf("u1.i=%d\n\n",u1.i);
	printf("u1.f=%f\n\n", u1.f);
	printf("u1.d=%lf\n\n",u1.d);
	printf("u1.c=%c\n\n",u1.c);
	

	printf("Address of Members of Union u1 are:-\n");
	printf("Addres of u1.i=%p\n",&u1.i);
	printf("Addres of u1.f=%p\n",&u1.f);
	printf("Addres of u1.d=%p\n",&u1.d);
	printf("Addres of u1.c=%p\n",&u1.c);

	printf("My Union u address=%p\n", &u1);

	return(0);
}