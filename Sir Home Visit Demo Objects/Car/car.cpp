//header files

#include <GL/freeglut.h>
#include <math.h>

#define WINDOW_WIDTH   800
#define WINDOW_HEIGHT  600

//Global variable declarations
bool bFullScreen = FALSE;
// Car position
float carN = -1.1f;
//Entry point Function

void drawCar(void);
void drawWheel(float, float, float);

int main(int argc, char *argv[])
{
    //local function declaration
    int initialize(void);
    void resize(int, int);
    void display(void);
    void keyboard(unsigned char, int, int);
    void mouse(int, int, int, int);
    void uninitialize(void);
 
    void update(int);

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Nabhirai Jain");

    initialize();

    glutReshapeFunc(resize);
    glutDisplayFunc(display);
    glutTimerFunc(0, update, 0);

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

    glColor3f(0.3f, 0.3f, 0.3f);
    glBegin(GL_POLYGON);
    
   
    glVertex3f(-1.0f, -1.0f, 0.0f);
    glVertex3f(1.0f,-1.0f, 0.0f);
    glVertex3f(1.0f, -0.6f, 0.0f);
    glVertex3f(-1.0f, -0.6f, 0.0f);

    glEnd();

    drawCar();


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

// Function to draw car
void drawCar() 
{
    // Car body
    glColor3f(1.0f, 0.0f, 0.0f); 

    glBegin(GL_QUADS);
    glVertex3f(carN + (-0.15f), -0.67f,0.0f);
    glVertex3f(carN + (0.15f), -0.67f,0.0f);
    glVertex3f(carN + (0.15f), -0.5f,0.0f);
    glVertex3f(carN + (-0.15f), -0.5f,0.0f);
    glEnd();

    // Car top
    glColor3f(0.8f, 0.0f, 0.0f);

    glBegin(GL_POLYGON);
    glVertex3f(carN + (-0.10f), -0.5f,0.0f);
    glVertex3f(carN + (0.10f), -0.5f,0.0f);
    glVertex3f(carN + (0.05f), -0.367f,0.0f);
    glVertex3f(carN + (-0.05f), -0.37,0.0f);
    glEnd();

    // Wheels
    glColor3f(0, 0, 0);
    drawWheel(carN + (-0.10f), -(0.7f), 0.03f);
    drawWheel(carN + (0.10f), -0.7f, 0.03f);
}


// Function to draw a circle (for wheels)
void drawWheel(float cx, float cy, float r)
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx, cy);   // centre of wheel of car

    for (int i = 0; i <= 360; i++)
    
    {
        float angle = i * 3.1416f / 180.0f;
        float x = r * cosf(angle);
        float y = r * sinf(angle);
        glVertex2f(cx + x, cy + y);
    }
    glEnd();
}

void update(int value) 

{
    carN = carN + 0.008f;

    if (carN > 1.1f)
        carN = -1.1f;

    glutPostRedisplay();
    glutTimerFunc(16, update, 0); // 
}