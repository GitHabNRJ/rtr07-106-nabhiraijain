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

    //code
    printf("\n\n");

    nrjint_size = sizeof(int);
    nrjiArray_size = sizeof(nrjiArray);
    nrjiArray_num_elements = nrjiArray_size / nrjint_size;

    nrjiArray_num_rows = nrjiArray_size / sizeof(nrjiArray[0]);

    nrjiArray_num_columns= nrjiArray_size/(nrjiArray_num_rows* nrjint_size);


    printf("Size of Int in (2D) Integer Array is %d\n\n", nrjint_size);
    printf("Size of Two Dimentional(2D) Integer Array is %d\n\n", nrjiArray_size);
    
    printf("Number of elements in Two Dimentional(2D) Integer Array is %d\n\n", nrjiArray_num_elements);

    printf("No of rows in (2D) Integer Array is %d\n\n",nrjiArray_num_rows);

    printf("No of columns in (2D) Integer Array is %d\n\n", nrjiArray_num_columns);

    printf("\n\n");
    printf("Elements In the 2D Array:\n");

    printf("*****************Row1************************\n");
    printf("nrjiArray[0][0]=%d\t\t", nrjiArray[0][0]);
    printf("nrjiArray[0][1]=%d\t\t", nrjiArray[0][1]);
    printf("nrjiArray[0][2]=%d\t\t", nrjiArray[0][2]);

    printf("\n\n");

    printf("*****************Row2************************\n");
    printf("nrjiArray[1][0]=%d\t\t", nrjiArray[1][0]);
    printf("nrjiArray[1][1]=%d\t\t", nrjiArray[1][1]);
    printf("nrjiArray[1][2]=%d\t\t", nrjiArray[1][2]);

    printf("\n\n");
    printf("*****************Row3************************\n");
    printf("nrjiArray[2][0]=%d\t\t", nrjiArray[2][0]);
    printf("nrjiArray[2][1]=%d\t\t", nrjiArray[2][1]);
    printf("nrjiArray[2][2]=%d\t\t", nrjiArray[2][2]);

    printf("\n\n");
    printf("*****************Row4************************\n");
    printf("nrjiArray[3][0]=%d\t\t", nrjiArray[3][0]);
    printf("nrjiArray[3][1]=%d\t\t", nrjiArray[3][1]);
    printf("nrjiArray[3][2]=%d\t\t", nrjiArray[3][2]);

    printf("\n\n");
    printf("*****************Row5************************\n");
    printf("nrjiArray[4][0]=%d\t\t", nrjiArray[4][0]);
    printf("nrjiArray[4][1]=%d\t\t", nrjiArray[4][1]);
    printf("nrjiArray[4][2]=%d\t\t", nrjiArray[4][2]);

    printf("\n\n");


   // nrjiArray_num_rows=




}//end of main function