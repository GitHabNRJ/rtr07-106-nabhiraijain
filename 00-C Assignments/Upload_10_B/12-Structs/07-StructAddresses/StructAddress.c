#include<stdio.h>

struct MyData
{
	int i;
	float f;
	double d;
	char c;

};

int main(void)
{
//variable declarations
	struct MyData data;

	//Assigning Data values to the data 
	data.i = 30;
	data.f = 11.54f;
	data.d = 1.29956;
	data.c = 'A';

	printf("\n\n");
	printf("Displaying sizes of Data Members of struct MyData are :\n");
	printf("Sizes  ofData Members are:\n");
	printf("'data.i' Size is  %zd  bytes \n", sizeof(int));
	printf("'data.f' Size is %zd bytes \n", sizeof(float));
	printf("'data.d' Size is  %zd bytes \n", sizeof(double));
	printf("'data.cc' Size is %zd bytes \n", sizeof(char));


	printf("\n\n");
	printf("Address of Data Members of struct MyData are :\n");
	printf("Addresses of Data Members are:\n");
	printf("'i' Occipies Addresses From %p \n", &data.i);
	printf("'f' Occipies Addresses From %p \n", &data.f);
	printf("'d' Occipies Addresses From %p \n", &data.d);
	printf("'c' Occipies Addresses From %p \n", &data.c);
	
	printf("Starting Address of 'struct' Mydata is :%p\n", &data);
	return(0);
}