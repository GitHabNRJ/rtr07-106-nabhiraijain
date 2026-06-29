int main(void)
{
//variable declaration 
	int nrj_a, nrj_b, nrj_p;

	//code
	nrj_a = 9;
	nrj_b = 30;
	nrj_p = 30;

	//***First if-else PARI*****
	printf("\n\n");
	if (nrj_a < nrj_b)
	{
		printf("Entering First if-block..\n\n");
		printf("A Is Less Than B!!!\n\n");
    }
	else
	{
		printf("Entering First else-block..\n\n");
	}

	//***SECOND if-else PAIR
	printf("\n\n");
	if (nrj_b != nrj_p)
	{
		printf("Entering Second if-block...\n\n");
		printf("B Is Not Equal To P!!!\n\n");
	}
	else
	{
		printf("Entering Second else-block...\n\n");
		printf("B Is Equal To P!!!\n\n");

	}
	printf("Second if-else Pair Done!!!\n\n");
	return(0);

}//end of main function