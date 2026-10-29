
//Win32 headers
#include<windows.h>

#include "Window.h"


//Global function declaration
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

//Global Variable declaration

BOOL gbFullScreen = FALSE;
HWND ghwnd = NULL;
DWORD dwstyle;
WINDOWPLACEMENT wpprev;

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
	wndclass.hIconSm =LoadIcon(hInstance, MAKEINTRESOURCE(MYICON));

	//Registration of window class
	RegisterClassEx(&wndclass);

	//Create window
	hwnd = CreateWindowEx(WS_EX_APPWINDOW,
		szAppName,
		TEXT("Nabhirai Jain -106  Full Screen Code"),
		WS_OVERLAPPEDWINDOW|WS_CLIPCHILDREN|WS_CLIPSIBLINGS|WS_VISIBLE,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		NULL,
		NULL,
		hInstance,
		NULL);

	ghwnd = hwnd;

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
	//function prototype declaration 
		void togglefullscreen(void);
		switch (iMsg)
		{
		case WM_CREATE:
			ZeroMemory((void*)&wpprev, sizeof(WINDOWPLACEMENT));
			wpprev.length = sizeof(WINDOWPLACEMENT);
			break;
			

			//Optimized code equivalent to F & f from 10 lines to 2 lines
			//toggleFullscreen();
			//bFullscreen = !bFullscreen;
		case WM_CHAR:
			switch (wParam)
			{
			case 'F':
			case 'f':
				
				if (gbFullScreen == FALSE)
				{
					togglefullscreen();
					gbFullScreen = TRUE;
				}
				else
				{
					togglefullscreen();
					gbFullScreen = FALSE;
				}


				break;

			default:
				break;

			}
			break;

		case WM_DESTROY:
			PostQuitMessage(0);
			break;

		default:
			break;
		}
	return(DefWindowProc(hwnd, iMsg, wParam, lParam));
}//end of WndProc

	
	//Stub functions
	void togglefullscreen(void)  //camel Notation
	{

		//Local Variable declarations 
		MONITORINFO mi;

		//code
		if (gbFullScreen == FALSE)
		{
			dwstyle = GetWindowLong(ghwnd, GWL_STYLE);  
		//	      GetWindowLongPtr()  only it is new

			if (dwstyle & WS_OVERLAPPEDWINDOW)
			{

				ZeroMemory((void*)&mi, sizeof(MONITORINFO));
				mi.cbSize = sizeof(MONITORINFO);
				
				if (GetWindowPlacement(ghwnd, &wpprev) && GetMonitorInfo(MonitorFromWindow(ghwnd,MONITORINFOF_PRIMARY), &mi))
				{
					SetWindowLong(ghwnd,GWL_STYLE,dwstyle & ~WS_OVERLAPPEDWINDOW);
					
					SetWindowPos(ghwnd, HWND_TOP, mi.rcMonitor.left, mi.rcMonitor.top, mi.rcMonitor.right - mi.rcMonitor.left, mi.rcMonitor.bottom - mi.rcMonitor.top,SWP_NOZORDER | SWP_FRAMECHANGED);


				}
			}
			ShowCursor(FALSE);
		}
		else
		{
			SetWindowPlacement(ghwnd,&wpprev);
			SetWindowLong(ghwnd,GWL_STYLE,dwstyle | WS_OVERLAPPEDWINDOW);    // | matlab add karte ho
			SetWindowPos(ghwnd, HWND_TOP, 0, 0, 0, 0,SWP_NOMOVE|SWP_NOSIZE|SWP_NOOWNERZORDER|SWP_NOZORDER|SWP_FRAMECHANGED);

			ShowCursor(TRUE);
		}


    }//end of ToggleFullScreen




