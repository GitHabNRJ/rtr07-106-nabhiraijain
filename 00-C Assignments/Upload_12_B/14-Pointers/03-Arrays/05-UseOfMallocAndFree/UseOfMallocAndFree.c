#include<stdio.h>
#include<stdlib.h>

int main(int args[], int* argv, int* envp[])
{

	int* ptr_iArray = NULL;

	unsigned int intArrayLength = 0;
	int i;

	printf("\n\n");
	printf("Enter the Number of Elements/Lenght of integer array:");
	scanf("%d", &intArrayLength);

	ptr_iArray =(int *)malloc(sizeof(int) * intArrayLength);

	if (ptr_iArray == NULL)
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR INTEGER ARRAY HAS FAILED EXITING NOW!!!");
		exit(0);
	}
	else
	{

		printf("\n\n");
		printf("MEMORY ALLOCATION FOR INTEGER ARRAY is SUCCESSED!!!");
		printf("MEMORY ADDRESSES FROM %p to %p has been allocated to the Integer array:", ptr_iArray, (ptr_iArray - 1));
		printf("\n\n");
	}
	printf("Enter %d elements into the Integer Array:\n", intArrayLength);
	for (i = 0; i < intArrayLength; i++)
	{
		scanf("%d", (ptr_iArray + i));
	}
	
	printf("\n\n");
	printf("The Integer array entered by you consisting of %d elements\n", intArrayLength);
	for (i = 0; i < intArrayLength; i++)
    {
		printf("ptr_iArray[%d]=%d \t\t at address &ptr_iArray[%d]=%p\n", i, ptr_iArray[i], i, (ptr_iArray + i));


	}
printf("\n\n");

	printf("Display the Elements using Pointer arithmetic:\n");

	for (i = 0; i < intArrayLength; i++)
	{
		printf("*(ptr_iArray+%d)=%d \t\t at address (ptr_iArray+%d)=%p\n", i, *(ptr_iArray+i), i, (ptr_iArray + i));


	}
	printf("\n\n");

	if (ptr_iArray)
	{
		free(ptr_iArray);
		ptr_iArray = NULL;

		printf("\n\n");
		printf("Memory allocated for the integer Array has been Freed:");

	}

	printf("\n\n");
	return(0);

}//end of main function