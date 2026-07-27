#include<stdio.h>
int main(int args[], int* argv[], int* envp[])
{

    //variable declarations
    //In line innitialization

    int nrjiArray[5][3][2] = {
        {{9,18},{27,36},{45,54}},
        {{8,17},{26,35},{44,53}},
        {{7,16},{25,34},{43,52}},
        {{6,15},{24,33},{42,51}},
        {{5,14},{23,32},{41,50}}
    };

    int nrjiint_size;
    int nrjiArray_size;
    int nrjiArray_num_elements, nrjiArray_num_rows, nrjiArray_num_columns, nrjiArray__num_depth;
    int nrji, nrjj, nrjk;

    nrjiint_size = sizeof(int);
    nrjiArray_size = sizeof(nrjiArray);



    nrjiArray_num_rows = sizeof(nrjiArray) / sizeof(nrjiArray[0]);

    nrjiArray_num_columns = sizeof(nrjiArray[0]) / sizeof(nrjiArray[0][0]);

    nrjiArray__num_depth = sizeof(nrjiArray[0][0]) / nrjiint_size;

    nrjiArray_num_elements = nrjiArray_num_rows * nrjiArray_num_columns;


    printf("Size of Int in (3D) Integer Array is %d\n\n", nrjiint_size);
    printf("Size of Three Dimentional(3D) Integer Array is %d\n\n", nrjiArray_size);

    printf("Number of elements in Three Dimentional(3D) Integer Array is %d\n\n", nrjiArray_num_elements);

    printf("No of rows in (3D) Integer Array is %d\n\n", nrjiArray_num_rows);

    printf("No of columns in (3D) Integer Array is %d\n\n", nrjiArray_num_columns);
    printf("Depth of 3D Integer Array is %d\n\n", nrjiArray__num_depth);

    printf("\n\n");
    printf("Elements In the 3D Array:\n");

    for (nrji = 0; nrji < nrjiArray_num_rows; nrji++)
    {
        printf("***********Rowid:%d*******\n", nrji);
        for (nrjj = 0; nrjj < nrjiArray_num_columns; nrjj++)
        {

            printf("***********Columnid:%d********\n", nrjj);
            for (nrjk = 0; nrjk < nrjiArray__num_depth; nrjk++)
            {

                printf("nrjiArray[%d][%d][%d]=%d\n", nrji, nrjj,nrjk,nrjiArray[nrji][nrjj][nrjk]);
             }
            printf("\n");
        }
        printf("\n\n");
   }

    printf("\n\n\n");
}//end of main function

