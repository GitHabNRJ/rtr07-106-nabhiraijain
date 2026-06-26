#include<stdio.h>
#define NRJ_PI 3.1415926535897932
#define AMC_STRING "AstroMediComp RTR"

//If first constant Is Not assigned A valude , it is assumed to be 0 i.e: SUNDAY will be 0
//And the rest of the constants are assigned consecutive integer values from 0 onwards :e "Monday =1 , Tuesday=1

//Un-named enum-1
enum
{
SUNDAY,
MONDAY,
TUESDAY,
WEDNEADAY,
THURSDAY,
FRIDAY,
SATURDAY,
};

//Un-named enum-2
enum 
{
JANUARY=1,
FEBRUARY,
MARCH,
APRIL,
MAY,
JUNE,
JULY,
AUGUST,
SEPTEMBER,
OCTOBER,
NOVEMBER,
DECEMBER,

};

//Named-enum-1  Here ONE is not assigned a value so it wll take '0'
enum Numbers
{
ONE,
TWO,
THREE,
FOUR,
FIVE=5,
SIX,
SEVEN,
EIGHT,
NINE,
TEN
};


//Named-enum-2
enum boolean
{
TRUE=1,
FALSE=0,

};

int main(void)

{
	//local constant declarations
	const double epsilon_NRJ = 0.000001;

	//code
	printf("\n\n");
	printf("Local constant Epsilon=%lf", epsilon_NRJ);

	printf("Sunday  Is Day Number=%d\n", SUNDAY);
	printf("Monday  Is Day Number=%d\n", MONDAY);
	printf("Tuesday Is Day Number=%d\n", TUESDAY);
	printf("Sunday  Is Day Number=%d\n", WEDNEADAY);
	printf("Monday  Is Day Number=%d\n", THURSDAY);
	printf("Tuesday Is Day Number=%d\n", FRIDAY);
	printf("Monday  Is Day Number=%d\n\n\n", SATURDAY);

	printf("One Is Enum Number=%d\n", ONE);
	printf("Two Is Enum Number=%d\n", TWO);
	printf("Three Is Enum Number=%d\n", THREE);
    printf("Four Is Enum Number=%d\n", FOUR);
	printf("Five Is Enum Number=%d\n", FIVE);
	printf("Six Is Enum Number=%d\n", SIX);
	printf("Seven Is Enum Number=%d\n", SEVEN);
    printf("Eight Is Enum Number=%d\n", EIGHT);
	printf("Nine Is Enum Number=%d\n", NINE);
	printf("Ten Is Enum Number=%d\n\n\n", TEN);

	printf("January   Is Month Number=%d\n", JANUARY);
	printf("Februay   Is Month Number=%d\n", FEBRUARY);
	printf("March     Is Month Number=%d\n", MARCH);
    printf("April     Is Month Number=%d\n", APRIL);
	printf("May       Is Month Number=%d\n", MAY);
	printf("June      Is Month Number=%d\n", JUNE);
	printf("July      Is Month Number=%d\n", JULY);
    printf("August    Is Month Number=%d\n", AUGUST);
	printf("September Is Month Number=%d\n", SEPTEMBER);
	printf("October   Is Month Number=%d\n", OCTOBER);
	printf("November  Is Month Number=%d\n", NOVEMBER);
	printf("December  Is Month Number=%d\n\n\n", DECEMBER);

	printf("Value of True Is=%d\n", TRUE);
	printf("Value of False Is=%d\n\n\n", FALSE);
	
	printf("MY_PI Maco value=%.101f\n\n", NRJ_PI);   // It will print value of NRJ_PI to 101 precision after .
	printf("Area of circle of radius 2 units=%f\n\n", NRJ_PI * 2.0f * 2.0f);
	printf("\n\n");

	printf(AMC_STRING);
	printf("\n\n");
printf("AMC_STRING is: %s\n", AMC_STRING);
		printf("\n\n");
	return(0);

}//end of main function


