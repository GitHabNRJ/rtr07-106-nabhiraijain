#include<stdio.h>
int main(int args[], int* argv[], int* envp[])
{

//variable declaration
    int inrjArray[3][5];
	int inrjint_size;
	int inrjArray_size;
	int inrjArray_num_elements, inrjArray_num_rows, inrjArray_num_columns;

	int i, j;
	
    inrjint_size = sizeof(int);
    inrjArray_size = sizeof(inrjArray);

    inrjArray_num_elements = inrjArray_size / inrjint_size;

    inrjArray_num_rows = inrjArray_size / sizeof(inrjArray[0]);

    inrjArray_num_columns = sizeof(inrjArray[0]) / inrjint_size;



    printf("\n");
    
    printf("Size of  (2D) int Array is %d\n\n", inrjint_size);
   printf("Size of Two Dimentional(2D) int Array is %d\n\n", inrjArray_size);

    printf("Number of elements in Two Dimentional(2D) int is %d\n\n", inrjArray_num_elements);

    printf("No of rows in (2D) int array is %d\n\n", inrjArray_num_rows);

    printf("No of columns in (2D) int array is %d\n\n", inrjArray_num_columns);


    //*****PIECE-MEAL ASSIGNMENT******
    //******ROW1************
    inrjArray[0][0] = 11;
    inrjArray[0][1] = 22;
    inrjArray[0][2] = 33;
    inrjArray[0][3] = 44;
    inrjArray[0][4] = 55;
    //******ROW2************
    inrjArray[1][0] = 61;
    inrjArray[1][1] = 71;
    inrjArray[1][2] = 81;
    inrjArray[1][3] = 91;
    inrjArray[1][4] = 101;
    //******ROW3************
    inrjArray[2][0] = 15;
    inrjArray[2][1] = 25;
    inrjArray[2][2] = 35;
    inrjArray[2][3] = 45;
    inrjArray[2][4] = 55;
    
    /*****Dispaly*******/

    for (i = 0; i < inrjArray_num_rows; i++)
    {

        printf(" %d row Elements are :\n", i);
       

        for (j = 0; j < inrjArray_num_columns; j++)
        {
            //printf("%c", nrjstrArray[i][j]);
            printf("inrjArray[%d][%d]=%d\n", i, j, inrjArray[i][j]);

        }

        printf("\n\n");
    }

    return(0);


}//end of main function