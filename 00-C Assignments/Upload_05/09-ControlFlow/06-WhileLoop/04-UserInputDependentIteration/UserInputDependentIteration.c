#include<stdio.h>
int main(void)
{
	//variable declarations
	int nrji_num, nrjnum, nrji;
	//code
	printf("\n\n");

	printf("Enter an Integer value from which Iteration must Begin:");
	scanf("%d", &nrji_num);

	printf("How many digits do you want to print from %d onwards\n", nrji_num);
	scanf("%d", &nrjnum);

	printf("Printng Digits %d to %d :\n\n", nrji_num, (nrji_num + nrjnum));

	nrji = nrji_num;
	while ( nrji <= (nrji_num + nrjnum))
	{

		printf("\t %d\n", nrji);
		nrji++;
	}
	printf("\n\n");

	return(0);


}//end of main function