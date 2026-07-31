#include<stdio.h>

int main(int args[], int* argv[], int* envp[])
{

	
	//variable declaration 
	int iArray_One[5];
	int iArray_Two [5][3];
	int iArray_Three [100][100][5];

	
	int num_rows_2D;
	int num_columns_2D;

	int num_rows_3D;
	int num_columns_3D;
	int depth_3D;

	//code

	/***********************1-D Array*****************/
	printf("\n\n");
	printf("Size of 1-D integer Array iArray_One=%zu\n", sizeof(iArray_One));
	printf("Number of elements in 1-D integer array iArray_One=%lld", sizeof(iArray_One) / sizeof(int));

	printf("\n\n");
	/***********************2-D Array*****************/
	printf("\n\n");
	printf("Size of 2-D integer Array inArray_Two=%zu\n", sizeof(iArray_Two));
	

	num_rows_2D = (sizeof(iArray_Two) / sizeof(iArray_Two[0]));

	printf("No of rows in 2-D Array:iArray_Two=%lu\n", num_rows_2D);

	num_columns_2D = (sizeof(iArray_Two[0]) / sizeof(iArray_Two[0][0]));

	printf("No of elements (columns) in each row in  2-D Array:iArray_Two=%d\n", num_columns_2D);

	printf("Number of elements in total in 2-D integer array iArray_Two=%d\n", (num_rows_2D* num_columns_2D));

	printf("\n\n");
	/***********************3-D Array*****************/
	printf("\n\n");
	printf("Size of 3-D integer Array iArray_Three=%zu\n", sizeof(iArray_Three));


	num_rows_3D = sizeof(iArray_Three) / sizeof(iArray_Three[0]);

	printf("No of rows in 3-D Array:iArray_Thre=%d\n", num_rows_3D);

	
	num_columns_3D = sizeof(iArray_Three[0]) / sizeof(iArray_Three[0][0]);

	printf("Number of elements (columns) in one row in 3-D integer array iArray_Three=%lu\n", num_columns_3D);

	depth_3D = (sizeof(iArray_Three[0][0]) / sizeof(iArray_Three[0][0][0]));
	printf("No of elements (depth) in each columnin each row in  3-D integer Array:inrjArray_Three=%lu\n", depth_3D);

	
	printf("Number of elements in total in  3-D integer array iArray_Three=%d\n", (num_rows_3D * num_columns_3D* depth_3D));

	printf("\n\n");

}//end of main function 