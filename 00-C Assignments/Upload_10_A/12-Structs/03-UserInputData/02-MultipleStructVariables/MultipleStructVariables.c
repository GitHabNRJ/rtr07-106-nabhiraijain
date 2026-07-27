#include<stdio.h>

struct MyPoint
{
	int x;
	int y;
};

int main(int args[], int* argv[], int* envp[])
{

	struct MyPoint point_A, point_B, point_C, point_D, point_E;

	//code
	
	printf("\n\n");
	printf("Enter coordinates of pointA : \n");
	printf("Enter the (x,)coordinates of point A:");
	scanf("%d",&point_A.x);
	printf("Enter the (y,)coordinates of point A:");
	scanf("%d", &point_A.y);

	printf("\n\n");
	printf("Enter coordinates of pointB : \n");
	printf("Enter the (x,)coordinates of point B:");
	scanf("%d", &point_B.x);
	printf("Enter the (y,)coordinates of point B:");
	scanf("%d", &point_B.y);

	printf("\n\n");
	printf("Enter coordinates of pointC : \n");
	printf("Enter the (x,)coordinates of point C:");
	scanf("%d", &point_C.x);
	printf("Enter the (y,)coordinates of point C:");
	scanf("%d", &point_C.y);

	printf("\n\n");
	printf("Enter coordinates of pointD : \n");
	printf("Enter the (x,)coordinates of point D:");
	scanf("%d", &point_D.x);
	printf("Enter the (y,)coordinates of point D:");
	scanf("%d", &point_D.y);

	printf("\n\n");
	printf("Enter coordinates of pointE : \n");
	printf("Enter the (x,)coordinates of point E:");
	scanf("%d", &point_E.x);
	printf("Enter the (y,)coordinates of point E:");
	scanf("%d", &point_E.y);


	printf("Coordinates (x,y) of A are :(%d,%d)\n", point_A.x, point_A.y);
	printf("Coordinates (x,y) of B are :(%d,%d)\n", point_B.x, point_B.y);
	printf("Coordinates (x,y) of C are :(%d,%d)\n", point_C.x, point_C.y);
	printf("Coordinates (x,y) of D are :(%d,%d)\n", point_D.x, point_D.y);
	printf("Coordinates (x,y) of E are :(%d,%d)\n", point_E.x, point_E.y);


	printf("\n\n");


}//end of main function