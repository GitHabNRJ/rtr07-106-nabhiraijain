#include<stdio.h>
int main(void)
{

//Relational Operators (<,<=,>,>=,==,!=
//variable declarations 
	int a;
	int b;
	int result;

	//code
	printf("\n\n");

	printf("Enter One Integer:");
	scanf("%d", &a);

	printf("\n\n");
	printf("Enter another Integer");
	scanf("%d", &b);

	printf("\n\n");
	printf("If Answer=0, It Is 'FALSE'.\n");
	printf("If Answer=1,It is 'TRUE'.\n\n");

	//Implementation of Relational Operator <
	result = (a < b);
	printf("(a<b) A=%d Is Less than B=%d                  \t Answer=%d\n",a,b,result);

	//Implementation of Relational Operator >
	result = (a > b);
	printf("(a>b) A=%d Is Greater than B=%d               \t Answer = %d\n",a,b,result);

	//Implementation of Relational Operator <=
	result = (a <= b);
	printf("(a<=b) A=%d Is Less than or Equal to  B=%d    \t Answer = %d\n",a,b,result);

	//Implementation of Relational Operator >=
	result = (a >= b);
	printf("(a>=b) A=%d Is Greater than or Equal to  B=%d  \t Answer = %d\n",a,b,result);

	//Implementation of Equal Operator == in c 

	result = (a == b);
	printf("(a==b) A=%d Is  Equal to  B=%d                 \t Answer=%d\n",a,b,result);

	///Implementation of Not Equal Operator != in c 
	result = (a != b);
	printf("(a!=b) A=%d Is  Not Equal to  B=%d             \t Anser=%d\n", a,b,result);



	return(0);




}//end of main function