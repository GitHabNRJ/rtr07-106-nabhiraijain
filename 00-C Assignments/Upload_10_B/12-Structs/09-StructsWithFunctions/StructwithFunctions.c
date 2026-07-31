#include<stdio.h>

//Defining struct 

struct MyData
{
	int i;
	float f;
	double d;
	char c;
};

int main(int args, int* argv[], int* envp[])
{
	
	struct MyData AddStructMembers(struct MyData, struct MyData, struct MyData);
	struct MyData data2, data3, data4;
	struct MyData answer_result;

	//********************Values of data d2**********
	printf("Enter the values of Struct MyData d2:\n");
	printf("Enter Integer Value  'i' of data2:");
	scanf("%d",&data2.i);
	printf("Enter Float Value  'f' of data2:");
	scanf("%f",&data2.f);
	printf("Enter double Value  'd' of data2:");
	scanf("%lf",&data2.d);
	printf("Enter character value 'c' of data 2:");
	data2.c = getch();
	printf("\n");
	printf("data2 character =%c", data2.c);

		printf("\n\n");

	//********************Values of data d3**********
	printf("Enter the values of Struct MyData d3:\n");
	printf("Enter Integer Value  'i' of data3:");
	scanf("%d",&data3.i);
	printf("\n");
	printf("Enter Float Value  'f' of data3:");
	scanf("%f",&data3.f);
	printf("\n");
	printf("Enter double Value  'd' of data3:");
	scanf("%lf",&data3.d);
	printf("\n");
	printf("Enter character value 'c' of data 2:");
	data3.c = getch();
	printf("\n");
	printf("data3 character =%c", data3.c);

		printf("\n\n");


	//********************Values of data d4**********
	printf("Enter the values of Struct MyData d4:\n");
	printf("Enter Integer Value  'i' of data4:");
	scanf("%d",&data4.i);
	printf("\n");
	printf("Enter Float Value  'f' of data4:");
	scanf("%f",&data4.f);
	printf("\n");
	printf("Enter double Value  'd' of data4:");
	scanf("%lf",&data4.d);
	printf("\n");
	printf("Enter character value 'c' of data 4:");
	data4.c = getch();
	printf("\n");
	printf("data2 character =%c", data4.c);

		printf("\n\n");




	//calling struct method to perform the addition Operation 
	answer_result = AddStructMembers(data2, data3, data4);


	printf("Integer of anser_result=%d\n", answer_result.i);
	printf("Float of anser_result=%f\n", answer_result.f);
	printf("Double of anser_result=%lf", answer_result.d);

	printf("\n\n");

}//end of main function

struct MyData AddStructMembers(struct MyData d2, struct MyData d3, struct MyData d4)
{
	struct MyData d1;
	d1.i = d2.i + d3.i + d4.i;
	d1.f = d2.f + d3.f + d4.f;
	d1.d = d2.d + d3.d + d4.d;

	return(d1);
}
