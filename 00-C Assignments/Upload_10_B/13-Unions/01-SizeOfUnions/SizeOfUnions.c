#include<stdio.h>

struct MyStruct
{
	int nrj_i;
	float nrj_f;
	double nrj_d;
	char nrj_c;
};

union MyUnion
{
	int nrj_i;
	float nrj_f;
	double nrj_d;
	char nrj_c;


};

int main(int args[], int* argv[], int* env[])
{
//variable declarations
	struct MyStruct s;
	union MyUnion u;

	//code
	printf("\n\n");
	printf("Size of MyStruct=%zu", sizeof(s));
	printf("\n\n");
	printf("Size of union=%zu", sizeof(u));
	printf("\n\n");

	return(0);

}