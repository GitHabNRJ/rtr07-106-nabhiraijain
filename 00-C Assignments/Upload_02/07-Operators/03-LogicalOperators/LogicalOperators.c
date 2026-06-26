#include<stdio.h>

int main(void)
{
//variable declaration 
	int a;
	int b;
	int c;
	int result;

	//code
	printf("\n\n");
	printf("Enter 1st Integer:");
	scanf("%d", &a);

	printf("\n\n");
	printf("Enter 2nd Integer:");
	scanf("%d", &b);

	printf("\n\n");
	printf("Enter 3rd Integer:");
	scanf("%d", &c);

	printf("\n\n");
	printf("If Answer=0, It Is 'FALSE'\n\n");
	printf("If Answer=1,It is 'TRUE'.\n\n");

	//Logical And (&&) Operator
	result = (a <= b) && (b != c);
printf("LOGICAL AND (&&): Answer is TRUE(1) If and Only If Both Conditions are True.The Answer is FALSE(0), If One or Both Conditions are False\n\n");
	printf("A=%d is Less Than Or Equal to B=%d result is Answer=%d\n\n", a, b, result);

	//Logical OR (||) Operator
	result = (b >= a) || (a == c);
	printf("LOGICAL OR (!!): Answer is TRUE(1) If any One or both  the conditions is true.The Answer is FALSE(0), If & only if  Both Conditions are False\n\n");
	printf("Either B=%d is greater Than Or Equal to A=%d OR A=%d is EQUAL to C=%d result is Answer=%d\n\n", b, a,a,c, result);

	//Logical NOT (!) Operator 
    result = !a;
	printf("A=%d And Using Logical NOT(!) Operator on A Gives Result=%d\n\n", a, result);

    result = !b;
   printf("B=%d And Using Logical NOT(!) Operator on B Gives Result=%d\n\n", b, result);

   result = !c;
   printf("C=%d And Using Logical NOT(!) Operator on C Gives Result=%d\n\n", c, result);

   result = (!(a <= b) && !(b != c));
   printf("Using Logical  NOT (!)  on (a<=b) And also on (b!=c) and then applying Logical And(&&) afterwards result=%d", result);

   printf("\n\n");

   result = !((b >= a) || (a == c));
   printf("Using Logical Not on Entire Logical Expression Result ((b >= a) || (a == c))) gives result=%d", result);

   printf("\n\n");

   return(0);
   
}//end of main declaration