#include<stdio.h>
int main(void)
{
	//variable declarations
	float nrj_f;
	float nrjf_num = 1.7f;

	//code
	printf("\n\n");

	printf("Printing Numbers %f to %f:\n\n", nrjf_num, (nrjf_num * 10.0f));

	nrj_f = nrjf_num;
	printf("\n\n");
	do
	{
      printf("\t%f\n", nrj_f);
      nrj_f = nrj_f + nrjf_num;

	} while (nrj_f <= (nrjf_num * 10.0f));
	

	printf("\n\n");
	return(0);




}//end of main function