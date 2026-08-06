#include<stdio.h>
#include<stdlib.h>

struct MyData
{
	int inrj;
	float fnrj;
	double dnrj;
};

int main(int args, int* argv[], int* envp[])
{
//variable declaration 

	int inrj_size;
	int fnrj_size;
	int dnrj_size;
	int struct_MyData_size;
	int pointer_to_struct_MyData_size;

	typedef struct MyData  MyDataptr;
  //  MyDataptr* pData;

	


	//code
	printf("\n\n");
	MyDataptr* pData=(MyDataptr *)malloc(sizeof(struct MyData));


	if (pData == NULL)
	{
		printf("Failed to Allocate Memory\n");
		exit(0);
	}
	else
	{
		printf("Memory allocated successfully\n\n");

	}

	//Assigning data valused to the data members of struct MyData

	pData->inrj = 10;
	pData->fnrj = 14.5f;
	pData->dnrj = 1.234567;

	printf("Data Members of 'struct' MyData:\n");
	printf("inrj=%d\n",pData->inrj);
	printf("inrf=%f\n",pData->fnrj);
	printf("inrd=%lf\n\n",pData->dnrj);

	//Calculating size (in bytes) of data Members of struct 

	inrj_size = sizeof(pData->inrj);
	fnrj_size = sizeof(pData->fnrj);
	dnrj_size = sizeof(pData->dnrj);

	printf("Data Size(In bytes) of 'struct' MyData:\n");
	printf("Sizeof inrj =%d\n",inrj_size);
	printf("Size of fnrf=%d\n",fnrj_size);
    printf("Size of dnrj=%d\n\n",dnrj_size);

	//Calculating & displaying size(in bytes) of entire struct 
	struct_MyData_size = sizeof(struct MyData);
	printf("Size of struct 'MyData'=%d\n", struct_MyData_size);

	pointer_to_struct_MyData_size = sizeof(MyDataptr);
	printf("Size of pointer to  struct 'MyData'=%d bytes\n", pointer_to_struct_MyData_size);

	if (pData)
	{
		free(pData);
		pData = NULL;
		printf("Memory allocated via Malloc is freed\n\n");
	}

//Calculating & displaying size (in bytes) of pointer to struct 

	return(0);


}//end of main function