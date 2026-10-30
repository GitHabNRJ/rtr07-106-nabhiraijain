#include <GL/freeglut.h>

// Bird group positions
float birdGroup1X = -1.2f;
float birdGroup2X = -1.8f;
float birdGroup3X = -2.4f;

// Draw a single bird
void drawBird(float x, float y, float scale)
{
    glPushMatrix();
    glTranslatef(x, y, 0.0f);
    glScalef(scale, scale, 1.0f);

    glColor3f(0.0f, 0.0f, 0.0f);

    // Left Wing
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.05f, 0.00f);
    glVertex2f(-0.02f, 0.03f);
    glVertex2f(0.00f, 0.00f);
    glEnd();

    // Right Wing
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.00f, 0.00f);
    glVertex2f(0.02f, 0.03f);
    glVertex2f(0.05f, 0.00f);
    glEnd();

    glPopMatrix();
}

// Draw one flock (3 birds)
void drawBirdGroup(float x, float y)
{
    drawBird(x, y, 1.0f);
    drawBird(x + 0.08f, y + 0.04f, 0.8f);
    drawBird(x + 0.16f, y - 0.02f, 0.9f);
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    drawBirdGroup(birdGroup1X, 0.70f);
    drawBirdGroup(birdGroup2X, 0.45f);
    drawBirdGroup(birdGroup3X, 0.20f);

    glutSwapBuffers();
}

// Animation
void update(int value)
{
    birdGroup1X += 0.004f;
    birdGroup2X += 0.003f;
    birdGroup3X += 0.005f;

    if (birdGroup1X > 1.2f)
        birdGroup1X = -1.3f;

    if (birdGroup2X > 1.2f)
        birdGroup2X = -1.6f;

    if (birdGroup3X > 1.2f)
        birdGroup3X = -2.0f;

    glutPostRedisplay();

    glutTimerFunc(16, update, 0);   // ~60 FPS
}

void init()
{
    glClearColor(0.53f, 0.81f, 0.98f, 1.0f); // Sky blue
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Flying Birds");

    init();

    glutDisplayFunc(display);
    glutTimerFunc(0, update, 0);

    glutMainLoop();
    return 0;
}