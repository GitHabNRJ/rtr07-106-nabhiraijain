#include<stdio.h>


int main(int args[], int* argv[], int* envp[])
{


	struct MyPoint
	{
		int nrj_x;
		int nrj_y;


	};
	struct Rectangle
	{
		struct MyPoint nrjpoint_01, nrjpoint_02;
	};

	//variable declaration 
	struct Rectangle nrjrect = { {5,6} ,{9,8} };

	int length, breadth, area;


	

	length = nrjrect.nrjpoint_02.nrj_y - nrjrect.nrjpoint_01.nrj_y;
	if (length < 0)
	{
		length = length * -1;
	}
	breadth = nrjrect.nrjpoint_02.nrj_x - nrjrect.nrjpoint_01.nrj_x;
	if (breadth < 0)
	{
		breadth = breadth * -1;

	}
	area = length * breadth;

	printf("\n\n");
	printf("Lenght of Rectangle=%d\n\n", length);
	printf("Breadth of Rectangle=%d\n\n", breadth);
	printf("Area of Rectangle=%d\n\n", area);

	return(0);







}//end of main function