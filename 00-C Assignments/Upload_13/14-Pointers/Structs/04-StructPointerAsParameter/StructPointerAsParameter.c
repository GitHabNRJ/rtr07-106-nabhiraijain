#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

//DEFINING STRUCT

struct MyData
{
	int i;
	float f;
	double d;

};

int main(int args[], int* argv[], int* envp[])
{

//function prototypes
	void ChangeValues(struct MyData*);

//variable declarations
	struct MyData* pData = NULL;

	//code
	printf("\n\n");

	pData = (struct MyData*)malloc(sizeof(struct MyData));

	if (pData == NULL)
	{
		printf("Failed to Allocate Memory for struct MyData\n\n");
		exit(0);
	}
	else
	{
		printf("Memory allocated successfully for struct MyData\n\n");

	}

	pData->i = 10;
	pData->f = 89.45f;
	pData->f = 1.3456;

	printf("Displaying values of struct MyData:\n");
	printf("i=%d\n", pData->i);
	printf("f=%f\n", pData->f);
	printf("d=%lf\n", pData->d);

	ChangeValues(pData);

	printf("\n\n");

	printf("Displaying values of struct MyData after enter in Method ChangeValues:\n");
	printf("i=%d\n", pData->i);
	printf("f=%f\n", pData->f);
	printf("d=%lf\n", pData->d);

	if (pData)
	{
		free(pData);
		pData = NULL;
		printf("Memory allocated via Malloc is freed\n\n");
	}


	return(0);


}//end of main function

void ChangeValues(struct MyData *pData1)
{

	pData1->i = 89;
	pData1->f = 67.89f;
	pData1->d = 6.78199;

}