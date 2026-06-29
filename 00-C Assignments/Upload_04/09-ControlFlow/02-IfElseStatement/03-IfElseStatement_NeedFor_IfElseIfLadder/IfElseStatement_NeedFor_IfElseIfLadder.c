#include<stdio.h>
int main(void)
{
	//variable declaration
	int nrj_num;

	//code
	printf("Enter the number:");
	scanf("%d", &nrj_num);

	if (nrj_num < 0) // 'if' -01
	{
		printf("The Number  %d is negative and less than zero!!!!\n\n", nrj_num);
	}
	else // 'else'-01
	{
		if ((nrj_num) >= 0 && (nrj_num) <= 100) // 'if'-02
		{

			printf("The Number %d is Between 0 & 100\n\n", nrj_num);
		}

		else {  // 'else -02

			      if ((nrj_num) >= 100 && (nrj_num) <= 200) // 'If'-3
			      {
				  printf("The Number %d is Between 100 & 200\n\n", nrj_num);
			      }
				  else   // 'else' -03
				  {
					  if ((nrj_num) >= 200 && (nrj_num) <= 300)  // 'If'-04
					  {
						  printf("The Number %d is Between 200 & 300\n\n", nrj_num);
					  }
					  else // 'else' -04
					  { 
						     if ((nrj_num) >= 300 && (nrj_num) <= 400) // 'If'-05
						        {
							  printf("The Number %d is Between 300 & 400\n\n", nrj_num);
						        }
							 else   // 'else' -05
							 {

								 if ((nrj_num) >= 400 && (nrj_num) <= 500)   // 'If'-06
								 {
									 printf("The Number %d is Between 400 & 500\n\n", nrj_num);
								 }
								 else // 'else' -06
								 {

										printf("The Number %d is Greateer than 500\n\n", nrj_num);
								 

								 }// end of else -06
								 
							 }//end of else -05
					       

					  }//end of else -04

				  }//end of else -03

			 
			
		}//end of else -02

		
	}//end of else -01

	

	return(0);
}//end of main function

