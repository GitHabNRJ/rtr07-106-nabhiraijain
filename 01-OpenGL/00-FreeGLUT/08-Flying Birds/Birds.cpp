//header files

#include <GL/freeglut.h>
#include<math.h>

//Global variable declarations
BOOL bFullScreen = FALSE;


float birdGroup1X = -1.2f;             //To store Starting X Position of Group1 birds : Starts from 
float birdGroup2X = -1.8f;             //To store Starting Y Position of Group1 birds
float birdGroup3X = -2.4f;             //To store Starting Z Position of Group1 birds
float wingAngle = 0.0f;                //current wing angle
bool wingUp = true;

void drawSingleBird(float x, float y, float scale, float phase);
void drawBirdGroup(float x, float y);

//Entry point Function
int main(int argc, char *argv[])
{
    //local function declaration
    int initialize(void);
    void resize(int, int);
    void display(void);
    void keyboard(unsigned char, int, int);
    void mouse(int, int, int, int);
    void uninitialize(void);
    void update(int value);

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

    glutTimerFunc(0, update, 0);

    glutMainLoop();

    return (0);

}
int initialize(void)
{
    //code
    glClearColor(0.53f, 0.81f, 0.98f, 1.0f);

    return(0);

}

void resize(int width, int height)
{
    //code
    glViewport(0, 0, width, height);

    
}

// Draw a single bird
void drawSingleBird(float x, float y, float scale, float phase)
{
    glPushMatrix();

    glTranslatef(x, y, 0.0f);
    glScalef(scale, scale, 1.0f);

    glColor3f(0.0f, 0.0f, 0.0f);
    glLineWidth(1.0f);


    // Left Wing
    glPushMatrix();
    glRotatef(wingAngle, 0.0f, 0.0f, 1.0f);

    glBegin(GL_LINES);
    glVertex3f(0.0f, 0.0f,0.0f);
    glVertex3f(-0.06f, 0.03f,0.0f);
    glEnd();

    glPopMatrix();

    // Right Wing
    glPushMatrix();
    glRotatef(-wingAngle, 0.0f, 0.0f, 1.0f);

    glBegin(GL_LINE_STRIP);

    glVertex3f(0.0f, 0.0f,0.0f);
    glVertex3f(-0.02f, 0.02f,0.0f);
    glVertex3f(-0.05f, 0.035f,0.0f);
    glVertex3f(-0.08f, 0.02f,0.0f);

    glEnd();

    glBegin(GL_POLYGON);

    for (int i = 0; i < 20; i++)
    {
        float a = i * 2.0f * 3.14159f / 20.0f;
        glVertex3f(0.01f * cos(a), 0.01f * sin(a),0.0f);
    }

    glEnd();

    glPopMatrix();
    glPopMatrix();
}

// Draw one flock (3 birds)
void drawBirdGroup(float x, float y)
{
    drawSingleBird(x, y, 1.0f, 0);
    drawSingleBird(x + 0.08f, y + 0.04f, 0.8f, 15);
    drawSingleBird(x + 0.16f, y - 0.02f, 0.9f, -15);
}


void display(void)
{
    //code
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    
    drawBirdGroup(birdGroup1X, 0.70f);
    drawBirdGroup(birdGroup2X, 0.45f);
    drawBirdGroup(birdGroup3X, 0.20f);
   

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

// Animation
void update(int value)
{
    birdGroup1X = birdGroup1X+0.004f;
    birdGroup2X = birdGroup2X+0.003f;
    birdGroup3X = birdGroup3X+0.005f;

    if (birdGroup1X > 1.2f)
        birdGroup1X = -1.3f;

    if (birdGroup2X > 1.2f)
        birdGroup2X = -1.6f;

    if (birdGroup3X > 1.2f)
        birdGroup3X = -2.0f;

    glutPostRedisplay();

    if (wingUp)
    {
        wingAngle += 2.0f;
        if (wingAngle >= 20.0f)
            wingUp = false;
    }
    else
    {
        wingAngle -= 2.0f;
        if (wingAngle <= -20.0f)
            wingUp = true;
    }

    glutTimerFunc(16, update, 0);   // ~60 FPS
}

void uninitialize()
{
    //code
}