#include<stdio.h>
#include<conio.h>

int main(void)
{
	//variable declarations
	int nrj_a, nrj_b;
	int nrj_result;

	char nrj_option, nrj_optiondivision;

	//code
	printf("\n\n");

	printf("Enter the value of 1st Number:\n");
	scanf("%d", &nrj_a);

	printf("Enter the value of 2nd Number:\n");
	scanf("%d", &nrj_b);

	printf("Enter Mathematical Operation Option in Character from List:\n");
	printf("'A' or 'a' For Addition:\n");
	printf("'S' or 's' For Addition:\n");
	printf("'M' or 'm' For Addition:\n");
	printf("'D' or 'd' For Addition:\n");

	nrj_option = getch();
	printf("\n\n");

	
	if(nrj_option=='A' || nrj_option=='a')                         //Ladder 1 - if ladder 
	{                                                                                         // Ladder 1 -if Opening brace 
		nrj_result = nrj_a + nrj_b;
		printf("Addition of 1st Number & 2nd Number is result=%d\n\n", nrj_result);
	}                                                                                         // Ladder 1 - if closing brace   
	else if ((nrj_option == 'S') || (nrj_option == 's'))              //Ladder 2 - else -if
	    {                                                                                     //Ladder  2 - else -if Opening brace
	         if (nrj_a >= nrj_b)
	             {
		nrj_result = nrj_a - nrj_b;
		printf("Subtraction of 1st Number & 2nd Number is result=%d\n\n",nrj_result);
	             }
	          else
	             {
		nrj_result = nrj_b - nrj_a;
		printf("Subtraction of 2nd Number & 1sd Number is result=%d\n\n", nrj_result);
	             }
		
	    }                                                                                     //Ladder 2 - else -if closing brace 
	else if ((nrj_option == 'M') || (nrj_option == 'm'))         //Ladder 3 -(else -if) 
	        {                                                                                  //Ladder 3 - else -if opening brace
		    nrj_result = nrj_a * nrj_b;
		    printf("Multiplication of 1st Number & 2nd Number is result=%d\n\n", nrj_result);
	        }
	else if ((nrj_option == 'D') || (nrj_option == 'd'))        //Ladder 4 -(else-if)
	        {
		printf("Enter Option In Character : \n\n");
		printf("'Q' or 'q' or '/' For Quotient Upon Divition:\n");
		printf("'R' or 'r' or '%%' For Reminder Upon Divition:\n");
        printf("Enter Option:");
		nrj_optiondivision = getch();
         printf("\n\n");
		                         if ((nrj_optiondivision == 'Q') || (nrj_optiondivision == 'q') || (nrj_optiondivision == ' / '))
		                         {
			                              if (nrj_a >= nrj_b)
			                                     {
				                                  nrj_result = nrj_a / nrj_b;
				                                  printf("Division of 1st:%d & 2nd:%d number :%d\n\n", nrj_a, nrj_b, nrj_result);
			                                      }
			                              else
			                                      {
				                                  nrj_result = nrj_b / nrj_a;
				                                  printf("Division of 1st:%d & 2nd:%d number :%d\n\n", nrj_b, nrj_a, nrj_result);
                                                  }
		                          }
	                             else if ((nrj_optiondivision == 'R') || (nrj_optiondivision == 'r') || (nrj_optiondivision == '%'))
	                                             {
		                                         if (nrj_a >= nrj_b)
		                                                 {
			                                             nrj_result = nrj_a % nrj_b;
			                                              printf("Reminder of 1st:%d & 2nd:%d number :%d\n\n", nrj_a, nrj_b, nrj_result);
		                                                 }
		                                         else
		                                                 {
			                                             nrj_result = nrj_b % nrj_a;
			                                             printf("Reminder of 1st: % d & 2nd : % d number : % d\n\n", nrj_b, nrj_a, nrj_result);
                                                         }
	                                              }

	                                  else
	                                       {
		                                      printf("Invalid character %c entered for divition , please ask user to enter again", nrj_optiondivision);
			
	                                        }
	            	} //Ladder 4 - else -if closing brace 

	else           // Ladder 5 - last else block of if , else-if , else-if , else-if ,else-if else 
	{
		printf("Invalid character %c entered in MainSwitch , please ask user to enter again\n\n", nrj_option);
	}             // Ladder 5 - else closing brace.
	
	 printf("Out of the if-elseif-elseif-elseLadder for MathematicalSwitchCase\n\n");
}//end of main function