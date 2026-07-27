#include<stdio.h>

#define INT_ARRAY_SIZE 10
#define FLOAT_ARRAY_SIZE 5
#define CHAR_ARRAY_SIZE 26

#define NUM_STRINGS 10
#define MAX_CHARACTERS_PER_STRING 20

#define ALPHABET_BEGINNING 65


struct MyDataOne
{
	int inrjArray[INT_ARRAY_SIZE];
	float fnrjArray[FLOAT_ARRAY_SIZE];

};

struct MyDataTwo
{
	char cArray[CHAR_ARRAY_SIZE];
	char strArray[NUM_STRINGS][MAX_CHARACTERS_PER_STRING];

};

//The range of ASCII values for uppercase letters 'A-Z' is 65-90, and the range for lowercase letters 'a-z' is 97-122
int main(int args[], int* argv, int* envp[])
{

	struct MyDataOne data_one;
	struct MyDataTwo data_two;


	int nrji;

	//code
	//Initialize struct 'MyDataOne' array inrjArray[] using user input 
	printf("Enter elements of struct 'MyDataOne' array inrjArray[]:\n");
	for (nrji = 0; nrji < INT_ARRAY_SIZE; nrji++)
	{
		scanf("%d", &data_one.inrjArray[nrji]);
	}

	//**Initialize struct 'MyDataOne' array fnrjArray [] using PIECE-MEAL ASSIGNMENT(HARD CODED)*******
	data_one.fnrjArray[0] = 0.1f;
	data_one.fnrjArray[1] = 1.2f;
	data_one.fnrjArray[2] = 2.3f;
	data_one.fnrjArray[3] = 3.4f;
	data_one.fnrjArray[4] = 4.5f;


	//Initialize struct 'MyDataTwo' array cArray[] using user input 

	for (nrji = 0; nrji < CHAR_ARRAY_SIZE; nrji++)
	{
		data_two.cArray[nrji] = (char)(ALPHABET_BEGINNING + nrji);
	}

	//**Initialize struct 'MyDataTwo' array strArray [] using PIECE-MEAL ASSIGNME
	strcpy(data_two.strArray[0], "Welcome!!");
	strcpy(data_two.strArray[1], "This");
	strcpy(data_two.strArray[2], "Is");
	strcpy(data_two.strArray[3], "ASTROMEDICOMP");
	strcpy(data_two.strArray[4], "Real");
	strcpy(data_two.strArray[5], "Time");
	strcpy(data_two.strArray[6], "Rendering");
	strcpy(data_two.strArray[7], "Batch");
	strcpy(data_two.strArray[8], "Of");
	strcpy(data_two.strArray[9], "2024-2025");
	
	//Displaying Data Members of 'struct MyDataOne
	printf("Display the Members of struct MyDataOne Are data_one inrjArray[],fnrjArray[] :\n");
	printf("Display the values of Struct Array inrjArray[]\n");
	
	for (nrji = 0; nrji < INT_ARRAY_SIZE; nrji++)
	{
		printf("inrjArray[%d]=%d\n",nrji,data_one.inrjArray[nrji]);
	}

	printf("\n");
	
	printf("Display the values of Struct Array fnrjArray[]\n");

	for (nrji = 0; nrji < FLOAT_ARRAY_SIZE; nrji++)
	{
		printf("fnrjArray[%d]=%f\n", nrji, data_one.fnrjArray[nrji]);
	}


	printf("Display the Members of struct MyDataTw0 Are data_tw0 cArray[],strArray[] :\n");
	printf("Display the values of Struct Array cArray[]\n");

	for (nrji = 0; nrji < CHAR_ARRAY_SIZE; nrji++)
	{
		printf("cArraycArray[%d]=%c\n", nrji, data_two.cArray[nrji]);
	}

	printf("\n");

	printf("Display the values of Struct Array strArray[]\n");

	for (nrji = 0; nrji < NUM_STRINGS; nrji++)
	{
		printf("strArray[%d]=%s\n", nrji, data_two.strArray[nrji]);
	}


	

	
	printf("\n\n");


return(0);

}//end of main function 