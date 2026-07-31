#include<stdio.h>

 typedef int MY_INT;
 //"type" int has been re-defined as "MY_INT" .Now "MY_INT" can be treated as INT 

 int main(int args[], int* argv[], int* envp[])
 {

	 MY_INT Add(MY_INT, MY_INT);

	 //Typedefs
	 typedef int MY_INT; //"type" int has been re-defined as "MY_INT"  Now "MY_INT" will be treated as int .
	 typedef float PVG_FLOAT;// "type" float has been re-defined as "MY_FLOAT" Now "MY_FLOAT" will be treated as float .
	 typedef char CHARACTER; // "type" char has been re-defined as "CHARACTER" Now "CHARACTER" will be treated as CHARACTER .
	 typedef double MY_DOUBLE;// "type" double has been re-defined as "MY_DOUBLE" Now "MY_DOUBLE" will be treated as MY_DOUBLE. 

	 //***********JUST LIKE IN Win32SDK*************
     typedef unsigned int UNIT;
	 typedef UNIT HANDLE;
	 typedef HANDLE HWND;
	 typedef HWND HINSTANCE;

	 //variable declarations
	 MY_INT a = 10, i;
	 MY_INT iArray[] = { 9,18,27,36,45,54,63,73,81,90 };

	 PVG_FLOAT f_pvg = 30.9f;
	 const PVG_FLOAT f_pvg_pi = 3.14f;

	 CHARACTER ch = '*';
	 CHARACTER chArray_01[] = "Hello";
	 CHARACTER chArray_02[][10] = { "RTR","Batch","2024-2025" };

	 MY_DOUBLE d = 8.041997;

	 UNIT  uint= 8976;
	 HANDLE handle = 678;
	 HWND hwnd = 1256;
	 HINSTANCE hInstance = 17789;

	 //code
	 printf("\n\n");
	 printf("Type MY_INT variable a=%d\n", a);

	 printf("\n\n");
	 for (i = 0; i < (sizeof(iArray) / sizeof(int)); i++)
	 {
	 printf("Type MY_INT array variable iArray[%d]=%d\n",i,iArray[i]);
     }

	 printf("\n\n");

	 printf("Type PVG_FLOAT variable f_pvg=%f\n", f_pvg);
	 printf("Type PVG_FLOAT constant f_pvg=%f\n", f_pvg_pi);

	 printf("\n\n");

	 printf("Type MY_DOUBLE variable d=%lf\n", d);

	 printf("\n\n");

	 printf("Type CHARACTER variable ch=%c\n", ch);

	 
	 printf("Type chArray_01 Array chArray_01=%s\n\n", chArray_01);

	 printf("Type chArray_02 Array chArray_02:");
	

	 for (i = 0; i < (sizeof(chArray_02) / sizeof(chArray_02[0])); i++)
	 {
		 printf("%s\t", chArray_02[i]);
		
	 }
	 printf("\n\n");
	 printf("Type UNIT variable uint = %u\n", uint);
	 printf("Type HANDLE variable handle = %u\n",handle);
	 printf("Type hwnd variable hwnd=%u\n", hwnd);
	 printf("Type HINSTANCE variable hInstance=%u\n", hInstance);
	 printf("\n\n");

	 MY_INT x = 13;
	 MY_INT y = 45;
	 MY_INT ret;

	 ret = Add(x, y);
	 printf("ret=%d\n", ret);



return(0);

 }//end of main function

 MY_INT Add(MY_INT a, MY_INT b)
 {

	 MY_INT c;
	 c = a + b;
	 return(c);


 }