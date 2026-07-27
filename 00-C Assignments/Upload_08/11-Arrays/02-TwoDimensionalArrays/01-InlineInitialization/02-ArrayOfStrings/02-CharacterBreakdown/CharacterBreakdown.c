#include<stdio.h>
#define MAX_STRING_LENGTH 512;

int main(int args[], int* argv[], int* envp)
{

    //variable declarations 
    //In -line innitialization of 2-D Array
    //function prototype
    int MyStrelen(char str[]);

    //variable declarations


    //****A 'STRING' IS AN ARRAY OF CHARACTERS ...SO CHAR[] is a char Array . Hence , char[] Is a 'String'****
    //**An array of char Arrays is an array of Strings!!!
    //***So Hence , char[] is once char Array or 'String'.
    //***Hence , char[][] is a array of char arrays or w can say Array of Strings.


    int nrjisStringLength = 0;
    int istrlenght[10];

    //In-line innitialization
    char nrjstrArray[10][15] = { "Hello!",
                               "Welcome",
                               "To",
                               "Real",
                               "Time",
                               "Rendering",
                               "Batch",
                               "(2026-27)",
                               "Of",
                               "ASTROMEDICOMP"
    };


    int nrjchar_size;
    int nrjstrArray_size;
    int nrjstrArray_num_elements, nrjstrArray_num_rows, nrjstrArray_num_columns;
    int strActual_num_chars = 0;
    int i, j;
    //code



    nrjchar_size = sizeof(char);
    nrjstrArray_size = sizeof(nrjstrArray);

    nrjstrArray_num_elements = nrjstrArray_size / nrjchar_size;

    nrjstrArray_num_rows = nrjstrArray_size / sizeof(nrjstrArray[0]);

    nrjstrArray_num_columns = nrjstrArray_size / (nrjstrArray_num_rows * nrjchar_size);



    printf("\n");

    printf("Size of  (2D) Character Array is %d\n\n", nrjchar_size);
    printf("Size of Two Dimentional(2D) String Array is %d\n\n", nrjstrArray_size);

    printf("Number of elements in Two Dimentional(2D) String Array is %d\n\n", nrjstrArray_num_elements);

    printf("No of rows in (2D) String Array is %d\n\n", nrjstrArray_num_rows);

    printf("No of columns in (2D) String Array is %d\n\n", nrjstrArray_num_columns);




    printf("Elements In the 2D Array using Nested Loops:\n");

    //****Lengh of each row in the string array
    for (i = 0 ;i < nrjstrArray_num_rows; i++)
    {

        istrlenght[i] = strlen(nrjstrArray[i]);
     
    }

    //****print each element of the array**************
    for (i = 0; i < nrjstrArray_num_rows; i++)
    {

        printf(" %d row String is :", i);
        printf("String Number %d=>%s\n\n", (i + 1), nrjstrArray[i]);

        for (j = 0; j < istrlenght[i]; j++)
        {
            //printf("%c", nrjstrArray[i][j]);
            printf("Character %d=%c\n", (j + 1), nrjstrArray[i][j]);
            
          }

        printf("\n\n");
    }
    return(0);

}//end of main function
