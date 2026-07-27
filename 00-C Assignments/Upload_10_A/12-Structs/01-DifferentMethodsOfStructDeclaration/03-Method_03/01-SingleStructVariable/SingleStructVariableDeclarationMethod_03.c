#include<stdio.h>


int main(int args[], int* argv[], int* envp[])
{

	//DEFINING STRUCT 
	//Declaring a single struct variable of type struct MyData 'Locally'
	struct MyData
	{
		int inrj;
		float fnrj;
		double dnrj;
		char cnrj;

	}data;

	//variable declarations 
	int inrj_size;
	int fnrj_size;
	int dnrj_size;
	int struct_MyData_size;

	//code
	//Assigning the data values to the Data Members of the struct 

	printf("\n\n");

	data.inrj = 40;
	data.fnrj = 12.45f;
	data.dnrj = 2.2995;

	//Displaying Data Members of 'struct MyData
	printf("Data Members of 'Struct MyData' :\n");
	printf("inrj=%d\n", data.inrj);
	printf("fnrj=%f\n", data.fnrj);
	printf("dnrj=%lf\n", data.dnrj);

	printf("\n\n");
	//Calculating Sizes (In Bytes ) of the Data Members


	inrj_size = sizeof(data.inrj);
	fnrj_size = sizeof(data.fnrj);
	dnrj_size = sizeof(data.dnrj);
	struct_MyData_size = sizeof(data);

	//"Displaying sizes in bytes of the Data Members of the Struct :\n"
	printf(" SIZES (in bytes) of Data Members of Struct MyData are: \n");
	printf("Size of 'inrj'=%d bytes\n", inrj_size);
	printf("Size of 'fnrj'=%d bytes\n", fnrj_size);
	printf("Size of 'dnrj'=%d bytes\n", dnrj_size);
	printf("Size of 'Struct data'=%d bytes\n", struct_MyData_size);

	printf("\n\n");

	return(0);

}//end of main function 