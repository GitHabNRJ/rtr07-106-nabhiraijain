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
	struct MyData data;

	 //code
	//Assigning the data values to the Data Members of the struct 

	printf("\n\n");


	//User Input For Values of Members of struct MyData

	printf("Enter Integer value for variable:inrj of Data struct MyData:");
	scanf("%d",&data.inrj);

	printf("Enter Float value for variable:fnrj of Data struct MyData:");
	scanf("%f",&data.fnrj);

	printf("Enter Double value for variable:dnrj of Data struct MyData:");
    scanf("%lf",&data.dnrj);
	
	printf("Enter char value for variable:dnrj of Data struct MyData:");
	data.cnrj = getch();


	printf("\n\n");

	//Displaying Data Members of 'struct MyData
	printf("Data Members of 'Struct MyData' :\n");
	printf("inrj=%d\n", data.inrj);
	printf("fnrj=%f\n", data.fnrj);
	printf("dnrj=%lf\n", data.dnrj);
	printf("cnrj=%c\n", data.cnrj);

	printf("\n\n");


	return(0);

}//end of main function 