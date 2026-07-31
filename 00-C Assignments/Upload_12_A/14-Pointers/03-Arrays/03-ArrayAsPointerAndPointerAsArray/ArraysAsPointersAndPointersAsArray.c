#include<stdio.h>

int main(int args[], int* argv[], int* envp[])
{

	//variable declarations

	int inrjArray[] = { 10,20,30,40,50,60,70,80,90,100 };//Integer Array
	int* ptr_iArray = NULL;  //Integer Pointer
	//code
	printf("\n\n");
	//*************Using Array Name as an Pointer  i:e Value of ith element of inrjArry:*(inrjArray+i) and address of xth element of inrjArray:(inrjArray+i)
	printf("Using Array Name as an Pointer i:e Value of ith element of inrjArry:*(inrjArray+i) and address of xth element of inrjArray:9inrjArray+i):\n\n");

	printf("*(inrjArray+0)=%d \t \t At Address (inrjArray+0):%p\n", *(inrjArray+0), (inrjArray+0));
	printf("*(inrjArray+1)=%d \t \t At Address (inrjArray+1):%p\n", *(inrjArray+1), (inrjArray+1));
	printf("*(inrjArray+2)=%d \t \t At Address (inrjArray+2):%p\n", *(inrjArray+2), (inrjArray+2));
	printf("*(inrjArray+3)=%d \t \t At Address (inrjArray+3: %p\n", *(inrjArray+3),  (inrjArray+3));
	printf("*(inrjArray+4)=%d \t \t At Address (inrjArray+4):%p\n", *(inrjArray+4), (inrjArray+4));
	printf("*(inrjArray+5)=%d \t \t At Address (inrjArray+5):%p\n", *(inrjArray+5), (inrjArray+5));
	printf("*(inrjArray+6)=%d \t \t At Address (inrjArray+6):%p\n", *(inrjArray+6), (inrjArray+6));
	printf("*(inrjArray+7)=%d \t \t At Address (inrjArray+7):%p\n", *(inrjArray+7), (inrjArray+7));
	printf("*(inrjArray+8)=%d \t \t At Address (inrjArray+8):%p\n", *(inrjArray+8), (inrjArray+8));
	printf("*(inrjArray+9)=%d \t \t At Address (inrjArray+9):%p\n", *(inrjArray+9), (inrjArray+9));

	//********Assigning base array of integer array to integer pointer 
	ptr_iArray = inrjArray;

	//********Using Pointer as an array  Nmae i:e value of ith element of  inrjArry:ptr_iArray[i] 
	//and address of xth element of ptr_iArray:&inrjArray[i]*******************************//

	printf("Using Pointer as an array i:e value of ith element of  inrjArry:ptr_iArray[i] and address of xth element of ptr_iArray:&inrjArray[i]:\n\n");
	printf(" ptr_iArray[0]=%d\t\t At Address &ptr_iArray[0]:%p\n", ptr_iArray[0], &(ptr_iArray[0]));
	printf(" ptr_iArray[1]=%d\t\t At Address &ptr_iArray[1]:%p\n", ptr_iArray[1], &(ptr_iArray[1]));
	printf(" ptr_iArray[2]=%d\t\t At Address &ptr_iArray[2]:%p\n", ptr_iArray[2], &(ptr_iArray[2]));
	printf(" ptr_iArray[3]=%d\t\t At Address &ptr_iArray[3]:%p\n", ptr_iArray[3], &(ptr_iArray[3]));
	printf(" ptr_iArray[4]=%d\t\t At Address &ptr_iArray[4]:%p\n", ptr_iArray[4], &(ptr_iArray[4]));
	printf(" ptr_iArray[5]=%d\t\t At Address &ptr_iArray[5]:%p\n", ptr_iArray[5], &(ptr_iArray[5]));
	printf(" ptr_iArray[6]=%d\t\t At Address &ptr_iArray[6]:%p\n", ptr_iArray[6], &(ptr_iArray[6]));
	printf(" ptr_iArray[7]=%d\t\t At Address &ptr_iArray[7]:%p\n", ptr_iArray[7], &(ptr_iArray[7]));
	printf(" ptr_iArray[8]=%d\t\t At Address &ptr_iArray[8]:%p\n", ptr_iArray[8], &(ptr_iArray[8]));
	printf(" ptr_iArray[9]=%d\t\t At Address &ptr_iArray[9]:%p\n", ptr_iArray[9], &(ptr_iArray[9]));


	return(0);
}//end of main function c