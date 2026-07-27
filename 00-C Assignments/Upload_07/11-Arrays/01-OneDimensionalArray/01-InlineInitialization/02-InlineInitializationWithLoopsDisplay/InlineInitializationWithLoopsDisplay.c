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

	char nrjcArray[] = { 'A','S','T','R','O','M','E','D','I','C','O','M','P' };
	int nrjchar_size;
	int nrjcArray_size;
	int nrjcArray_num_elements;

	
	int nrj_i;
	//code

	//*****nrjiArray[]************
	printf("\n\n");
	printf("In-line Initialization And loop(for) Display of elements of Array nrjiArry[]:\n");
	
	nrjint_size = sizeof(int);
	nrjiArray_size = sizeof(nrjiArray);
	nrjiArray_num_elements = nrjiArray_size / nrjint_size;
	
	for (int nrj_i=0; nrj_i <nrjiArray_num_elements; nrj_i++)
	{
     printf("iArray[%d] (Element %d) =%d\n", nrj_i, (nrj_i + 1), nrjiArray[nrj_i]);
     }

	printf("\n\n");

	printf("Size of Data type 'int'                            =%d bytes\n", nrjint_size);
	printf("Size of Array 'nrjiArray[] (%d Elements * %d Bytes) =%d bytes\n", nrjiArray_num_elements, nrjint_size, nrjiArray_size);
	printf("Number of Elements In 'int' Array 'nrjiArray'       =%d Elements\n", nrjiArray_num_elements);


	//*********fArray*******************
	printf("\n\n");
	printf("In-line Initialization And loop(for) Display of elements of Array nrjfArray[]:\n");
	
    nrjfloat_size = sizeof(float);
	nrjfArray_size = sizeof(nrjfArray);
	nrjfArray_num_elements = nrjfArray_size / nrjfloat_size;

	for (int nrj_i = 0; nrj_i < nrjfArray_num_elements; nrj_i++)
	{
     printf("iArray[%d] (Element %d) =%f\n", nrj_i, (nrj_i + 1), nrjfArray[nrj_i]);
    }


	printf("\n\n");
    printf("Size of Data type 'float'                            =%d bytes\n", nrjfloat_size);
	printf("Size of Array 'nrjfArray[]' (%d Elements * %d Bytes) =%d bytes\n", nrjfArray_num_elements, nrjfloat_size, nrjfArray_size);
	printf("Number of Elements In 'float' Array 'nrjfArray'       =%d Elements\n", nrjfArray_num_elements);

	//***************cArray******************************
	printf("\n\n");
	
	nrjchar_size = sizeof(char);
	nrjcArray_size = sizeof(nrjcArray);
	nrjcArray_num_elements = nrjcArray_size / nrjchar_size;

	printf("In-line Initialization And loop(for) Display of elements of Array nrjcArray[]:\n");

      for (int nrj_i = 0; nrj_i < nrjcArray_num_elements; nrj_i++)
	{
      printf("iArray[%d] (Element %d) =%c\n", nrj_i, (nrj_i + 1), nrjcArray[nrj_i]);
    }


	printf("\n\n");

	printf("Size of Data type 'char'                            =%d bytes\n", nrjchar_size);
	printf("Size of Array 'nrjcArray[]' (%d Elements * %d Bytes) =%d bytes\n", nrjcArray_num_elements, nrjchar_size, nrjcArray_size);
	printf("Number of Elements In 'char' Array 'nrjcArray'       =%d Elements\n", nrjcArray_num_elements);

	return(0);

}