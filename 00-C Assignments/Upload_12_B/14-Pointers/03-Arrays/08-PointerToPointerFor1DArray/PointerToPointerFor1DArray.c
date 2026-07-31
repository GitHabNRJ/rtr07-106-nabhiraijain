#include<stdio.h>
#include<stdlib.h>

int main(int args[], int* argv[], int* envp[])
{
	void MyAlloc(int** ptr, unsigned int numberOfElements);
	
	int* pinrjArray = NULL;
	unsigned int num_elements;
	int i;

	//code
	printf("\n\n");
	printf("How many elements you want In integer array?\n\n");
	scanf("%u", &num_elements);

	printf("\n\n");
	MyAlloc(&pinrjArray, num_elements);

	printf("Enter %u elements to fill up your Integer array:\n\n",num_elements);
	for (i = 0; i < num_elements; i++)
	{
		scanf("%d", &pinrjArray[i]);
	}
	printf("\n\n");
	printf("The %u Elements Entered by You In the Inter array:\n\n",num_elements);
	for (i = 0; i < num_elements; i++)
	{
		printf("%u\n", pinrjArray[i]);
	}
	printf("\n\n");
	if (pinrjArray)
	{
		free(pinrjArray);
		pinrjArray = NULL;
		printf("Memory Allocated has Now been successfully Freed\n");

	}
	return(0);

}//end of main function

void MyAlloc(int** ptr, unsigned int numberOfElements)
{
	*ptr = (int*)malloc(numberOfElements * sizeof(int));
		if (*ptr == NULL)
		{

			printf("Could not create Memory exiting now!!");
			exit(0);
		}
	printf("MyAlloc() Has successuflly allocated %zu bytes for Integer Array!!!\n", (numberOfElements * sizeof(int)));
}















