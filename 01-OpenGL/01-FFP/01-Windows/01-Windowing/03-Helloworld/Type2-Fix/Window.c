
//Win32 headers
#include<windows.h>

#include "Window.h"


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
	wndclass.hbrBackground =(HBRUSH)GetStockObject(BLACK_BRUSH);
	wndclass.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(MYICON));
	wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
	wndclass.lpszClassName = szAppName;
	wndclass.lpszMenuName = NULL;
	wndclass.hIconSm = LoadIcon(hInstance, MAKEINTRESOURCE(MYICON));

	//Registration of window class
	RegisterClassEx(&wndclass);

	//Create window
	hwnd = CreateWindow(szAppName,
		TEXT("RTR7: Nabhirai Jain"),
		WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
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

		//Local variable declarations 
		HDC hdc;
		RECT rc;
		TCHAR str[] = TEXT("Hello World!!!");
		PAINTSTRUCT ps;


		switch (iMsg)
		{
		
	
		case WM_PAINT: 
			GetClientRect(hwnd,&rc);
			hdc=GetDC(hwnd); //handle to device context 
			hdc = BeginPaint(hwnd, &ps);
			SetBkColor(hdc,RGB(0,0,0));
			
			//RGB(255,0,0)==>RED
			//RGB(0,255,0)==>GREEN
			//RGB(0,0,255)==>BLUE
			
			//RGB(255,255,0)==>YELLOW
			//RGB(0,255,255)==>Cyan
			//RGB(0255,0,255)==>Magenta 

			//RGB(255,128,0)==>Orange 

			SetTextColor(hdc, RGB(0, 255, 0));
			DrawText(hdc, str,-1,&rc,DT_SINGLELINE|DT_CENTER|DT_VCENTER);
			ReleaseDC(hwnd,hdc);
		//	EndPaint(hwnd, &ps);



                             
break;

		case WM_DESTROY:
			PostQuitMessage(0);
			break;
		default:
			break;
		}
	return(DefWindowProc(hwnd, iMsg, wParam, lParam));
}//end of WndProc




	                                                                             