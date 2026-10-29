
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

//Rotation Angles

float nrj_angleCube = 0.0f;

//Texture related Global variables 

GLuint TEXTURE_KUNDALI;

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
		TEXT("Nabhirai Jain OpenGL  29-Texture\01-One3DShape\02-Cube"),
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
		BOOL loadGLTexture(GLuint*, TCHAR[]);

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

		//Load Textures 
		//For STONRE
	

		//For Kundali Texture 
		if (loadGLTexture(&TEXTURE_KUNDALI, MAKEINTRESOURCE(IDBITMAP_KUNDALI)) == FALSE)
		{
			fprintf(gpfile, "In initialize LoadGLTexture failed during generation of Kundali Texture: \n");
			return(-6);
		}

		//Enable Texturing 
		glEnable(GL_TEXTURE_2D);   //We have enabled the 2D Texturing in image u can't see depth that's why depth 
		                           //3D Texture in PP of Noise 


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
	BOOL loadGLTexture(GLuint* TEXTURE, TCHAR imageResourceID[])
	{
		//Variable declarations 
		HBITMAP hBitmap = NULL;
		BOOL bResult = FALSE;
		BITMAP bmp;

		//CODE
		//load the bitmap AS IMAGE

		hBitmap = (HBITMAP)LoadImage(GetModuleHandle(NULL), imageResourceID, IMAGE_BITMAP, 0, 0, LR_CREATEDIBSECTION);
		//Error checking 
		if (hBitmap)
		{
			bResult = TRUE;
			//Get Bitmap structure from the loaded Bitmap image
			GetObject(hBitmap, sizeof(BITMAP), &bmp);//1st valid handle hBitmap
			                                         //2nd size of structure bharun paije 
			                                        // 3rd structure cha rekama variable padva &bmp jaata na khali jail aatana load kelele bitmap chi mahiti aachel 
			
				//Generate OpenGL Texture Objext
			glGenTextures(1, TEXTURE);        //1st--How many Generate objectures objects
			                                  //2nd addrress of Texture 
			                                  //Isse rikama texture objecture taiyaar hoto 

			//Bind to the newly created Empty structure Objext 
			glBindTexture(GL_TEXTURE_2D, *TEXTURE);
			                                 //1st -Bind kuthe karun 
			                                 //2nd -Bind konala karun 
			//Triplet Gen , Bind , Unbind 

			//Unpack the image in memory for faster loading 
			glPixelStorei(GL_UNPACK_ALIGNMENT, 4);

			//Memory madhe majhi image Unpack kaar and after unpack allignment madhe thev 
			//  4-Memory madhe R,G,B,A aisa unpack kaar
			//Advantage of unpack loading is fast 

			//Tell me how u want ur texture 

			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);  //Telling texture la parameter de 
			                                                                   //1st parameter Texture Binding point 
			                                                                   //2nd which parameter u are giving GL_TEXTURE_MAG_FILTER 
			                                                                   //MAG-Jeva object motha hoye  High quality vapar 
																			   // 3rd GL_LINEAR 
			                                                      
			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER,GL_LINEAR_MIPMAP_LINEAR);   //MIN-Minification object chota aur dur jaiyel

			gluBuild2DMipmaps(GL_TEXTURE_2D, 3, bmp.bmWidth, bmp.bmHeight, GL_BGR_EXT, GL_UNSIGNED_BYTE,bmp.bmBits);                                           // GLU build kaar mip maps taiyaar kaar
				                                                          //combination of 2 functions which separately to be used in PP 
			                                                           	//1st Binding point or target 
				                                                        //2nd number of colours 
				                                                        //3rd width of image
				                                                        //4th Height 


			//unbind the texture 
			glBindTexture(GL_TEXTURE_2D, 0);                    //During unbind 2nd paramer 0 if proper data bind 

			DeleteObject(hBitmap);

			hBitmap = NULL;

		}
		
		return bResult;


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

		//Cube code starts from here.
		///Set ToIdentity Matrix 
		glLoadIdentity();

		//Translate triangle backwards by z
		glTranslatef(1.6f, 0.0f, -6.0f);

		glScalef(0.75f, 0.75f, 0.75f);

		glRotatef(nrj_angleCube, 1.0f, 0.0f, 0.0f);   //x-Rotation
		glRotatef(nrj_angleCube, 0.0f, 1.0f, 0.0f);   //Y-Rotation
		glRotatef(nrj_angleCube, 0.0f, 0.0f, 1.0f);   //Z-Rotation 

		glBindTexture(GL_TEXTURE_2D,TEXTURE_KUNDALI);

		//Cube Drawing Code 
		glBegin(GL_QUADS);

		/***Front Face*******/
		glTexCoord2f(1.0f, 1.0f);
        glVertex3f(1.0f, 1.0f, 1.0f);      // Top-Right	of front
		glTexCoord2f(0.0f, 1.0f);
        glVertex3f(-1.0f, 1.0f, 1.0f);      // Top-Left of front 
		glTexCoord2f(0.0f, 0.0f);
        glVertex3f(-1.0f, -1.0f, 1.0f);     // Bottom-Left of front 
		glTexCoord2f(1.0f, 0.0f);
        glVertex3f(1.0f, -1.0f, 1.0f);      // Bottom-Right of front 
        
		
		
		
		/***Right Face****/
		glTexCoord2f(1.0f, 1.0f);
       glVertex3f(1.0f, 1.0f, -1.0f);   // Top-Right of Right 
	   glTexCoord2f(0.0f, 1.0f);
       glVertex3f(1.0f, 1.0f, 1.0f);  // Top-Left of right 
	   glTexCoord2f(0.0f, 0.0f);
       glVertex3f(1.0f, -1.0f, 1.0f);  // Bottom-Left of right 
	   glTexCoord2f(1.0f, 0.0f);
	   glVertex3f(1.0f, -1.0f, -1.0f);  // Bottom-Right of right 

		
		
		/***Back Face****/
	   glTexCoord2f(1.0f, 1.0f);
        glVertex3f(1.0f, 1.0f, -1.0f);      //Top -right  of back 
		glTexCoord2f(0.0f, 1.0f);
        glVertex3f(-1.0f, 1.0f, -1.0f); 	//Top -left  of back 
		glTexCoord2f(0.0f, 0.0f);
        glVertex3f(-1.0f, -1.0f, -1.0f);   // Bottom -left  of back 
		glTexCoord2f(1.0f, 0.0f);
        glVertex3f(1.0f, -1.0f, -1.0f);   // Bottom -right of back  


		/***Left Face****/
		glTexCoord2f(1.0f, 1.0f);
	   glVertex3f(-1.0f, 1.0f, 1.0f); 	// Top -Right of left
	   glTexCoord2f(0.0f, 1.0f);
       glVertex3f(-1.0f, 1.0f, -1.0f);  // Top-Left of left 
	   glTexCoord2f(0.0f, 0.0f);
	   glVertex3f(-1.0f, -1.0f, -1.0f);  // Bottom-Left of left 
	   glTexCoord2f(1.0f, 0.0f);
       glVertex3f(-1.0f, -1.0f, 1.0f);  // Bottom-Right of left 


		//**********Top face****************/
	   glTexCoord2f(1.0f, 1.0f);
	    glVertex3f(1.0f, 1.0f, -1.0f);   // Top -Right of top 
		glTexCoord2f(0.0f, 1.0f);
		glVertex3f(-1.0f, 1.0f, -1.0f);  // Top -Left of top 
		glTexCoord2f(0.0f, 0.0f);
        glVertex3f(-1.0f, 1.0f, 1.0f);  // Bottom-Left of top 
		glTexCoord2f(1.0f, 0.0f);
        glVertex3f(1.0f, 1.0f, 1.0f);  // Bottom -Right of top 


		/***Bottom Face****/
		glTexCoord2f(1.0f, 1.0f);
		glVertex3f(1.0f, -1.0f, 1.0f); // Top -Right of bottom
		glTexCoord2f(0.0f, 1.0f);
        glVertex3f(-1.0f, -1.0f, 1.0f); // Top-Lef of bottom 
		glTexCoord2f(0.0f, 0.0f);
        glVertex3f(-1.0f, -1.0f, -1.0f); // Bottom-Leftof bottom 
		glTexCoord2f(1.0f, 0.0f);
        glVertex3f(1.0f, -1.0f, -1.0f);// Bottom-Right of bottom 

		glEnd();

		glBindTexture(GL_TEXTURE_2D, 0);

		//Swap the buffers
		SwapBuffers(ghdc);

	}

	void update(void)
	{
		//code

	
		
		nrj_angleCube = nrj_angleCube + 0.05f;
		if (nrj_angleCube >= 360.0f)
		{
			nrj_angleCube = nrj_angleCube - 360.0f;
		}

		/**
		nrj_anglePyramid = nrj_anglePyramid - 0.05f;
		if (nrj_anglePyramid <= 0.0f)
		{
			nrj_anglePyramid = nrj_anglePyramid + 360.0f;
		}

		nrj_angleCube = nrj_angleCube - 0.05f;
		if (nrj_angleCube <= 0.0f)
		{
			nrj_angleCube = nrj_angleCube + 360.0f;
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

		if (TEXTURE_KUNDALI)
		{

			glDeleteTextures(1, &TEXTURE_KUNDALI);   //1-eK VADI eK TEXTURE DELTE KAAR 
			TEXTURE_KUNDALI = 0;                             //Not null since TEXTURE_KUNDALI is not pointer 
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


