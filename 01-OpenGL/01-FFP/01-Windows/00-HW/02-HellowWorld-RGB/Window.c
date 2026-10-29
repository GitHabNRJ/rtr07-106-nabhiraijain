
//Win32 headers
#include<windows.h>
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
	wndclass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
	wndclass.lpszClassName = szAppName;
	wndclass.lpszMenuName = NULL;
	wndclass.hIconSm = LoadIcon(NULL, IDI_APPLICATION);

	//Registration of window class
	RegisterClassEx(&wndclass);

	//Create window
	hwnd = CreateWindow(szAppName,
		TEXT("RTR 7.0 Nabhirai Jain"),
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
		//Local variable declarations 
		HDC hdc;
		RECT rc;
		TCHAR str[] = TEXT("Hello World!!!");
		PAINTSTRUCT ps;
		static int ipaintflag = -1;
	//code
		switch (iMsg)
		{

		//case WM_LBUTTONDOWN:
		case WM_PAINT:
			GetClientRect(hwnd, &rc);
			//hdc=GetDC(hwnd); //handle to device context 
			hdc = BeginPaint(hwnd, &ps);
			SetBkColor(hdc, RGB(0, 0, 0));

			//RGB(255,0,0)==>RED
			//RGB(0,255,0)==>GREEN
			//RGB(0,0,255)==>BLUE

			//RGB(255,255,0)==>YELLOW
			//RGB(0,255,255)==>Cyan
			//RGB(0255,0,255)==>Magenta 

			//RGB(255,128,0)==>Orange 

			if(ipaintflag==1)
			SetTextColor(hdc, RGB(255, 0, 0));
			else if (ipaintflag == 2)
			SetTextColor(hdc, RGB(0, 255, 0));
			else if (ipaintflag == 3)
				SetTextColor(hdc, RGB(0, 0, 255));
			else if (ipaintflag == 4)
				SetTextColor(hdc, RGB(255, 255, 0));
			else if (ipaintflag == 5)
				SetTextColor(hdc, RGB(0, 255, 255));
			else if (ipaintflag == 6)
				SetTextColor(hdc, RGB(255, 0, 255));
			else if (ipaintflag == 7)
				SetTextColor(hdc, RGB(255, 128, 0));


			DrawText(hdc, str, -1, &rc, DT_SINGLELINE | DT_CENTER | DT_VCENTER);
			//ReleaseDC(hwnd,hdc);
			EndPaint(hwnd, &ps);

		case WM_CHAR:
			switch (wParam)
			{
			case 'R':
			case 'r':
               ipaintflag = 1;
			   InvalidateRect(hwnd, NULL,TRUE);
			   MessageBox(hwnd, TEXT("R or r key is pressed"), TEXT("WM_CHAR"), MB_OK);
			   break;
			
			case 'G':
			case 'g':
				ipaintflag = 2;
				InvalidateRect(hwnd, NULL,TRUE);
				MessageBox(hwnd, TEXT("G or g key  is pressed"), TEXT("WM_CHAR"), MB_OK);
				break;

			case 'B':
			case 'b':
				ipaintflag = 3;
				InvalidateRect(hwnd,NULL,TRUE);
				MessageBox(hwnd, TEXT("B or b key  is pressed"), TEXT("WM_CHAR"), MB_OK);

				break;

			case 'Y':
			case 'y':
				ipaintflag = 4;
				InvalidateRect(hwnd,NULL,TRUE);
				MessageBox(hwnd, TEXT("Y or y key  is pressed"), TEXT("WM_CHAR"), MB_OK);
				break;

			case 'C':
			case 'c':
				ipaintflag = 5;
				InvalidateRect(hwnd,NULL,TRUE);
				MessageBox(hwnd, TEXT("C or c key  is pressed"), TEXT("WM_CHAR"), MB_OK);
				break;

			case 'M':
			case 'm':
				ipaintflag = 6;
				InvalidateRect(hwnd,NULL,TRUE);
				MessageBox(hwnd, TEXT("M or m key  is pressed"), TEXT("WM_CHAR"), MB_OK);
				break;

			case 'W':
			case 'w':
				ipaintflag = 7;
				InvalidateRect(hwnd,NULL,TRUE);
				MessageBox(hwnd, TEXT("W or w key  is pressed"), TEXT("WM_CHAR"), MB_OK);
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




