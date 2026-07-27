#include<stdio.h>

struct Rectangle
{

	struct MyPoint
	{
		int nrj_x;
		int nrj_y;


	}nrjpoint_01, nrjpoint_02;


}nrjrect = { {2,3},{5,6} };

int main(int args[], int* argv[], int* envp[])
{
	//variable declaration 

	int length, breadth, area;


	//printf("\n\n");
	//printf("Enter Leftmost X-Coordinate Of Rectangle:");
	//scanf("%d", &nrjrect.nrjpoint_01.nrj_x);

	//printf("Enter Bottommost Y-Coordinate Of Rectangle:");
	//scanf("%d", &nrjrect.nrjpoint_01.nrj_y);

	//printf("\n\n");
	//printf("Enter Rightmost X-Coordinate Of Rectangle:");
	//scanf("%d", &nrjrect.nrjpoint_02.nrj_x);

	//printf("Enter Topmmost Y-Coordinate Of Rectangle:");
	//scanf("%d", &nrjrect.nrjpoint_02.nrj_y);

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