#include<stdio.h>
int main(int argc, char* argv[], char* envp[])
{

//variable declarations
	int nrjiArray[] = { 9,30,6,12,98,95,20,23,2,45 };
	int nrjint_size;
	int nrjiArray_size;
	int nrjiArray_num_elements;

	float nrjfArray[] = { 1.2f,2.3f,3.4f,4.5f,5.6f,6.7f,7.8f,8.9f };
	int nrjfloat_size;
	int nrjfArray_size;
	int nrjfArray_num_elements;

	char nrjcArray[] = {'A','S','T','R','O','M','E','D','I','C','O','M','P'};
	int nrjchar_size;
	int nrjcArray_size;
	int nrjcArray_num_elements;

	//code

	//*****nrjiArray[]************
	printf("\n\n");
	printf("In-line Initialization And Piece-meal Display of elements of Array nrjiArry[]:\n");
	printf("iArray[0] (1st Element)=%d\n", nrjiArray[0]);
	printf("iArray[1] (2nd Element)=%d\n", nrjiArray[1]);
	printf("iArray[2] (3rd Element)=%d\n", nrjiArray[2]);
	printf("iArray[3] (4th Element)=%d\n", nrjiArray[3]);
	printf("iArray[4] (5th Element)=%d\n", nrjiArray[4]);
	printf("iArray[5] (6th Element)=%d\n", nrjiArray[5]);
	printf("iArray[6] (7th Element)=%d\n", nrjiArray[6]);
	printf("iArray[7] (8th Element)=%d\n", nrjiArray[7]);
	printf("iArray[8] (9th Element)=%d\n", nrjiArray[8]);
	printf("iArray[9] (10th Element)=%d\n", nrjiArray[9]);

	nrjint_size = sizeof(int);
	nrjiArray_size = sizeof(nrjiArray);
	nrjiArray_num_elements = nrjiArray_size / nrjint_size;

	printf("\n\n");

	printf("Size of Data type 'int'                            =%d bytes\n", nrjint_size);
	printf("Size of Array 'nrjiArray[] (%d Elements * %d Bytes) =%d bytes\n", nrjiArray_num_elements, nrjint_size, nrjiArray_size);
	printf("Number of Elements In 'int' Array 'nrjiArray'       =%d Elements\n",nrjiArray_num_elements);
	

	//*********fArray*******************
	printf("\n\n");
	printf("In-line Initialization And Piece-meal Display of elements of Array nrjfArray[]:\n");
	printf("nrjfArray[0] (1st Element)=%f\n", nrjfArray[0]);
	printf("nrjfArray[1] (2nd Element)=%f\n", nrjfArray[1]);
	printf("nrjfArray[2] (3rd Element)=%f\n", nrjfArray[2]);
	printf("nrjfArray[3] (4th Element)=%f\n", nrjfArray[3]);
	printf("nrjfArray[4] (5th Element)=%f\n", nrjfArray[4]);
	printf("nrjfArray[5] (6th Element)=%f\n", nrjfArray[5]);
	printf("nrjfArray[6] (7th Element)=%f\n", nrjfArray[6]);
	printf("nrjfArray[7] (8th Element)=%f\n", nrjfArray[7]);
	

	nrjfloat_size = sizeof(float);
	nrjfArray_size = sizeof(nrjfArray);
	nrjfArray_num_elements = nrjfArray_size / nrjfloat_size;

	printf("\n\n");

	printf("Size of Data type 'float'                            =%d bytes\n",nrjfloat_size);
	printf("Size of Array 'nrjfArray[] (%d Elements * %d Bytes) =%d bytes\n", nrjfArray_num_elements, nrjfloat_size,nrjfArray_size);
	printf("Number of Elements In 'float' Array 'nrjfArray'       =%d Elements\n", nrjfArray_num_elements);

	//***************cArray******************************
	printf("\n\n");
	printf("In-line Initialization And Piece-meal Display of elements of Array nrjcArray[]:\n");
	printf("nrjcArray[0] (1st Element)=%c\n", nrjcArray[0]);
	printf("nrjcArray[1] (2nd Element)=%c\n", nrjcArray[1]);
	printf("nrjcArray[2] (3rd Element)=%c\n", nrjcArray[2]);
	printf("nrjcArray[3] (4th Element)=%c\n", nrjcArray[3]);
	printf("nrjcArray[4] (5th Element)=%c\n", nrjcArray[4]);
	printf("nrjcArray[5] (6th Element)=%c\n", nrjcArray[5]);
	printf("nrjcArray[6] (7th Element)=%c\n", nrjcArray[6]);
	printf("nrjcArray[7] (8th Element)=%c\n", nrjcArray[7]);
	printf("nrjcArray[8] (9th Element)=%c\n", nrjcArray[8]);
	printf("nrjcArray[9] (10th Element)=%c\n", nrjcArray[9]);
	printf("nrjcArray[10] (11th Element)=%c\n", nrjcArray[10]);
	printf("nrjcArray[11] (12th Element)=%c\n", nrjcArray[11]);
	printf("nrjcArray[12] (13th Element)=%c\n", nrjcArray[12]);


	nrjchar_size = sizeof(char);
	nrjcArray_size =sizeof(nrjcArray);
	nrjcArray_num_elements = nrjcArray_size / nrjchar_size;

	printf("\n\n");

	printf("Size of Data type 'char'                            =%d bytes\n",nrjchar_size);
	printf("Size of Array 'nrjcArray[] (%d Elements * %d Bytes) =%d bytes\n", nrjcArray_num_elements, nrjchar_size, nrjcArray_size);
	printf("Number of Elements In 'char' Array 'nrjcArray'       =%d Elements\n", nrjcArray_num_elements);

	return(0);

}