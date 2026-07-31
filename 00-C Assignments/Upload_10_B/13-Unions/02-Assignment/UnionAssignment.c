#include<stdio.h>

union MyUnion
{
	int i;
	float f;
	double d;
	char c;
};

int main(int args[], int* argv[], int envp[])
{

//variable declaration
	union MyUnion u1, u2;

	//code
	//**********MyUnion u1********
	printf("\n\n");
	printf("Members of Union u1 are:\n\n");

	u1.i = 5;
	u1.f = 45.6f;
	u1.d = 8.333333;
	u1.c = 'C';

	printf("u1.i=%d\n\n", u1.i);
	printf("u1.f=%f\n\n", u1.f);
	printf("u1.d=%ld\n\n", u1.d);
	printf("u1.c=%c\n\n", u1.c);

	printf("Address of Members of Union u1 are:-\n");
	printf("Addres of u1.i=%p", &u1.i);
	printf("Addres of u1.f=%p", &u1.f);
	printf("Addres of u1.d=%p", &u1.d);
	printf("Addres of u1.c=%p", &u1.c);

	printf("My Union u1 address=%p\n",&u1);

		//**MyUnion u2********//

	u2.i = 556;
	u2.f = 55.6f;
	u2.d = 9.333333;
	u2.c = 'A';

	printf("u2.i=%d\n\n", u2.i);
	
	printf("u2.d=%ld\n\n", u2.d);
	printf("u2.c=%c\n\n", u2.c);
	printf("u2.f=%f\n\n", u2.f);
	printf("Address of Members of Union u2 are:-\n");
	printf("Addres of u2.i=%p", &u2.i);
	printf("Addres of u2.f=%p", &u2.f);
	printf("Addres of u2.d=%p", &u2.d);
	printf("Addres of u2.c=%p", &u2.c);

	printf("My Union u2 address=%p\n",&u2);

}