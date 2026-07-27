#include<stdio.h>

int main(void)
{
//function prototypes
	void change_count(void);

	//variable declarations
	extern int global_count;

	//code
	printf("\n");
	printf("Value of global_count before change_count()=%d\n", global_count);

	change_count();

	rintf("Value of global_count after change_count()=%d\n", global_count);


	printf("\n");
}

int global_count = 0;

void change_count(void)
{
	global_count = 5;
	printf("value of global_count in change_count()=%d", global_count);

}