#include<stdio.h>

int main(int args[], int* argv[], int* envp[])
{

//variable declarations

	int inrjArray[] = { 12,24,36,48,60,72,84,96,108,120 };
	float fnrjArry[] = { 9.8f,8.7f,7.6f,8.9f,6.7f };
	double dnrjArray[] = { 2.333333,4.555555,5.666666 };

	char cnrjArray[] = { 'A','S','T','R','O','M','E','D','I','C','O','M','P','\0'};

	//code
	printf("\n\n");
	//*************Integer array and their elements ***********************
	printf("Integer Array Elements and their addresses are as follows:\n\n");

	printf("inrjArray[0]=%d \t At Address :%p\n", *(inrjArray + 0), (inrjArray + 0));
	printf("inrjArray[1]=%d \t At Address :%p\n", *(inrjArray + 1), (inrjArray + 1));
	printf("inrjArray[2]=%d \t At Address :%p\n", *(inrjArray + 2), (inrjArray + 2));
	printf("inrjArray[3]=%d \t At Address :%p\n", *(inrjArray + 3), (inrjArray + 3));
	printf("inrjArray[4]=%d \t At Address :%p\n", *(inrjArray + 4), (inrjArray + 4));
	printf("inrjArray[5]=%d \t At Address :%p\n", *(inrjArray + 5), (inrjArray + 5));
	printf("inrjArray[6]=%d \t At Address :%p\n", *(inrjArray + 6), (inrjArray + 6));
	printf("inrjArray[7]=%d \t At Address :%p\n", *(inrjArray + 7), (inrjArray + 7));
	printf("inrjArray[8]=%d \t At Address :%p\n", *(inrjArray + 8), (inrjArray + 8));
	printf("inrjArray[9]=%d \t At Address :%p\n", *(inrjArray + 9), (inrjArray + 9));




	//*************Float array and their elements ***********************
	printf("Float  Array Elements and their addresses are as follows:\n\n");

	printf("fnrjArry[0]=%f \t At Address :%p\n", *(fnrjArry + 0), (fnrjArry + 0));
	printf("fnrjArry[1]=%f \t At Address :%p\n", *(fnrjArry + 1), (fnrjArry + 1));
	printf("fnrjArry[2]=%f \t At Address :%p\n", *(fnrjArry + 2), (fnrjArry + 2));
	printf("fnrjArry[3]=%f \t At Address :%p\n", *(fnrjArry + 3), (fnrjArry + 3));
	printf("fnrjArry[4]=%f \t At Address :%p\n", *(fnrjArry + 4), (fnrjArry + 4));

	//*************Double  array and their elements ***********************
	printf("Double  Array Elements and their addresses are as follows:\n\n");

	printf("dnrjArray[0]=%lf \t At Address :%p\n", *(dnrjArray + 0), (dnrjArray + 0));
	printf("dnrjArray[1]=%lf \t At Address :%p\n", *(dnrjArray + 1), (dnrjArray + 1));
	printf("dnrjArray[2]=%lf \t At Address :%p\n", *(dnrjArray + 2), (dnrjArray + 2));
	printf("dnrjArray[3]=%lf \t At Address :%p\n", *(dnrjArray + 3), (dnrjArray + 3));

	//*************Character  array and their elements ***********************
	printf("Character  Array Elements and their addresses are as follows:\n\n");
	printf("cnrjArray[0]=%c \t At Address :%p\n", *(cnrjArray + 0), (cnrjArray + 0));
	printf("cnrjArray[1]=%c \t At Address :%p\n", *(cnrjArray + 1), (cnrjArray + 1));
	printf("cnrjArray[2]=%c \t At Address :%p\n", *(cnrjArray + 2), (cnrjArray + 2));
	printf("cnrjArray[3]=%c \t At Address :%p\n", *(cnrjArray + 3), (cnrjArray + 3));
	printf("cnrjArray[4]=%c \t At Address :%p\n", *(cnrjArray + 4), (cnrjArray + 4));
	printf("cnrjArray[5]=%c \t At Address :%p\n", *(cnrjArray + 5), (cnrjArray + 5));
	printf("cnrjArray[6]=%c \t At Address :%p\n", *(cnrjArray + 6), (cnrjArray + 6));
	printf("cnrjArray[7]=%c \t At Address :%p\n", *(cnrjArray + 7), (cnrjArray + 7));
    printf("cnrjArray[8]=%c \t At Address :%p\n", *(cnrjArray + 8), (cnrjArray + 8));
	printf("cnrjArray[9]=%c \t At Address :%p\n", *(cnrjArray + 9), (cnrjArray + 9));
	printf("cnrjArray[10]=%c \t At Address :%p\n", *(cnrjArray + 10), (cnrjArray + 10));
	printf("cnrjArray[11]=%c \t At Address :%p\n", *(cnrjArray + 11), (cnrjArray + 11));
	printf("cnrjArray[12]=%c \t At Address :%p\n", *(cnrjArray + 12), (cnrjArray + 12));
	printf("cnrjArray[13]=%c \t At Address :%p\n", *(cnrjArray + 13), (cnrjArray + 13));

	
	return(0);
}//end of main function 