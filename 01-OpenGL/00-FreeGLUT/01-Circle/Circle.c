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
    void drawCircle(float cx, float cy, float r, int num_segments);



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

    drawCircle(0.3, 0.3, 0.5, 4050);

    glutSwapBuffers();

}

void drawCircle(float cx, float cy, float r, int num_segments)
{
   
    int i;
    glBegin(GL_LINE_STRIP);  //Line strip connects each Vertex to next with a line P1-->P2-->P3-->P4.....Pn-1-->Pn .
                             // It does NOT connect the last point back to the first, so the circle will remain slightly open.
    
   
    //Loop to generate points on a circle
    

        //This loop runs num_segments times.
        //Each iteration generates one point on the circle.
    for (i = 0; i < num_segments; i++)
    {
        float theta = (2.0f * M_PI * i) / num_segments;


        float x = r * cosf(theta); // calculate the x component
        float y = r * sinf(theta); // calculate the y component


        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(x + cx, y + cy); // output vertex
    }
 
    glEnd();
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
    case 76:
        drawCircle(0, 0, 0.5, 2050);
        break;
    case 80:
        drawCircle(0, 0, 0.5, 2050);
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




