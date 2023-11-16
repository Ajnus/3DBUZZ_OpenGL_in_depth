#include <GL/glut.h>


void displayCB()
{
    // Clear the frame buffer
    glClear(GL_COLOR_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    // Draw the Triangle
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0);   // RED
    glVertex2f(0.0, 1.0);       // Top middle
    glColor3f(0.5, 1.0, 0.0);   // GREEN
    glVertex2f(1.0, -1.0);       // Bottom right
    glColor3f(0.5, 0.0, 1.0);   // BLUE
    glVertex2f(-1.0, -1.0);       // Bottom left
    glEnd();

    // Flush the graphic buffers
    glFlush();
    glutSwapBuffers();
}


int main (int argc, char* argv[])
{
    // A one time initialization of GLUT
    glutInit(&argc, argv);

    // GLUT_SINGLE will cause SERIOUS flickering
    glutInitDisplayMode(GLUT_DOUBLE); // didnt

    // Create our our window and set the title to Hello There
    int windowID = glutCreateWindow("Hello There");

    glutDisplayFunc(displayCB);

    // Set the clear color to BLACK
    glClearColor(0.0, 0.0, 0.0, 0.0);

    // Transfer control over to GLUT. It never returns from this call.
    glutMainLoop();

    // It never gets here
    return 0;

}