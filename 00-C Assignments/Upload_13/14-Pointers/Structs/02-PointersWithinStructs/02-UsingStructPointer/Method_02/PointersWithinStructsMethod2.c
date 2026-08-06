#include<stdio.h>
#include<stdlib.h>



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
	struct MyData* pdata = NULL;

	//code
	printf("\n\n");
	pdata = (struct MyData*)malloc(sizeof(struct MyData));


	if (pdata == NULL)
	{
		printf("Failed to Allocate Memory\n");
		exit(0);
	}
	else
	{
		printf("Memory allocated successfully\n\n");

	}

	//Assigning data valused to the data members of struct MyData



	pdata->i = 15;
	pdata->nrjptr_i = &(pdata->i);

	pdata->f = 11.56f;
	pdata->nrjptr_f = &(pdata->f);

	pdata->d = 30.15689;
	pdata->nrjptr_d = &(pdata->d);


	printf("\n\n");
	printf("i=%d\n", *(pdata->nrjptr_i));
	printf("Address of i=%p\n", (pdata->nrjptr_i));

	printf("f=%f\n", *(pdata->nrjptr_f));
	printf("Address of f=%p\n", (pdata->nrjptr_f));

	printf("d=%lf\n", (*pdata->nrjptr_d));
	printf("Address of d=%p\n\n", (pdata->nrjptr_d));

	if (pdata)
	{
		free(pdata);
		pdata = NULL;
		printf("Memory allocated via Malloc is freed\n\n");
	}

	//Calculating & displaying size (in bytes) of pointer to struct 

	return(0);


}//end of main function