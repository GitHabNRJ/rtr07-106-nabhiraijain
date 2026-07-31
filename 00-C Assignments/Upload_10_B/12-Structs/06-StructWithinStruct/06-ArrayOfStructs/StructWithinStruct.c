#include<stdio.h>

struct MyNumber
{

	int num;
	int num_table[10];

};

struct NumTables
{
	struct MyNumber n;
};

int main(int args[], int* argv[], int* envp[])
{
  //variable declarations 
	struct NumTables tables[10];
	int nrji, nrjj;

	for (int nrji = 0; nrji < 10; nrji++)
	{
		tables[nrji].n.num = (nrji + 1);
	}//end of for loop

	for (nrji = 0; nrji < 10; nrji++)
	{
		printf("\n\n");
		printf("Table of %d:\n\n", tables[nrji].n.num);
		for (nrjj = 0; nrjj < 10; nrjj++)
		{
			tables[nrji].n.num_table[nrjj] = tables[nrji].n.num * (nrjj + 1);
			printf("%d * %d=%d\n", tables[nrji].n.num, (nrjj + 1), tables[nrji].n.num_table[nrjj]);

		}

	}//end of for loop


	return(0);


}//end of main function