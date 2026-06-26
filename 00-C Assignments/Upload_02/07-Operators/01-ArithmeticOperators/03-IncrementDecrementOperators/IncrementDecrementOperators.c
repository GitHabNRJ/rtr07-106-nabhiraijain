#include<stdio.h>
int main(void)

{

//variable declaration 
	int a = 5;
	int b = 10;

	//Increment operatior imlementation code
	printf("\n\n");
	printf("A=%d\n", a);                               //a=5
	printf("A=%d\n", a++);                             //1st assignment will happend then increment :A=5 a=6
	printf("A=%d\n", a);                               //A=6
	printf("A=%d\n\n", ++a);                           //1st increment will happend then assignment : a=7 A=7

	//Decrementation Operator implementation code 
	printf("B=%d\n", b);                                //b=10
	printf("B=%d\n", b--);                             //1st assignment will happen then decrement : B=10 , b=9
	printf("B=%d\n", b);                                  //b=9
	printf("B=%d\n\n", --b);                            //1st decrement will happen then assignment : b=8 B=8

	return(0);





}//end of main function