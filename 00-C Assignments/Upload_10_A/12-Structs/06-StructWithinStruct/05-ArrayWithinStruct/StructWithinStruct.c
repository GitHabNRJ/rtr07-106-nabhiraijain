#include<stdio.h>

struct MyNumber
{
	int nrjnum;
	int nrjnum_table[10];

};

struct NumTables
{
	struct MyNumber nrj_a;
	struct MyNumber nrj_b;
	struct MyNumber nrj_c;

};

int main(int args[], int* argv[], int* envp[])
{
	struct NumTables tables;
	int nrji;
	
	//************************************Table of 2***********************/
	tables.nrj_a.nrjnum = 2;
	for (nrji = 0; nrji < 10; nrji++)
	tables.nrj_a.nrjnum_table[nrji] = tables.nrj_a.nrjnum * ( nrji+ 1);

	printf("\n\n");
	printf("Table of %d:\n\n", tables.nrj_a.nrjnum);
	for (nrji = 0; nrji < 10; nrji++)
	{
		printf("%d*%d=%d\n", tables.nrj_a.nrjnum, (nrji + 1), tables.nrj_a.nrjnum_table[nrji]);
	}


	printf("\n\n");
	//************************************Table of 4***********************/

	tables.nrj_b.nrjnum = 4;

	tables.nrj_a.nrjnum = 4;
	for (nrji = 0; nrji < 10; nrji++)
		tables.nrj_b.nrjnum_table[nrji] = tables.nrj_b.nrjnum * (nrji + 1);

	printf("\n\n");
	printf("Table of %d:\n\n", tables.nrj_b.nrjnum);
	for (nrji = 0; nrji < 10; nrji++)
	{
		printf("%d*%d=%d\n", tables.nrj_b.nrjnum, (nrji + 1), tables.nrj_b.nrjnum_table[nrji]);
	}

	printf("\n\n");
	//************************************Table of 5***********************/
	tables.nrj_c.nrjnum = 5;


	tables.nrj_c.nrjnum = 4;
	for (nrji = 0; nrji < 10; nrji++)
		tables.nrj_c.nrjnum_table[nrji] = tables.nrj_c.nrjnum * (nrji + 1);

	printf("\n\n");
	printf("Table of %d:\n\n", tables.nrj_c.nrjnum);
	for (nrji = 0; nrji < 10; nrji++)
	{
		printf("%d*%d=%d\n", tables.nrj_c.nrjnum, (nrji + 1), tables.nrj_c.nrjnum_table[nrji]);
	}







}//end of main function