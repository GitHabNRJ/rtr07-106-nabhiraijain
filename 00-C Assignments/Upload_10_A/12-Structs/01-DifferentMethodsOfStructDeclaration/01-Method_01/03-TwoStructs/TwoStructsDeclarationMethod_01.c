#include<stdio.h>

//DEFINING STRUCT1 

struct MyPoint
{
	int nrj_x;
	int nrj_y;
}nrj_pointA;

//DEFINING STRUCT2 
struct MyPointProperties
{
	int nrj_quadrant;
	char nrjaxis_location[10];
}nrjpointA_properties;

int main(int args[], int* argv[], int* envp[])
{

//code
//User Input for the Data Members of struct 'MyPoint'

	printf("\n\n");
	printf("Enter X Coorindate of PointA:");
	scanf("%d", &nrj_pointA.nrj_x);
	printf("Enter Y Coorindate of PointA:");
	scanf("%d", &nrj_pointA.nrj_y);

	printf("\n\n");
	printf("Point Co-ordinates (x,) are:(%d,%d)", nrj_pointA.nrj_x, nrj_pointA.nrj_y);

	if ((nrj_pointA.nrj_x==0) && ( nrj_pointA.nrj_y==0))
	{
		printf("The entered coordinates belongs to Origion:");
		printf("\n\n");

	}
	else if (nrj_pointA.nrj_x == 0)
	{
	        if (nrj_pointA.nrj_y < 0)
		   strcpy(nrjpointA_properties.nrjaxis_location, "Negative Y");
	        if (nrj_pointA.nrj_y > 0)
		   strcpy(nrjpointA_properties.nrjaxis_location, "Positive Y");
	//innitialize the quadrant to 0
	nrjpointA_properties.nrj_quadrant = 0;
	
	printf("The Point Lies on the %s Axis!!!", nrjpointA_properties.nrjaxis_location);
	printf("\n\n");
	}
	else if (nrj_pointA.nrj_y == 0)
	{
	      if (nrj_pointA.nrj_x < 0)
		strcpy(nrjpointA_properties.nrjaxis_location, "Negative X");
	      if (nrj_pointA.nrj_x > 0)
		strcpy(nrjpointA_properties.nrjaxis_location, "Positive X");
	//innitialize the quadrant to 0
	 

	printf("The Point Lies on the %s Axis!!!", nrjpointA_properties.nrjaxis_location);
	printf("\n\n");

	}
	else  //Neither X or Y is Zero  //else block of if-elseif-elseif-else ladder
	{
		nrjpointA_properties.nrjaxis_location[0] = '\0';
		if ( (nrj_pointA.nrj_x > 0) && (nrj_pointA.nrj_y > 0))
			nrjpointA_properties.nrj_quadrant = 1;
		else if ((nrj_pointA.nrj_x < 0) && (nrj_pointA.nrj_y > 0))
			nrjpointA_properties.nrj_quadrant = 2;
		else if ((nrj_pointA.nrj_x < 0) && ( nrj_pointA.nrj_y < 0))
			nrjpointA_properties.nrj_quadrant = 3;

		else                           //else block of if-elseif-elseif-else ladder

			nrjpointA_properties.nrj_quadrant = 4;

		printf("The Point lies in the %d quandrant:", nrjpointA_properties.nrj_quadrant);
		printf("\n\n");

	}
	
	}//end of main function

