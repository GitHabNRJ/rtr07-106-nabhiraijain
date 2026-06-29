
#include <GL/freeglut.h>
#include <math.h>

// Car position
float carX = -1.0f;

// Function to draw a circle (for wheels)
void drawCircle(float cx, float cy, float r) {
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        float angle = i * 3.1416f / 180;
        float x = r * cos(angle);
        float y = r * sin(angle);
        glVertex2f(cx + x, cy + y);
    }
    glEnd();
}

// Function to draw car
void drawCar() {
    // Car body
    glColor3f(1.0, 0.0, 0.0);  // Red
    glBegin(GL_POLYGON);
    glVertex2f(carX + 0, 100);
    glVertex2f(carX + 120, 100);
    glVertex2f(carX + 120, 150);
    glVertex2f(carX + 0, 150);
    glEnd();

    // Car top
    glColor3f(0.8, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(carX + 20, 150);
    glVertex2f(carX + 100, 150);
    glVertex2f(carX + 80, 190);
    glVertex2f(carX + 40, 190);
    glEnd();

    // Wheels
    glColor3f(0, 0, 0);
    drawCircle(carX + 30, 90, 15);
    drawCircle(carX + 90, 90, 15);
}

// Display function
void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Draw road
    glColor3f(0.3, 0.3, 0.3);
    glBegin(GL_POLYGON);
    glVertex2f(0, 0);
    glVertex2f(800, 0);
    glVertex2f(800, 100);
    glVertex2f(0, 100);
    glEnd();

    drawCar();

    glFlush();
}

// Timer for animation
void update(int value) {
    carX += 2.0f;  // Speed

    // Reset when off screen
    if (carX > 800)
        carX = -150;

    glutPostRedisplay();
    glutTimerFunc(16, update, 0); // ~60 FPS
}

// Initialization
void init() {
    glClearColor(0.5, 0.8, 1.0, 1.0); // Sky blue
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, 800, 0, 600);
}

// Main function
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Moving Car - FreeGLUT");

    init();

    glutDisplayFunc(display);
    glutTimerFunc(0, update, 0);

    glutMainLoop();
    return 0;
}
