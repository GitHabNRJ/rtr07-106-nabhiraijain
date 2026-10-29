
//Win32 headers
#include<windows.h>

#include "Window.h"

//Macros 
#define WIN_WIDTH 800
#define WIN_HEIGHT 600



//Global function declaration
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

//Entry Point Function 
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int iCmdShow)
{
	//variable declarations
	WNDCLASSEX wndclass;
	HWND hwnd;
	MSG msg;
	TCHAR szAppName[] = TEXT("RTR7.0");

	//code
	wndclass.cbSize = sizeof(WNDCLASSEX);
	wndclass.style = CS_HREDRAW | CS_VREDRAW;
	wndclass.cbClsExtra = 0;
	wndclass.cbWndExtra = 0;
	wndclass.lpfnWndProc = WndProc;


	wndclass.hInstance = hInstance;
	wndclass.hbrBackground =(HBRUSH)GetStockObject(WHITE_BRUSH);

	wndclass.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(MYICON));

	wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
	wndclass.lpszClassName = szAppName;
	wndclass.lpszMenuName = NULL;
	wndclass.hIconSm = LoadIcon(hInstance, MAKEINTRESOURCE(MYICON));

	//Registration of window class
	RegisterClassEx(&wndclass);

	//Centering 
	int screenWidth = GetSystemMetrics(SM_CXSCREEN);            //Gives Screen Width 
	int screenHeight = GetSystemMetrics(SM_CYSCREEN);           //gIVES Heigh of Tile 


	//Create window
	hwnd = CreateWindow(szAppName,
		TEXT(" RTR7: Nabhirai Jain"),
		WS_OVERLAPPEDWINDOW,
		screenWidth/2-WIN_WIDTH/2,
		screenHeight/2-WIN_HEIGHT/2,
		WIN_WIDTH,
		WIN_HEIGHT,
		NULL,
		NULL,
		hInstance,
		NULL);

	//if (NULL == hwnd) {
		//MessageBox(NULL,Text"Window Not Created"),Text("Error"),0);
		//exit(0);
	//}//end of if block

	ShowWindow(hwnd,iCmdShow);

	//Paint the backgrount of the window 

	UpdateWindow(hwnd);
     //Message loop
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return((int)msg.wParam);

}//end of WinMain
	
	//callback Function
	//WINDOW Procedure

	LRESULT CALLBACK WndProc(HWND hwnd, UINT iMsg, WPARAM wParam, LPARAM lParam)
	{
	//code
		switch (iMsg)
		{
		case WM_DESTROY:
			PostQuitMessage(0);
			break;
		default:
			break;
		}
	return(DefWindowProc(hwnd, iMsg, wParam, lParam));
}//end of WndProc




