#include<stdio.h>
int main(int args[], int* argv[], int* envp)
{

    //variable declarations 
    //In -line innitialization of 2-D Array
    int nrjiArray[5][3] = { {1,2,3},
                            {2,4,6},
                            {3,6,9},
                            {4,8,12},
                            {5,10,15}
    };

    int nrjint_size;
    int nrjiArray_size;
    int nrjiArray_num_elements, nrjiArray_num_rows, nrjiArray_num_columns;
    int i, j;
    //code

   

    nrjint_size = sizeof(int);
    nrjiArray_size = sizeof(nrjiArray);
    nrjiArray_num_elements = nrjiArray_size / nrjint_size;

    nrjiArray_num_rows = nrjiArray_size / sizeof(nrjiArray[0]);

    nrjiArray_num_columns = nrjiArray_size / (nrjiArray_num_rows * nrjint_size);

    printf("\n");

    printf("Size of Int in (2D) Integer Array is %d\n\n", nrjint_size);
    printf("Size of Two Dimentional(2D) Integer Array is %d\n\n", nrjiArray_size);

    printf("Number of elements in Two Dimentional(2D) Integer Array is %d\n\n", nrjiArray_num_elements);

    printf("No of rows in (2D) Integer Array is %d\n\n", nrjiArray_num_rows);

    printf("No of columns in (2D) Integer Array is %d\n\n", nrjiArray_num_columns);

    
   
    printf("Elements In the 2D Array using Nested Loops:\n");

    for (i = 0; i < nrjiArray_num_rows; i++)
    {
        printf("*****************Row%d************************\n", i);
        for (j = 0; j < nrjiArray_num_columns; j++)
        {
            printf("nrjiArray[i][j]=%d\t\t", nrjiArray[i][j]);

        }
        printf("\n\n");

    }
    printf("\n\n");

    printf("\n\n");


    // nrjiArray_num_rows=




}//end of main function