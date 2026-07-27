#include<stdio.h>

//DEFINING STRUCT Mypoint globally

struct MyPoint
{
	int nrjx;
	int nrjy;


}nrjpoint_A,nrjpoint_B,nrjpoint_C,nrjpoint_D,nrjpoint_E;

int main(int args[], int* argv[], int* envp[])
{


//code 
//Innitializing the coordinates of points A,B,C,D,E
	nrjpoint_A.nrjx = 3;
	nrjpoint_A.nrjy = 6;

	nrjpoint_B.nrjx = 2;
	nrjpoint_B.nrjy = 4;

	nrjpoint_C.nrjx = 5;
	nrjpoint_C.nrjy = 10;

	nrjpoint_D.nrjx = 6;
	nrjpoint_D.nrjy = 12;

	nrjpoint_E.nrjx = 7;
	nrjpoint_E.nrjy = 14;


	printf("\n\n");
	printf("Co-ordinates (x,y) of Point 'A' Are:(%d,%d)\n", nrjpoint_A.nrjx, nrjpoint_A.nrjy);
	printf("Co-ordinates (x,y) of Point 'B' Are:(%d,%d)\n", nrjpoint_B.nrjx, nrjpoint_B.nrjy);
	printf("Co-ordinates (x,y) of Point 'C' Are:(%d,%d)\n", nrjpoint_C.nrjx, nrjpoint_C.nrjy);
	printf("Co-ordinates (x,y) of Point 'D' Are:(%d,%d)\n", nrjpoint_D.nrjx, nrjpoint_D.nrjy);
	printf("Co-ordinates (x,y) of Point 'E' Are:(%d,%d)\n", nrjpoint_E.nrjx, nrjpoint_E.nrjy);

	return(0);

}//end of main function 