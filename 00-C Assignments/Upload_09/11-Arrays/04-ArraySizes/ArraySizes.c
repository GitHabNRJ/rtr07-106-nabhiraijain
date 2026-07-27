#include<stdio.h>

int main(int args[], int* argv[], int* envp[])
{

	
	//variable declaration 
	int inrjArray_One[5];
	int inrjArray_Two [5][3];
	int inrjArray_Three [100][100][5];

	int nrjiint_size;

	int num_nrjrows_2D;
	int num_nrjcolumns_2D;

	int num_nrjrows_3D;
	int num_nrjcolumns_3D;
	int depth_3D;

	//code

	/***********************1-D Array*****************/
	printf("\n\n");
	printf("Size of 1-D integer Array inrjArray_One=%zu\n", sizeof(inrjArray_One));
	printf("Number of elements in 1-D integer array inrjArray_One=%lld", sizeof(inrjArray_One) / sizeof(int));

	printf("\n\n");
	/***********************2-D Array*****************/
	printf("\n\n");
	printf("Size of 2-D integer Array inrjArray_Two=%zu\n", sizeof(inrjArray_Two));
	

	num_nrjrows_2D = sizeof(inrjArray_Two) / sizeof(inrjArray_Two[0]);

	printf("No of rows in 2-D Array:inrjArray_Two=%d\n", num_nrjrows_2D);

	num_nrjcolumns_2D = sizeof(inrjArray_Two[0]) / sizeof(int);

	printf("No of columns in each row in  2-D Array:inrjArray_Two=%d\n", num_nrjcolumns_2D);

	printf("Number of elements in 2-D integer array inrjArray_Two=%d\n", (num_nrjrows_2D* num_nrjcolumns_2D));

	printf("\n\n");
	/***********************3-D Array*****************/
	printf("\n\n");
	printf("Size of 3-D integer Array inrjArray_Two=%zu\n", sizeof(inrjArray_Three));


	num_nrjrows_3D = sizeof(inrjArray_Three) / sizeof(inrjArray_Three[0]);

	printf("No of rows in 3-D Array:inrjArray_Two=%d\n", num_nrjrows_3D);

	
	num_nrjcolumns_3D = sizeof(inrjArray_Three[0]) / sizeof(inrjArray_Three[0][0]);

	printf("No of columns in each row in  3-D Array:inrjArray_Two=%d\n", num_nrjcolumns_3D);

	nrjiint_size = sizeof(int);
	depth_3D = sizeof(inrjArray_Three[0][0]) / nrjiint_size;

	printf("Number of elements in 3-D integer array inrjArray_Two=%d\n", (num_nrjrows_2D * num_nrjcolumns_2D* depth_3D));

	printf("\n\n");

}//end of main function 