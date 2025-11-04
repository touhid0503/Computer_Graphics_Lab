#include <GL/glut.h>
#include<cmath>

int r = 150;

void dcd()
{

    glBegin(GL_POINTS);

    for (int x = 0; x <= r; x++)
    {
        int y = (int)(sqrt(r * r - x * x));
        glVertex2i(x, y);
        glVertex2i(x, -y);
        glVertex2i(-x, -y);
        glVertex2i(-x, y);
    }
    glEnd();
    glFlush();
}

void mcd()
{
    int x=0;
    int y=r;
    int d=1-r;
    glBegin(GL_POINTS);

    while(x<=y)
    {
        glVertex2i(x, y);
        glVertex2i(y, x);
        glVertex2i(y, -x);
        glVertex2i(x, -y);
        glVertex2i(-x, -y);
        glVertex2i(-y, -x);
        glVertex2i(-y, x);
        glVertex2i(-x, y);

        if (d<=0)
        {
            x+=1;
            d+=2*x+3;

        }
        else
        {
            y-=1;
            x+=1;
            d+=2*x-2*y+5;
        }
    }

    glEnd();
    glFlush();
}

void translation()
{
    float x1 = 4.0f, y1 = 6.0f;
    float x2 = 2.0f, y2 = 2.0f;
    float x3 = 6.0f, y3 = 2.0f;

    float tx = 2.0f;
    float ty = 4.0f;

    float x1_t = x1 + tx, y1_t = y1 + ty;
    float x2_t = x2 + tx, y2_t = y2 + ty;
    float x3_t = x3 + tx, y3_t = y3 + ty;


    glColor3f(1, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(x1, y1);
    glVertex2f(x2, y2);

    glVertex2f(x2, y2);
    glVertex2f(x3, y3);

    glVertex2f(x3, y3);
    glVertex2f(x1, y1);
    glEnd();


    glColor3f(0, 1, 0);
    glBegin(GL_LINES);
    glVertex2f(x1_t, y1_t);
    glVertex2f(x2_t, y2_t);

    glVertex2f(x2_t, y2_t);
    glVertex2f(x3_t, y3_t);

    glVertex2f(x3_t, y3_t);
    glVertex2f(x1_t, y1_t);
    glEnd();
}

void scaling()
{
    float x1 = 4.0f, y1 = 6.0f;
    float x2 = 2.0f, y2 = 2.0f;
    float x3 = 6.0f, y3 = 2.0f;

    float Sx = 2.0f;
    float Sy = 2.0/3.0f;

    float x1_t = x1 * Sx, y1_t = y1 * Sy;
    float x2_t = x2 * Sx, y2_t = y2 * Sy;
    float x3_t = x3 * Sx, y3_t = y3 * Sy;


    glColor3f(1, 0, 0);
    glBegin(GL_LINES);
        glVertex2f(x1, y1);
        glVertex2f(x2, y2);

        glVertex2f(x2, y2);
        glVertex2f(x3, y3);

        glVertex2f(x3, y3);
        glVertex2f(x1, y1);
    glEnd();


    glColor3f(0, 1, 0);
    glBegin(GL_LINES);
        glVertex2f(x1_t, y1_t);
        glVertex2f(x2_t, y2_t);

        glVertex2f(x2_t, y2_t);
        glVertex2f(x3_t, y3_t);

        glVertex2f(x3_t, y3_t);
        glVertex2f(x1_t, y1_t);
    glEnd();
}



void rotation()
{
    float x1 = 4.0f, y1 = 6.0f;
    float x2 = 2.0f, y2 = 2.0f;
    float x3 = 6.0f, y3 = 2.0f;

    float theta=45;
    float rad=theta*3.1416/180;

    float x1_t = x1 * cos(rad)-y1*sin(rad), y1_t = y1 * cos(rad)+x1*sin(rad);
    float x2_t = x2 * cos(rad)-y2*sin(rad), y2_t = y2 * cos(rad)+x2*sin(rad);
    float x3_t = x3 * cos(rad)-y3*sin(rad), y3_t = y3 * cos(rad)+x3*sin(rad);


    glColor3f(1, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(x1, y1);
    glVertex2f(x2, y2);

    glVertex2f(x2, y2);
    glVertex2f(x3, y3);

    glVertex2f(x3, y3);
    glVertex2f(x1, y1);
    glEnd();


    glColor3f(0, 1, 0);
    glBegin(GL_LINES);
    glVertex2f(x1_t, y1_t);
    glVertex2f(x2_t, y2_t);

    glVertex2f(x2_t, y2_t);
    glVertex2f(x3_t, y3_t);

    glVertex2f(x3_t, y3_t);
    glVertex2f(x1_t, y1_t);
    glEnd();
}

void reflection()
{
    float x1 = 4.0f, y1 = 6.0f;
    float x2 = 2.0f, y2 = 2.0f;
    float x3 = 6.0f, y3 = 2.0f;



    float x1_t = x1, y1_t = -y1 ;
    float x2_t = x2, y2_t = -y2;
    float x3_t = x3, y3_t = -y3;


    float x11_t = -x1, y11_t = y1 ;
    float x22_t = -x2, y22_t = y2;
    float x33_t = -x3, y33_t = y3;



    glColor3f(1, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(x1, y1);
    glVertex2f(x2, y2);

    glVertex2f(x2, y2);
    glVertex2f(x3, y3);

    glVertex2f(x3, y3);
    glVertex2f(x1, y1);
    glEnd();


    glColor3f(0, 1, 0);
    glBegin(GL_LINES);
    glVertex2f(x1_t, y1_t);
    glVertex2f(x2_t, y2_t);

    glVertex2f(x2_t, y2_t);
    glVertex2f(x3_t, y3_t);

    glVertex2f(x3_t, y3_t);
    glVertex2f(x1_t, y1_t);
    glEnd();

    glColor3f(0, 0, 1);
    glBegin(GL_LINES);
    glVertex2f(x11_t, y11_t);
    glVertex2f(x22_t, y22_t);

    glVertex2f(x22_t, y22_t);
    glVertex2f(x33_t, y33_t);

    glVertex2f(x33_t, y33_t);
    glVertex2f(x11_t, y11_t);
    glEnd();
}
void shearing()
{
    float x1 = 4.0f, y1 = 6.0f;
    float x2 = 2.0f, y2 = 2.0f;
    float x3 = 6.0f, y3 = 2.0f;

    float shr=3;

    float x1_t = x1+shr*y1, y1_t = y1 ;
    float x2_t = x2+shr*y2, y2_t = y2;
    float x3_t = x3+shr*y3, y3_t = y3;


    float x11_t = x1, y11_t = y1+shr*x1 ;
    float x22_t = x2, y22_t = y2+shr*x2;
    float x33_t = x3, y33_t = y3+shr*x3;



    glColor3f(1, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(x1, y1);
    glVertex2f(x2, y2);

    glVertex2f(x2, y2);
    glVertex2f(x3, y3);

    glVertex2f(x3, y3);
    glVertex2f(x1, y1);
    glEnd();


    glColor3f(0, 1, 0);
    glBegin(GL_LINES);
    glVertex2f(x1_t, y1_t);
    glVertex2f(x2_t, y2_t);

    glVertex2f(x2_t, y2_t);
    glVertex2f(x3_t, y3_t);

    glVertex2f(x3_t, y3_t);
    glVertex2f(x1_t, y1_t);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(x11_t, y11_t);
    glVertex2f(x22_t, y22_t);

    glVertex2f(x22_t, y22_t);
    glVertex2f(x33_t, y33_t);

    glVertex2f(x33_t, y33_t);
    glVertex2f(x11_t, y11_t);
    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    //dcd(); //init
    //mcd(); //init
    //translation(); //init2
    //scaling(); //init2
    //rotation(); //init2
    //reflection(); //init2
    //shearing(); //init2
    glutSwapBuffers();

}

void init()
{
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glColor3f(1.0, 1.0, 1.0);
    glPointSize(3.0);
    gluOrtho2D(-500, 500, -500, 500);
}
void init2()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-25, 25, -25, 25);
    glMatrixMode(GL_MODELVIEW);
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("");
    init2();
    //init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
