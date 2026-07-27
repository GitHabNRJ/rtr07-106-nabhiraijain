#include<stdio.h>

//DEFINING STRUCT 

struct MyData
{
	int inrj;
	float fnrj;
	double dnrj;
	char cnrj;

};

int main(int args[], int* argv[], int* envp[])
{

	//Declaring a single struct variable of type struct MyData 'Locally'
	struct MyData data_one = { 45,4.9f,1.23765,'A' };
	struct MyData data_two = {'P',5.2f,13.199523,68};
	struct MyData data_three = { 36,'G' };
	struct MyData data_four = { 79 };

printf("\n\n");


	

	//Displaying Data Members of 'struct MyData data_one
	printf("Data Members of 'Struct MyData' data_one :\n");
	printf("inrj=%d\n", data_one.inrj);
	printf("fnrj=%f\n", data_one.fnrj);
	printf("dnrj=%lf\n", data_one.dnrj);
	printf("cnrj=%c\n", data_one.cnrj);

	printf("\n\n");

	printf("Data Members of 'Struct MyData' data_two :\n");
	printf("inrj=%d\n", data_two.inrj);
	printf("fnrj=%f\n", data_two.fnrj);
	printf("dnrj=%lf\n", data_two.dnrj);
	printf("cnrj=%c\n", data_two.cnrj);

	printf("\n\n");

	printf("Data Members of 'Struct MyData' data_three :\n");
	printf("inrj=%d\n", data_three.inrj);
	printf("fnrj=%f\n", data_three.fnrj);
	printf("dnrj=%lf\n", data_three.dnrj);
	printf("cnrj=%c\n", data_three.cnrj);

	printf("\n\n");

	printf("Data Members of 'Struct MyData' data_four :\n");
	printf("inrj=%d\n", data_four.inrj);
	printf("fnrj=%f\n", data_four.fnrj);
	printf("dnrj=%lf\n", data_four.dnrj);
	printf("cnrj=%c\n", data_four.cnrj);

	printf("\n\n");

		return(0);

}//end of main function 