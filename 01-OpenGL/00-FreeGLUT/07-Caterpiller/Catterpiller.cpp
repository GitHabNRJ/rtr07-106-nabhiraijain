//header files

#include <GL/freeglut.h>
#include <math.h>
//Global variable declarations
BOOL bFullScreen = FALSE;

//Entry point Function
void drawEmojiBase(float, float, float);
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

    glBegin(GL_TRIANGLES);
    drawEmojiBase(-0.55 , 0.75f, 0.15f);
    drawEmojiBase(-0.25, 0.75f, 0.15f);
    drawEmojiBase( 0.0, 0.75f, 0.15f);
    drawEmojiBase( 0.25, 0.75f, 0.15f);
    drawEmojiBase( 0.55,  0.75f, 0.15f);

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

void mouse(int button, int state, int x, int y)
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

// Function to draw a circle (for wheels)
void drawEmojiBase(float cx, float cy, float r)
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx, cy);   // centre of wheel of car

    for (int i = 0; i <= 360; i++)

    {
        float angle = i * 3.14159265f / 180.0f;
        float x = r * cosf(angle);
        float y = r * sinf(angle);
        glVertex2f(cx + x, cy + y);
    }
    glEnd();
}

