//header files

#include <GL/freeglut.h>
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
    glutCreateWindow("01-Sceneary");

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

    //-------------MOUNTAINS---------------------
    glColor3f(-1.0f, 0.0f, 0.0f);


    // ---- SKY ----
    glColor3f(0.5, 0.8, 1.0); // light blue
    glBegin(GL_POLYGON);
    glVertex3f(-1.0f, 1.0f,0.0f);
    glVertex3f(1.0f, 1.0f,0.0f);
    glVertex3f(1.0f, 0.0f,0.0f);
    glVertex3f(-1.0f, 0.0f,0.0f);
    glEnd();


    glColor3f(0.4, 0.3, 0.2); // light blue
    glBegin(GL_TRIANGLES);

    //Mountain 1
    glVertex3f(-0.9f, 0.0f, 0.0f);
    glVertex3f(-0.5f, 0.7f, 0.0f);
    glVertex3f(-0.1f, 0.0f, 0.0f);

    //Mountain2
    glVertex3f(-0.3f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.8f, 0.0f);
    glVertex3f(0.3f, 0.0f, 0.0f);

    //Mountain3
    glVertex3f(0.2f, 0.0f, 0.0f);
    glVertex3f(0.6f, 0.6f, 0.0f);
    glVertex3f(1.0f, 0.0f, 0.0f);
    glEnd();

    // ---- Base Grass ----
    glColor3f(0.0f, 1.0f, 0.0f); // light blue
    glBegin(GL_POLYGON);
    glVertex3f(-1.0f, -1.0f, 0.0f);
    glVertex3f(1.0f, -1.0f, 0.0f);
    glVertex3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-1.0f, 0.0f, 0.0f);
    glEnd();


    // ---- Road ----
    glColor3f(0.28, 0.28, 0.28);
    glBegin(GL_POLYGON);
    glVertex3f(-0.05f, 0.0f,0.0f);
    glVertex3f(-1.0f, -1.0f,0.0f);
    glVertex3f(-0.60f, -1.0f,0.0f);
    glVertex3f(0.05f, 0.0f,0.0f);
    glEnd();

    //---- HOUSE BASE ----
    glColor3f(0.8, 0.4, 0.2);
    glBegin(GL_QUADS);
    glVertex3f(0.2f, -0.6f,0.0f);
    glVertex3f(0.4f, -0.6f,0.0f);
    glVertex3f(0.4f, -0.4f,0.0f);
    glVertex3f(0.2f, -0.4f,0.0f);
    glEnd();

    // ---- ROOF ----
    glColor3f(0.5, 0.1, 0.1);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.18f, -0.4f,0.0f);
    glVertex3f(0.42f, -0.4f,0.0f);
    glVertex3f(0.3f, -0.3f,0.0f);
    glEnd();

    // ---- DOOR ----
    glColor3f(0.3, 0.1, 0.05);
    glBegin(GL_QUADS);
    glVertex3f(0.28f, -0.6f,0.0f);
    glVertex3f(0.28f, -0.5f,0.0f);
    glVertex3f(0.32f, -0.5f,0.0f);
    glVertex3f(0.32f, -0.6f,0.0f);
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



