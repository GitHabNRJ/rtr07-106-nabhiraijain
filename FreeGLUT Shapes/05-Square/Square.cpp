//header files

#include <GL/freeglut.h>
#include <stdlib.h> 
#include <math.h> 


#define M_PI 3.1415926f
//Global variable declarations
BOOL bFullScreen = FALSE;

//Entry point Function


int main(int argc, char* argv[])
{
    //local function declaration
    int initialize(void);
    void resize(int, int);
    void display(void);
    void keyboard(unsigned char, int, int);
    void mouse(int, int, int, int);
    void uninitialize(void);
    


    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Nabhirai Jain");

    initialize();

    glutReshapeFunc(resize);
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutCloseFunc(uninitialize);

    glutMainLoop();

    return (0);

}
int initialize(void)
{
    //code
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

    return(0);

}

void resize(int width, int height)
{
    //code
    glViewport(0, 0, width, height);
}

void display(void)
{
    //code
    glClear(GL_COLOR_BUFFER_BIT);

  
    glLoadIdentity();

    glBegin(GL_QUADS);

    glVertex2f(0.5f, 0.5f);   // Top-right corner
    glVertex2f(-0.5f, 0.5f);  // Top-left corner

    glVertex2f(-0.5f, -0.5f); // Bottom-left corner
    glVertex2f(0.5f, -0.5f);  // Bottom-right corner



    glEnd();
  


  

glEnd();

    glutSwapBuffers();

}

void keyboard(unsigned char key, int x, int y)
{
    //code
    switch (key)
    {
    case 27:
        glutLeaveMainLoop();
        break;
    case 'F':
    case 'f':
        if (bFullScreen == FALSE)
        {
            glutFullScreen();
            bFullScreen = TRUE;

        }
        else
        {

            glutLeaveFullScreen();
            bFullScreen = FALSE;

        }
        break;
    default:
        break;
    }
}

void mouse(int button, int stack, int x, int y)
{
    //code
    switch (button)
    {
    case GLUT_LEFT_BUTTON:
        glutLeaveMainLoop();
        break;
    default:
        break;
    }
}

void uninitialize()
{
    //code
}




