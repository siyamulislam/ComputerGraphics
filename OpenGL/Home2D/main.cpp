#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
    /* clear all pixels */
    glClear (GL_COLOR_BUFFER_BIT);

    //White Rectangle(Wall)
    glColor3ub (255, 255, 255); //RGB White Color
    glBegin(GL_POLYGON);
    glVertex2d (101,30);
    glVertex2d (621,30);
    glVertex2d (621,240);
    glVertex2d (101,240);
    glEnd();

    //Green Triangle (Shade)
    glColor3ub (0, 255, 0); //RGB Green Color
    glBegin(GL_POLYGON);
    glVertex2d (101,240);
    glVertex2d (621,240);
    glVertex2d (361,368);
    glEnd();

    //Blue Rectangle(Door)
    glColor3ub (0, 0, 255); //RGB Blue Color
    glBegin(GL_POLYGON);
    glVertex2d (302.5,30);
    glVertex2d (420.5,30);
    glVertex2d (420.5,198);
    glVertex2d (302.5,198);
    glEnd();

    //Red Rectangle(Left Window)
    glColor3ub (255, 0, 0); //RGB Red Color
    glBegin(GL_POLYGON);
    glVertex2d (142.5,99);
    glVertex2d (260.5,99);
    glVertex2d (260.5,171);
    glVertex2d (142.5,171);
    glEnd();

    //Red Rectangle(Right Window)
    glColor3ub (255, 0, 0); //RGB Red Color
    glBegin(GL_POLYGON);
    glVertex2d (466.5,99);
    glVertex2d (584.5,99);
    glVertex2d (584.5,171);
    glVertex2d (466.5,171);
    glEnd();

    glFlush ();
}
void init (void)
{
    /* select clearing (background) color */
    glClearColor (0.0, 0.0, 0.0, 0.0);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,722,00,472);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (722, 492);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("~~House~~   (ID:171-15-8865)");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}
