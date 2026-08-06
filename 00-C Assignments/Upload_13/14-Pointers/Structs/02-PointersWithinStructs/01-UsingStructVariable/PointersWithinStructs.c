#include<stdio.h>

struct MyData
{

	int* nrjptr_i;
	int i;

	float* nrjptr_f;
	float f;

	double* nrjptr_d;
	double d;

};

int main(int args[], int* argv[], int* envp[])
{

//variable declarations 
	struct MyData data1;

	data1.i = 9;
	data1.nrjptr_i = &data1.i;

	data1.f = 9.8f;
	data1.nrjptr_f = &data1.f;


	data1.d = 9.78990;
	data1.nrjptr_d = &data1.d;


		printf("\n\n");
	printf("i=%d\n", data1.i);
	printf("Address of i=%p\n", (data1.nrjptr_i));

	printf("f=%f\n", data1.f);
	printf("Address of f=%p\n", (data1.nrjptr_f));

	printf("d=%lf\n", data1.d);
	printf("Address of d=%p\n", (data1.nrjptr_d));




}//end of main function