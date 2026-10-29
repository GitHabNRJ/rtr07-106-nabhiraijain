
//Win32 headers
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>    //for exec

//OPENGBL Related Header Files
#include<gl/GL.h>
#include<gl/GLU.h>

#include "OGL.h"


//OPENGL Related libraries 
#pragma comment(lib,"opengl32.lib")     //preprocessor dirctories no semicolor
#pragma comment(lib,"glu32.lib")


//Macros  
#define WIN_WIDTH 800
#define WIN_HEIGHT 600


//Global function declaration
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

// FullScreen Global  Variable declaration

BOOL gbFullScreen = FALSE;
HWND ghwnd = NULL;
DWORD dwstyle;
WINDOWPLACEMENT wpprev;
RECT rect;


//Variables related to File I/O
char gszlogfileName[] = "log.txt";
FILE* gpfile = NULL;

//Active window related variable 
BOOL gbActiveWindow = FALSE;

//Exit Key Press related 
BOOL gbEscapeKeyPressed = FALSE;


//OPENGL Related Global variables 
HDC ghdc = NULL;
HGLRC ghrc = NULL;

//Rotation Angles
//float nrj_angleTriangle = 0.0f;
//float nrj_angleRectangle = 0.0f;
float nrj_anglePyramid = 0.0f;
//Entry Point Function 
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int iCmdShow)
{
	
	//Function delcaration 
	int initialize(void);
	void display(void);
	void update(void);
	void uninitialize();

	//variable declarations
	WNDCLASSEX wndclass;
	HWND hwnd;
	MSG msg;
	TCHAR szAppName[] = TEXT("RTR6.0");
	BOOL bdone = FALSE;





	//code
    //Create Log File 
	gpfile = fopen(gszlogfileName, "w");

	if (gpfile == NULL)
	{
		MessageBox(HWND_DESKTOP,TEXT("lOG File Creation Failed"),TEXT("File I/O Error"),MB_OK);
		exit(0);      
	}
	else
	{
		fprintf(gpfile,"Program Started Successfully:\n");
        
	}

	//int xPos = (GetSystemMetrics(SM_CXSCREEN) - rect.right) / 2;
	//int yPos = (GetSystemMetrics(SM_CYSCREEN) - rect.bottom) / 2;

	wndclass.cbSize = sizeof(WNDCLASSEX);
	wndclass.style = CS_HREDRAW | CS_VREDRAW| CS_OWNDC;

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
	hwnd = CreateWindowEx(
		WS_EX_APPWINDOW,
		szAppName,
		TEXT("Nabhirai Jain OpenGL  Perspective Coloured 3-D Pyramid"),
		WS_OVERLAPPEDWINDOW|WS_CLIPCHILDREN|WS_CLIPSIBLINGS|WS_VISIBLE,
        //X-coordinate 
		//Y-Coordinate
	
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		

		WIN_WIDTH,
        WIN_HEIGHT,
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

	


  //Initialize 
	int result =initialize();
	if (result != 0)
	{
		fprintf(gpfile, "Innitialize function failed:\n");
		DestroyWindow(hwnd);
		hwnd = NULL;

	}
	else
	{
		fprintf(gpfile, "Initialize funtion() completed successfully:\n");
	}
	
	//Set this window as Forgrount & Active window 
	SetForegroundWindow(hwnd);
	SetFocus(hwnd);



//Game Loop 
	while (bdone == FALSE)
	{
		if (PeekMessage(&msg, NULL, 0, 0,PM_REMOVE))
		{
			if (msg.message == WM_QUIT)
			{
				bdone = TRUE;
			}
			else
			{
				TranslateMessage(&msg);
				DispatchMessage(&msg);
			}//else closed
		
		}//end of if peakMesage

		else
		{
			
			if (gbActiveWindow == TRUE)
			{
				if (gbEscapeKeyPressed == TRUE)
				{
					bdone = TRUE;
				}
				display();
				update();
			}
			//Render

	

		}//end of else 

	}//end of While Game loop

	//uninitialize 

	uninitialize();

return((int)msg.wParam);

}//end of WinMain
	
	//callback Function
	//WINDOW Procedure

	LRESULT CALLBACK WndProc(HWND hwnd, UINT iMsg, WPARAM wParam, LPARAM lParam)
	{
	//function prototype declaration 
		void togglefullscreen(void);
		void resize(int, int);
		void uninitialize(void);


		switch (iMsg)
		{
		case WM_CREATE:
			ZeroMemory((void*)&wpprev, sizeof(WINDOWPLACEMENT));
			wpprev.length = sizeof(WINDOWPLACEMENT);
			break;
		case WM_SETFOCUS:
			gbActiveWindow = TRUE;
			break;

		case WM_KILLFOCUS:
			gbActiveWindow = FALSE;
			break;
		
		case WM_ERASEBKGND:
			return(0);

		case WM_SIZE:
		
			resize(
				LOWORD(lParam),
				HIWORD(lParam)
			);

			break;

		case WM_KEYDOWN:
			switch (wParam)
			{
			case VK_ESCAPE:
				gbEscapeKeyPressed = TRUE;
				break;

			default:
				break;
			}
			break;



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

		case WM_CLOSE:
			uninitialize();
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



	int initialize(void)

	{
		//variable declarations 
		PIXELFORMATDESCRIPTOR pfd;
		int iPixedlFormatIndex = 0;

		//function declaration
		void printGLInfo(void);
		void resize(int, int);

		//code
	   //PIXELFORMATDESCRIPTOR INNITIALIZATION 
		ZeroMemory((void*)&pfd, sizeof(PIXELFORMATDESCRIPTOR));
		pfd.nSize = sizeof(PIXELFORMATDESCRIPTOR);
		pfd.nVersion = 1;
		pfd.dwFlags = PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER;
		pfd.iPixelType = PFD_TYPE_RGBA;
		pfd.cColorBits = 32;
		pfd.cRedBits = 8; 
		pfd.cGreenBits = 8;
		pfd.cBlueBits = 8;
		pfd.cAlphaBits = 8;
		pfd.cDepthBits = 32;
		
		//Get DC 
		ghdc = GetDC(ghwnd);
		if (ghdc == NULL)
		{
			fprintf(gpfile, "Get DC Function Failed:\n");
			return(-1);
        }

//Get Matching pixel format index using hdc & pfd 

		iPixedlFormatIndex = ChoosePixelFormat(ghdc, &pfd);
		if (iPixedlFormatIndex == 0)
		{
			fprintf(gpfile, "ChoosePixelFormat Failed:\n");
			return(-2);
		}

		//Select the pixel format of foundIndex 
		if (SetPixelFormat(ghdc, iPixedlFormatIndex, &pfd) == FALSE)
		{
			fprintf(gpfile, "SetPixelFormat Failed:\n");
			return(-3);
		}



		//Create Rendering Context using hdc,pfd and PixelFormatIndex & choosen pixel format index 
		ghrc = wglCreateContext(ghdc);
		if (ghrc == NULL)
		{
            fprintf(gpfile, "wglCreateContext Failed:\n");
			return(-4);
        }
		//make this rendering Context as Current Context 
		if (wglMakeCurrent(ghdc, ghrc) == FALSE)
		{
			fprintf(gpfile, "wglMakeCurrent Failed:\n");
			return(-5);
        }

		//Print GL Info
		printGLInfo();

		//Depth related function calls code 
		glShadeModel(GL_SMOOTH);
		glClearDepth(1.0f);
		glEnable(GL_DEPTH_TEST);
		glDepthFunc(GL_LEQUAL);
		glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);

		//From Here Onwards OpenGL Code starts 
		//Tell OPENGL to choose the colour to clear the screen 
		glClearColor(0.0f, 0.0f, 0.0f, 1.0f);



		//WarmUp resize 
		resize(WIN_WIDTH, WIN_HEIGHT);
		return 0;

	}

	void printGLInfo(void)
	{

		//code
		//print Open GL Information 

		fprintf(gpfile,"OPENGL Information: \n");
		fprintf(gpfile,"**********************\n");
		
		fprintf(gpfile, "OpenGL Vender : %s\n",glGetString(GL_RENDER));
		fprintf(gpfile, "OpenGL Renderer : %s\n", glGetString(GL_RENDERER));
		fprintf(gpfile, "OpenGL Version : %s\n", glGetString(GL_VERSION));

		
	    fprintf(gpfile, "**********************\n");


      }

	void resize(int width, int height)
	{
		//code

		//if height by accident become 0 or less than 0 then make height 1
		if (height <= 0)
		{
			height = 1;
		}

		//set the ViewPort
		glViewport(0, 0, (GLsizei)width, (GLsizei)height);
		//Set Matrix Projection Mode 
		glMatrixMode(GL_PROJECTION);
		//Set ToIdentity Matrix 
		glLoadIdentity();


		//Do Perspective Projection 
		gluPerspective(45.0f,
			(GLfloat)width /
			(GLfloat)height,
			0.1f,
			100.0f);
		
	} 

	void display(void)
	{
		//code
	   
		//Clear OpenGL Buffers
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		//SetMatrixToModuleViewMode
		glMatrixMode(GL_MODELVIEW);

		///Set ToIdentity Matrix 
		glLoadIdentity();

		//Translate triangle backwards by z
		glTranslatef(0.0f, 0.0f, -6.0f);
		glRotatef(nrj_anglePyramid, 0.0f, 1.0f, 0.0f);

	

		//Triangle Drawing Code 
		glBegin(GL_TRIANGLES);

		//Front FACE
		//APEX
		glColor3f(1.0f, 0.0f, 0.0f);   //RED
		glVertex3f(0.0f, 1.0f, 0.0f);

		//Lef-bottom
        glColor3f(0.0f, 1.0f, 0.0f);   //GREEN
		glVertex3f(-1.0f, -1.0f, 1.0f);

		//Right-bottom
	    glColor3f(0.0f, 0.0f, 1.0f);     //BLUE
		glVertex3f(1.0f, -1.0f, 1.0f);


		//Right FACE
		//APEX
		glColor3f(1.0f, 0.0f, 0.0f);   //RED
        glVertex3f(0.0f, 1.0f, 0.0f);

        //Lef-bottom
		glColor3f(0.0f, 0.0f, 1.0f);   //BLUE
		glVertex3f(1.0f, -1.0f, 1.0f);

		//Right-bottom
		glColor3f(0.0f, 1.0f, 0.0f);           //GREEN
		glVertex3f(1.0f, -1.0f, -1.0f);


		//Back FACE 
		//APEX
		glColor3f(1.0f, 0.0f, 0.0f);   //RED
		glVertex3f(0.0f, 1.0f, 0.0f);

		//LefT-bottom
		glColor3f(0.0f, 1.0f, 0.0f);   //GREEN
		glVertex3f(1.0f, -1.0f, -1.0f);

		//Right-bottom
		glColor3f(0.0f, 0.0f, 1.0f);           //BLUE
		glVertex3f(-1.0f, -1.0f, -1.0f);
		

		//left face 
		//APEX
		glColor3f(1.0f, 0.0f, 0.0f);   //RED
		glVertex3f(0.0f, 1.0f, 0.0f);

		//LEFT-Bottom
		glColor3f(0.0f, 0.0f, 1.0f);           //BLUE
		glVertex3f(-1.0f, -1.0f, -1.0f);

		//Right-bottom
		glColor3f(0.0f, 1.0f, 0.0f);   //GREEN
		glVertex3f(-1.0f, -1.0f, 1.0f);

		glEnd();



		//Swap the buffers
		SwapBuffers(ghdc);

	}

	void update(void)
	{
		//code

		nrj_anglePyramid = nrj_anglePyramid + 0.05f;
		if (nrj_anglePyramid >= 360.0f)
		{
			nrj_anglePyramid = nrj_anglePyramid - 360.0f;
		}
		/**
		
		nrj_anglePyramid = nrj_anglePyramid - 0.05f;
		if (nrj_anglePyramid <= 0.0f)
		{
			nrj_anglePyramid = nrj_anglePyramid + 360.0f;
		}
		**/

	}

	void uninitialize(void)
	{
		//Function declaration 
		void togglefullscreen(void);

		//code
		//If User is exiting in FullScreent than restore the FullScreen back to Normal 

		if (gbFullScreen == TRUE)
		{
			togglefullscreen();
			gbFullScreen = FALSE;
		}


		//make hdc as current context by Releasing Rendering context as Current Context 
		if (wglGetCurrentContext()==ghrc)
		{
			wglMakeCurrent(NULL, NULL);
		}

		//Delete the Rendering Context
		if (ghrc)
		{
			wglDeleteContext(ghrc);
			ghrc = NULL;
		}

		//Release the DC 
		
			if (ghdc)
			{
				ReleaseDC(ghwnd, ghdc);
				ghdc = NULL;
			}

			//Destroy Window
			if (ghwnd)
			{
				DestroyWindow(ghwnd);
			}
		//close the file 
		if (gpfile)
		{
			fprintf(gpfile, "Program Terminated Successfully:\n");

			fclose(gpfile);
			gpfile = NULL;

		}
	
	
	}


