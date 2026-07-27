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
	int nrjiArray_num_elements, nrjiArray_num_rows, nrjiArray_num_columns,nrjiArray__num_depth;

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

    printf("*****************Row0************************\n");
    printf("*****************Column1************************\n");
    printf("nrjiArray[0][0][0]=%d\t\t", nrjiArray[0][0][0]);
    printf("nrjiArray[0][0][1]=%d\t\t", nrjiArray[0][0][1]);
    
    printf("\n");

    printf("*****************Row0************************\n");
    printf("*****************Column2************************\n");
    printf("nrjiArray[0][1][0]=%d\t\t", nrjiArray[0][1][0]);
    printf("nrjiArray[0][1][1]=%d\t\t", nrjiArray[0][1][1]);

    printf("\n");
    printf("*****************Row0************************\n");
    printf("*****************Column3************************\n");
    printf("nrjiArray[0][2][0]=%d\t\t", nrjiArray[0][2][0]);
    printf("nrjiArray[0][2][1]=%d\t\t", nrjiArray[0][2][1]);

   

    printf("\n\n\n");
    printf("*****************Row1************************\n");
    printf("*****************Column0************************\n");
    printf("nrjiArray[1][0][0]=%d\t\t", nrjiArray[1][0][0]);
    printf("nrjiArray[1][0][1]=%d\t\t", nrjiArray[1][0][1]);

    printf("\n");

    printf("*****************Row1************************\n");
    printf("*****************Column1************************\n");
    printf("nrjiArray[1][1][0]=%d\t\t", nrjiArray[1][1][0]);
    printf("nrjiArray[1][1][1]=%d\t\t", nrjiArray[1][1][1]);

    printf("\n");
    printf("*****************Row1************************\n");
    printf("*****************Column2************************\n");
    printf("nrjiArray[1][2][0]=%d\t\t", nrjiArray[1][2][0]);
    printf("nrjiArray[1][2][1]=%d\t\t", nrjiArray[1][2][1]);


    printf("\n\n\n");

    printf("*****************Row2************************\n");
    printf("*****************Column0************************\n");
    printf("nrjiArray[2][0][0]=%d\t\t", nrjiArray[2][0][0]);
    printf("nrjiArray[2][0][1]=%d\t\t", nrjiArray[2][0][1]);

    printf("\n");

    printf("*****************Row2************************\n");
    printf("*****************Column1************************\n");
    printf("nrjiArray[2][1][0]=%d\t\t", nrjiArray[0][1][0]);
    printf("nrjiArray[2][1][1]=%d\t\t", nrjiArray[0][1][1]);

    printf("\n");
    printf("*****************Row2************************\n");
    printf("*****************Column2************************\n");
    printf("nrjiArray[2][2][0]=%d\t\t", nrjiArray[0][2][0]);
    printf("nrjiArray[2][2][1]=%d\t\t", nrjiArray[0][2][1]);

    printf("\n\n\n");

    printf("*****************Row3************************\n");
    printf("*****************Column0************************\n");
    printf("nrjiArray[3][0][0]=%d\t\t", nrjiArray[3][0][0]);
    printf("nrjiArray[3][0][1]=%d\t\t", nrjiArray[3][0][1]);

    printf("\n");

    printf("*****************Row3************************\n");
    printf("*****************Column1************************\n");
    printf("nrjiArray[3][1][0]=%d\t\t", nrjiArray[3][1][0]);
    printf("nrjiArray[3][1][1]=%d\t\t", nrjiArray[3][1][1]);

    printf("\n");
    printf("*****************Row3************************\n");
    printf("*****************Column2************************\n");
    printf("nrjiArray[3][2][0]=%d\t\t", nrjiArray[3][2][0]);
    printf("nrjiArray[3][2][1]=%d\t\t", nrjiArray[3][2][1]);

    printf("\n\n\n");


    printf("*****************Row4************************\n");
    printf("*****************Column0************************\n");
    printf("nrjiArray[4][0][0]=%d\t\t", nrjiArray[4][0][0]);
    printf("nrjiArray[4][0][1]=%d\t\t", nrjiArray[4][0][1]);

    printf("\n");

    printf("*****************Row4************************\n");
    printf("*****************Column1************************\n");
    printf("nrjiArray[4][1][0]=%d\t\t", nrjiArray[4][1][0]);
    printf("nrjiArray[4][1][1]=%d\t\t", nrjiArray[0][1][1]);

    printf("\n");
    printf("*****************Row4************************\n");
    printf("*****************Column2************************\n");
    printf("nrjiArray[4][2][0]=%d\t\t", nrjiArray[4][2][0]);
    printf("nrjiArray[4][2][1]=%d\t\t", nrjiArray[4][2][1]);


    printf("\n\n\n");
}//end of main function

