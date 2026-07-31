#include<stdio.h>
#include<stdlib.h>

int main(int args[], int* argv, int* envp[])
{

	int* ptr_iArray = NULL;
	unsigned int intArrayLength = 0;

	float* ptr_fArray = NULL;
	unsigned int floatArrayLength = 0;

	char* ptr_cArray = NULL;
	unsigned int charArrayLength = 0;

	double* ptr_dArray = NULL;
	unsigned int doubleArrayLength = 0;



	int i;

	printf("\n\n");
	printf("Enter the Number of Elements/Lenght of integer array:");
	scanf("%u", &intArrayLength);
ptr_iArray = (int*)malloc(sizeof(int) * intArrayLength);
	

	//*****************Memory allocation PASS/FAIL CHeck *******************
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

	

	//*****************code for Int Array*******************

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
		printf("*(ptr_iArray+%d)=%d \t\t at address (ptr_iArray+%d)=%p\n", i, *(ptr_iArray + i), i, (ptr_iArray + i));


	}
	printf("\n\n");


	//*****************code for Float Array*******************
	printf("Enter the Number of Elements/Lenght of Float array:");
	scanf("%u", &floatArrayLength);
	ptr_fArray = (float*)malloc(sizeof(float) * floatArrayLength);

	//*****************Memory allocation PASS/FAIL CHeck *******************
	if (ptr_fArray == NULL)
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR FLOAT ARRAY HAS FAILED EXITING NOW!!!");
		exit(0);
	}
	else
	{

		printf("\n\n");
		printf("MEMORY ALLOCATION FOR FLOAT ARRAY is SUCCESSED!!!");
		printf("MEMORY ADDRESSES FROM %p to %p has been allocated to the FLOAT array:", ptr_fArray, (ptr_fArray - 1));
		printf("\n\n");
	}

	printf("Enter %d elements into the Float Array:\n", floatArrayLength);
	for (i = 0; i < floatArrayLength; i++)
	{
		scanf("%f", (ptr_fArray + i));
	}

	printf("\n\n");
	printf("The Float array entered by you consisting of %d elements\n", floatArrayLength);
	for (i = 0; i < floatArrayLength; i++)
	{
		printf("ptr_fArray[%d]=%f \t\t at address &ptr_iArray[%d]=%p\n", i, *(ptr_fArray +i), i, (ptr_fArray + i));


	}
	printf("\n\n");

	printf("Display the Elements of Float array using Pointer arithmetic:\n");

	for (i = 0; i < floatArrayLength; i++)
	{
		printf("*(ptr_fArray+%d)=%f \t\t at address (ptr_fArray+%d)=%p\n", i, *(ptr_fArray + i), i, (ptr_fArray + i));


	}
	printf("\n\n");


	//*****************code for Char Array*******************
	printf("Enter the Number of Elements/Lenght of Char array:");
	scanf("%u", &charArrayLength);
	ptr_cArray = (char*)malloc(sizeof(char) * charArrayLength);
	//*****************Memory allocation PASS/FAIL CHeck *******************
	if (ptr_iArray == NULL)
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR CHAR ARRAY HAS FAILED EXITING NOW!!!");
		exit(0);
	}
	else
	{

		printf("\n\n");
		printf("MEMORY ALLOCATION FOR CHAR ARRAY is SUCCESSED!!!");
		printf("MEMORY ADDRESSES FROM %p to %p has been allocated to the Integer array:", ptr_cArray, (ptr_cArray - 1));
		printf("\n\n");
	}

	printf("Enter %d elements into the Char Array:\n", charArrayLength);
	for (i = 0; i < charArrayLength; i++)
	{
		(ptr_cArray[i]) = getch();
		
		printf("%c", ptr_cArray[i]);
		printf("\n");

	}

	printf("\n\n");
	printf("The Char array entered by you consisting of %d elements\n", charArrayLength);
	for (i = 0; i < charArrayLength; i++)
	{
		printf("ptr_cArray[%d]=%c \t\t at address &ptr_cArray[%d]=%p\n", i, ptr_cArray[i], i, (ptr_cArray + i));


	}
	printf("\n\n");

	printf("Display the Elements of Char Array  using Pointer arithmetic:\n");

	for (i = 0; i < intArrayLength; i++)
	{
		printf("*(ptr_cArray+%d)=%c \t\t at address (ptr_cArray+%d)=%p\n", i, *(ptr_cArray + i), i, (ptr_cArray + i));


	}
	printf("\n\n");


	//*****************code for Double Array*******************
	printf("Enter the Number of Elements/Lenght of Double array:");
	scanf("%u", &doubleArrayLength);
	ptr_dArray = (double*)malloc(sizeof(double) * doubleArrayLength);
	//*****************Memory allocation PASS/FAIL CHeck *******************
	if (ptr_iArray == NULL)
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR Double ARRAY HAS FAILED EXITING NOW!!!");
		exit(0);
	}
	else
	{

		printf("\n\n");
		printf("MEMORY ALLOCATION FOR Double ARRAY is SUCCESSED!!!");
		printf("MEMORY ADDRESSES FROM %p to %p has been allocated to the Integer array:", ptr_dArray, (ptr_dArray - 1));
		printf("\n\n");
	}

	printf("Enter %d elements into the Double Array:\n", doubleArrayLength);
	for (i = 0; i < doubleArrayLength; i++)
	{
		scanf("%lf", (ptr_dArray + i));
	}

	printf("\n\n");
	printf("The Double array entered by you consisting of %d elements\n", doubleArrayLength);
	for (i = 0; i < doubleArrayLength; i++)
	{
		printf("ptr_dArray[%d]=%lf \t\t at address &ptr_dArray[%d]=%p\n", i, ptr_dArray[i], i, (ptr_dArray + i));


	}
	printf("\n\n");

	printf("Display the Double Elements using Pointer arithmetic:\n");

	for (i = 0; i < doubleArrayLength; i++)
	{
		printf("*(ptr_dArray+%d)=%lf \t\t at address (ptr_iArray+%d)=%p\n", i, *(ptr_dArray + i), i, (ptr_dArray + i));


	}
	printf("\n\n");

	//************************Code to check Pointer is free to pointing to Dynamic Memory**************************************
	if (ptr_iArray)
	{
		free(ptr_iArray);
		ptr_iArray = NULL;

		printf("\n\n");
		printf("Memory allocated for the integer Array has been Freed:");

	}
	if (ptr_fArray)
	{
		free(ptr_fArray);
		ptr_fArray = NULL;

		printf("\n\n");
		printf("Memory allocated for the Float Array has been Freed:");

	}
	if (ptr_cArray)
	{
		free(ptr_cArray);
		ptr_cArray = NULL;

		printf("\n\n");
		printf("Memory allocated for the char Array has been Freed:");

	}
	if (ptr_dArray)
	{
		free(ptr_dArray);
		ptr_dArray = NULL;

		printf("\n\n");
		printf("Memory allocated for the double Array has been Freed:");

	}

	printf("\n\n");
	return(0);

}//end of main function