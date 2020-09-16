#include<cstdio>
#include<stdio.h>
#include<math.h>
#include<GL/glu.h>
#include<GL/glut.h>

GLfloat position = 0.0f;
GLfloat speed = 0.5f;

void update(int value) {

    if(position >720.0 )
        position -= 1100.00f;

    position -= speed;


	glutPostRedisplay();

	glutTimerFunc(100, update, 0);
}


GLfloat position1 = 0.0f;
GLfloat speed1 = 2.5f;
void update1(int value) {

    if(position1 >720 )
        position1 -= 1200.00f;

    position1+= speed1;

	glutPostRedisplay();

	glutTimerFunc(100, update1, 0);
}
void init() {
   glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}

void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
			speed += 0.1f;
			printf("clicked at (%d, %d)\n", x, y);
		}
	}

	glutPostRedisplay();
}

void handleKeypress(unsigned char key, int x, int y)
{

	switch (key) {

case 'a':
    speed = 0.0f;
    break;
case 'w':
    speed += 0.5f;
    break;


glutPostRedisplay();


	}
}
void handleKeypress1(unsigned char key, int x, int y)
{
	switch (key) {

case 'g':
    speed1 = 0.0f;
    break;
case 'l':
    speed1 += 0.5f;
    break;

glutPostRedisplay();

	}
}
void background()
{
glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(4.0);
    glBegin(GL_POLYGON);
    glColor3f(0.0,100.0,0.0);
    glVertex2i(-600,360);
    glVertex2i(-480,360);
    glVertex2i(-480,240);
    glVertex2i(-360,120);
    glVertex2i(-240,120);
    //glVertex2i(-120,120);
    glVertex2i(-120,0);
    glVertex2i(0,0);
    glVertex2i(120,-120);
    glVertex2i(240,-120);
    glVertex2i(360,-240);
    glVertex2i(480,-240);
    glVertex2i(600,-360);
    glVertex2i(600,-480);
    glVertex2i(-600,-480);
    glVertex2i(-600,360);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.54,0.82,0.94);
    glVertex2f(-600,300);
    glVertex2f(600,300);
    glVertex2f(600,480);
    glVertex2f(-600,480);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,.5,0.2);
    glVertex2i(-600,300);
    glVertex2i(-480,360);
    glVertex2i(-360,300);
    glVertex2i(-600,300);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,.5,0.2);
    glVertex2i(-360,300);
    glVertex2i(-240,360);
    glVertex2i(-120,300);
    glVertex2i(-360,300);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,.5,0.2);
    glVertex2i(-120,300);
    glVertex2i(0,360);
    glVertex2i(120,300);
    glVertex2i(-120,300);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3,.5,0.2);
    glVertex2i(120,300);
    glVertex2i(240,360);
    glVertex2i(360,300);
    glVertex2i(120,300);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,.5,0.2);
    glVertex2i(360,300);
    glVertex2i(480,360);
    glVertex2i(600,300);
    glVertex2i(360,300);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,.5,0.2);
    glVertex2i(-600,300);
    glVertex2i(-480,360);
    glVertex2i(-360,300);
    glVertex2i(-600,300);
    glEnd();
    /*glBegin(GL_LINE_LOOP);
    glColor3f(0.80,0.51,0.31);
    glVertex2i(-480,240);
    glVertex2i(-480,288);
    glVertex2i(-360,300);
    glVertex2i(-240,300);
    glVertex2i(-120,48);
    glVertex2i(12,48);
    glVertex2i(120,-72);
    glVertex2i(240,-72);
    glVertex2i(360,-192);
    glVertex2i(600,-312);
    glVertex2i(600,-360);
    glEnd();*/
}
void sky()
{
   glBegin(GL_POLYGON);
    glColor3f(0.54,0.82,0.94);
    glVertex2f(-600,300);
    glVertex2f(600,300);
    glVertex2f(600,480);
    glVertex2f(-600,480);
    glEnd();
}

void Hill()
{
    glBegin(GL_POLYGON);
    glColor3f(0.3,.5,0.2);
    glVertex2i(-600,300);
    glVertex2i(-480,360);
    glVertex2i(-360,300);
    glVertex2i(-600,300);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,.5,0.2);
    glVertex2i(-360,300);
    glVertex2i(-240,360);
    glVertex2i(-120,300);
    glVertex2i(-360,300);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,.5,0.2);
    glVertex2i(-120,300);
    glVertex2i(0,360);
    glVertex2i(120,300);
    glVertex2i(-120,300);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3,.5,0.2);
    glVertex2i(120,300);
    glVertex2i(240,360);
    glVertex2i(360,300);
    glVertex2i(120,300);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,.5,0.2);
    glVertex2i(360,300);
    glVertex2i(480,360);
    glVertex2i(600,300);
    glVertex2i(360,300);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,.5,0.2);
    glVertex2i(-600,300);
    glVertex2i(-480,360);
    glVertex2i(-360,300);
    glVertex2i(-600,300);
    glEnd();
    //glFlush();
}
void River()
{
    glBegin(GL_POLYGON);
    glColor3f(0.34,0.74,0.74);
    glPointSize(4.0);
    glVertex2i(-600,360);
    glVertex2i(-480,360);
    glVertex2i(-480,240);
    glVertex2i(-360,120);
    glVertex2i(-240,120);
    glVertex2i(-120,0);
    glVertex2i(0,0);
    glVertex2i(120,-120);
    glVertex2i(240,-120);
    glVertex2i(360,-240);
    glVertex2i(480,-240);
    glVertex2i(600,-360);
    glVertex2i(600,480);
    glVertex2i(-600,480);
    glVertex2i(-600,360);
    glEnd();
}
void house()
{
    //glLineWidth(3);
    glBegin(GL_POLYGON);
    glColor3f(0.3,.5,0.2);
    glVertex2i(-120,-120);
    glVertex2i(-120,120);
    glVertex2i(-360,120);
    glVertex2i(-360,-120);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 153, 0);
    glVertex2i(-204,48);
    glVertex2i(-204,-120);
    glVertex2i(-240,-120);
    glVertex2i(-240,48);
    glEnd();

    glBegin(GL_LINES);
    //glLineWidth(3);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(-240,48);
    glVertex2i(-240,-120);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 153, 0);
    glVertex2i(-276,48);
    glVertex2i(-276,-120);
    glVertex2i(-240,-120);
    glVertex2i(-240,48);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(-276,-120);
    glVertex2i(-276,48);
    glVertex2i(-276,48);
    glVertex2i(-204,48);
    glVertex2i(-204,48);
    glVertex2i(-204,-120);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 153, 0);
    glVertex2i(-120,120);
    glVertex2i(-168,240);
    glVertex2i(-408,240);
    glVertex2i(-360,120);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(-276,-120);
    glVertex2i(-276,48);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 153, 0);
    glVertex2i(-408,240);
    glVertex2i(-480,120);
    glVertex2i(-360,120);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(-456,120);
    glVertex2i(-396,216);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,.5,0.2);
    glVertex2i(-360,120);
    glVertex2i(-456,120);
    glVertex2i(-456,-72);
    glVertex2i(-360,-120);
    glEnd();

    //door
    glBegin(GL_POLYGON);
    glColor3ub(255, 153, 0);
    glVertex2i(-384,-108);
    glVertex2i(-384,48);
    glVertex2i(-408,48);
    glVertex2i(-408,-96);
    glEnd();

    //window
    glBegin(GL_POLYGON);
    glColor3ub(255, 153,0);
    glVertex2i(-300,36);
    glVertex2i(-348,36);
    glVertex2i(-348,-24);
    glVertex2i(-300,-24);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(-300,36);
    glVertex2i(-348,36);
    glVertex2i(-348,-24);
    glVertex2i(-300,-24);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(-324,36);
    glVertex2i(-324,-24);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 153, 0);
    glVertex2i(-408,-96);
    glVertex2i(-408,48);
    glVertex2i(-432,48);
    glVertex2i(-432,-84);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(-384,-108);
    glVertex2i(-384,48);
    glVertex2i(-408,48);
    glVertex2i(-408,-96);
    glVertex2i(-432,-84);
    glVertex2i(-432,48);
    glVertex2i(-408,48);
    glVertex2i(-432,48);
    glVertex2i(-384,48);
    glVertex2i(-408,48);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(-408,240);
    glVertex2i(-360,120);
    glVertex2i(-360,120);
    glVertex2i(-360,-120);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(-456,120);
    glVertex2i(-456,-72);
    glVertex2i(-360,-120);
    glVertex2i(-120,-120);
    glVertex2i(-120,120);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(-120,120);
    glVertex2i(-168,240);
    glVertex2i(-408,240);
    glVertex2i(-480,120);
    glVertex2i(-456,120);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 153, 0);
    glVertex2i(-132,36);
    glVertex2i(-180,36);
    glVertex2i(-180,-24);
    glVertex2i(-132,-24);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(-132,36);
    glVertex2i(-180,36);
    glVertex2i(-180,-24);
    glVertex2i(-132,-24);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(-156,36);
    glVertex2i(-156,-24);
    glEnd();
    //glFlush();
}

void boat1()
{
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(240,84);
    glVertex2i(360,84);
    glVertex2i(420,120);
    glVertex2i(180,120);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2i(240,120);
    glVertex2i(360,120);
    glVertex2i(360,156);
    glVertex2i(240,156);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,0.0);
    glVertex2i(340,168);
    glVertex2i(348,240);
    glVertex2i(264,240);
    glVertex2i(252,168);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.35,0.0);
    glVertex2i(288,156);
    glVertex2i(300,156);
    glVertex2i(300,252);
    glVertex2i(288,252);
    glEnd();
}
void boat2()
{
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(-120,240);
    glVertex2i(-36,240);
    glVertex2i(0,288);
    glVertex2i(-156,288);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2i(-120,288);
    glVertex2i(-36,288);
    glVertex2i(-36,324);
    glVertex2i(-120,324);
    glEnd();
  //  glFlush();

    /*glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(-84,324);
    glVertex2i(-72,324);
    glVertex2i(-72,348);
    glVertex2i(-84,348);
    glEnd();*/
}

void boat3()
{
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(120,264);
    glVertex2i(360,264);
    glVertex2i(420,300);
    glVertex2i(60,300);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 153, 0);
    glVertex2i(120,300);
    glVertex2i(360,300);
    glVertex2i(360,348);
    glVertex2i(348,360);
    glVertex2i(168,360);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.100, .34, .20);
    glVertex2i(120,300);
    glVertex2i(168,360);
    glVertex2i(144,348);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0,0.0);
    glVertex2i(240,360);
    glVertex2i(252,360);
    glVertex2i(252,460);
    glVertex2i(240,460);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.100, 0.34, 0.20);
    glVertex2i(240,396);
    glVertex2i(168,396);
    glVertex2i(168,444);
    glVertex2i(240,444);
    glEnd();
    //window
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(168,312);
    glVertex2i(168,336);
    glVertex2i(192,336);
    glVertex2i(192,312);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(204,312);
    glVertex2i(204,336);
    glVertex2i(228,336);
    glVertex2i(228,312);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(240,312);
    glVertex2i(240,336);
    glVertex2i(264,336);
    glVertex2i(264,312);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(276,312);
    glVertex2i(276,336);
    glVertex2i(300,336);
    glVertex2i(300,312);
    glEnd();

    /*glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(312,312);
    glVertex2i(312,336);
    glVertex2i(336,336);
    glVertex2i(336,312);
    glEnd();*/

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    //glPushMatrix();
    //glTranslatef(0.5f,0.5f,position);
    float x;
    for(int i=0;i<=360;i++)
    {
        x=i*3.142/180;
        glVertex2i((205+12*cos(x)),(420+12*sin(x)));
    }
    //glPopMatrix();
    glEnd();
   // glFlush();
}
void Cloud()
{
    float x,y;
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    for(int i=0;i<=360;i++)
    {
        x=i*3.142/180;
        glVertex2i((-140+50*cos(x)),(420+33*sin(x)));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    for(int i=0;i<=360;i++)
    {
        y=i*3.142/180;
        glVertex2i((-180+50*cos(y)),(420+32*sin(y)));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    for(int i=0;i<=360;i++)
    {
        y=i*3.142/180;
        glVertex2i((-150+35*cos(y)),(442+40*sin(y)));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    for(int i=0;i<=360;i++)
    {
        y=i*3.142/180;
        glVertex2i((-150+45*cos(y)),(403+40*sin(y)));
    }
    glEnd();
    //glFlush();
}
void Cloud1()
{
    float x,y;
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    for(int i=0;i<=360;i++)
    {
        x=i*3.142/180;
        glVertex2i((120+40*cos(x)),(420+23*sin(x)));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    for(int i=0;i<=360;i++)
    {
        y=i*3.142/180;
        glVertex2i((180+40*cos(y)),(420+22*sin(y)));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    for(int i=0;i<=360;i++)
    {
        y=i*3.142/180;
        glVertex2i((150+35*cos(y)),(442+20*sin(y)));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    for(int i=0;i<=360;i++)
    {
        y=i*3.142/180;
        glVertex2i((150+35*cos(y)),(403+20*sin(y)));
    }
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    for(int i=0;i<=360;i++)
    {
        y=i*3.142/180;
        glVertex2i((180+35*cos(y)),(415+20*sin(y)));
    }
    glEnd();
    //glFlush();
}
void River_Bank()
{
}
void street()
{
    glBegin(GL_POLYGON);
    glColor3f(0.90,0.60,1.0);
    glVertex2i(-204,-120);
    glVertex2i(-276,-120);
    glVertex2i(-276,-240);
    glVertex2i(-204,-240);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.90,0.60,1.0);
    glVertex2i(-276,-240);
    glVertex2i(-144,-480);
    glVertex2i(-60,-480);
    glVertex2i(-204,-240);
    glEnd();

}
void sun()
{
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.4,0.0);
    //glPushMatrix();
    //glTranslatef(0.5f,0.5f,position);
    float x;
    for(int i=0;i<=360;i++)
    {
        x=i*3.142/180;
        glVertex2i((-150+60*cos(x)),(440+60*sin(x)));
    }
    //glPopMatrix();
    glEnd();
    //glFlush();
}
void Tree()
{
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.0,0.0);
    glVertex2i(-480,0);
    glVertex2i(-528,0);
    glVertex2i(-552,-48);
    glVertex2i(-516,-24);
    glVertex2i(-492,-84);
    glVertex2i(-480,-24);
    glVertex2i(-432,-48);
    glVertex2i(-480,-0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.0,0.0);
    glVertex2i(-480,0);
    glVertex2i(-528,0);
    glVertex2i(-528,240);
    glVertex2i(-480,240);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.0,0.0);
    glVertex2i(-480,240);
    glVertex2i(-528,240);
    glVertex2i(-552,276);
    glVertex2i(-540,288);
    glVertex2i(-504,240);
    glVertex2i(-504,288);
    glVertex2i(-492,288);
    glVertex2i(-492,240);
    glVertex2i(-456,288);
    glVertex2i(-444,276);
    glEnd();

    /*glBegin(GL_POLYGON);
    glColor3f(0.0,0.30,0.05);
    glVertex2i(-492,276);
    glVertex2i(-456,264);
    glVertex2i(-432,228);
    glVertex2i(-384,276);
    glVertex2i(-372,324);
    glVertex2i(-372,372);
    glVertex2i(-420,420);
    glVertex2i(-504,460);
    glVertex2i(-585,408);
    glVertex2i(-600,336);
    glVertex2i(-600,264);
    glVertex2i(-576,228);
    glVertex2i(-528,240);
    glVertex2i(-492,276);
    glEnd();*/
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.30,0.05);
    glVertex2i(-600,240);
    glVertex2i(-480,360);
    glVertex2i(-360,240);
    glEnd();
}
void FlowerTree()
{
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    float x;
    for(int i=0;i<=360;i++)
    {
        x=i*3.142/180;
        glVertex2i((144+80*cos(x)),(-240+40*sin(x)));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.34,0.74,0.74);
    float y;
    for(int i=0;i<=360;i++)
    {
        y=i*3.142/180;
        glVertex2i((144+70*cos(y)),(-240+30*sin(y)));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.35,0.0);
    glVertex2i(144,-252);
    glVertex2i(24,-202);
    glVertex2i(136,-230);
    glVertex2i(72,-132);
    glVertex2i(136,-204);
    glVertex2i(136,-132);
    glVertex2i(144,-204);
    glVertex2i(168,-132);
    glVertex2i(156,-204);
    glVertex2i(216,-156);
    glVertex2i(156,-228);
    glVertex2i(264,-202);
    glVertex2i(144,-252);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    float z;
    for(int i=0;i<=360;i++)
    {
        z=i*3.142/180;
        glVertex2i((66+20*cos(z)),(-120+20*sin(z)));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,0.0);
    float w;
    for(int i=0;i<=360;i++)
    {
        w=i*3.142/180;
        glVertex2i((224+20*cos(w)),(-144+20*sin(w)));
    }
    glEnd();
    //glFlush();
}

//shahariar

void well()
{
      glBegin(GL_POLYGON);
      glColor3ub(227, 124, 20);
      glVertex2i(-500,-300);
      glVertex2i(-350,-300);
      glVertex2i(-350,-450);
      glVertex2i(-500,-450);

      glEnd();
//brick
   //white
      glBegin(GL_POLYGON);
      glColor3ub(250, 250, 247);
      glVertex2i(-497,-297);
      glVertex2i(-353,-297);
      glVertex2i(-353,-447);
      glVertex2i(-497,-447);
    glEnd();
      //brick 1
      glBegin(GL_POLYGON);
      glColor3ub(227, 124, 20);
      glVertex2i(-377,-343);
      glVertex2i(-350,-343);
      glVertex2i(-350,-320);
      glVertex2i(-377,-320);
    glEnd();
      //brick 2
      glBegin(GL_POLYGON);
      glColor3ub(227, 124, 20);
      glVertex2i(-497,-343);
      glVertex2i(-470,-343);
      glVertex2i(-470,-320);
      glVertex2i(-497,-320);
    glEnd();
      //brick 3
      glBegin(GL_POLYGON);
      glColor3ub(227, 124, 20);
      glVertex2i(-497,-372);
      glVertex2i(-470,-372);
      glVertex2i(-470,-347);
      glVertex2i(-497,-347);
    glEnd();
      //brick 4
      glBegin(GL_POLYGON);
      glColor3ub(227, 124, 20);
      glVertex2i(-467,-372);
      glVertex2i(-440,-372);
      glVertex2i(-440,-347);
      glVertex2i(-467,-347);
    glEnd();
      //brick 5
      glBegin(GL_POLYGON);
      glColor3ub(227, 124, 20);
      glVertex2i(-437,-372);
      glVertex2i(-410,-372);
      glVertex2i(-410,-347);
      glVertex2i(-437,-347);
    glEnd();
      //brick 6
      glBegin(GL_POLYGON);
      glColor3ub(227, 124, 20);
      glVertex2i(-407,-372);
      glVertex2i(-380,-372);
      glVertex2i(-380,-347);
      glVertex2i(-407,-347);
    glEnd();
      //brick 7
      glBegin(GL_POLYGON);
      glColor3ub(227, 124, 20);
      glVertex2i(-377,-372);
      glVertex2i(-350,-372);
      glVertex2i(-350,-347);
      glVertex2i(-377,-347);
    glEnd();

//3rd row

      //brick 8
      glBegin(GL_POLYGON);
      glColor3ub(227, 124, 20);
      glVertex2i(-497,-401);
      glVertex2i(-470,-401);
      glVertex2i(-470,-376);
      glVertex2i(-497,-376);
    glEnd();
      //brick 9
      glBegin(GL_POLYGON);
      glColor3ub(227, 124, 20);
      glVertex2i(-467,-401);
      glVertex2i(-440,-401);
      glVertex2i(-440,-376);
      glVertex2i(-467,-376);
    glEnd();
     //brick 10
      glBegin(GL_POLYGON);
      glColor3ub(227, 124, 20);
      glVertex2i(-437,-401);
      glVertex2i(-410,-401);
      glVertex2i(-410,-376);
      glVertex2i(-437,-376);
    glEnd();
     //brick 11
      glBegin(GL_POLYGON);
      glColor3ub(227, 124, 20);
      glVertex2i(-407,-401);
      glVertex2i(-380,-401);
      glVertex2i(-380,-376);
      glVertex2i(-407,-376);
    glEnd();
     //brick 12
      glBegin(GL_POLYGON);
      glColor3ub(227, 124, 20);
      glVertex2i(-377,-401);
      glVertex2i(-350,-401);
      glVertex2i(-350,-376);
      glVertex2i(-377,-376);
    glEnd();

//4th row
      //brick 13
      glBegin(GL_POLYGON);
      glColor3ub(227, 124, 20);
      glVertex2i(-497,-430);
      glVertex2i(-470,-430);
      glVertex2i(-470,-405);
      glVertex2i(-497,-405);
    glEnd();
      //brick 14
      glBegin(GL_POLYGON);
      glColor3ub(227, 124, 20);
      glVertex2i(-467,-430);
      glVertex2i(-440,-430);
      glVertex2i(-440,-405);
      glVertex2i(-467,-405);
    glEnd();
     //brick 15
      glBegin(GL_POLYGON);
      glColor3ub(227, 124, 20);
      glVertex2i(-437,-430);
      glVertex2i(-410,-430);
      glVertex2i(-410,-405);
      glVertex2i(-437,-405);
    glEnd();
     //brick 16
      glBegin(GL_POLYGON);
      glColor3ub(227, 124, 20);
      glVertex2i(-407,-430);
      glVertex2i(-380,-430);
      glVertex2i(-380,-405);
      glVertex2i(-407,-405);
    glEnd();
     //brick 17
      glBegin(GL_POLYGON);
      glColor3ub(227, 124, 20);
      glVertex2i(-377,-430);
      glVertex2i(-350,-430);
      glVertex2i(-350,-405);
      glVertex2i(-377,-405);
    glEnd();
//5th row

      //brick 18
      glBegin(GL_POLYGON);
      glColor3ub(227, 124, 20);
      glVertex2i(-497,-450);
      glVertex2i(-470,-450);
      glVertex2i(-470,-434);
      glVertex2i(-497,-434);
    glEnd();
      //brick 19
      glBegin(GL_POLYGON);
      glColor3ub(227, 124, 20);
      glVertex2i(-467,-450);
      glVertex2i(-440,-450);
      glVertex2i(-440,-434);
      glVertex2i(-467,-434);
    glEnd();
     //brick 20
      glBegin(GL_POLYGON);
      glColor3ub(227, 124, 20);
      glVertex2i(-437,-450);
      glVertex2i(-410,-450);
      glVertex2i(-410,-434);
      glVertex2i(-437,-434);
    glEnd();
     //brick 21
      glBegin(GL_POLYGON);
      glColor3ub(227, 124, 20);
      glVertex2i(-407,-450);
      glVertex2i(-380,-450);
      glVertex2i(-380,-434);
      glVertex2i(-407,-434);
    glEnd();
     //brick 22
      glBegin(GL_POLYGON);
      glColor3ub(227, 124, 20);
      glVertex2i(-377,-450);
      glVertex2i(-350,-450);
      glVertex2i(-350,-434);
      glVertex2i(-377,-434);
    glEnd();
//stick
     //stickleft
    glBegin(GL_POLYGON);
      glColor3ub(227, 124, 20);
      glVertex2i(-500,-300);
      glVertex2i(-497,-300);
      glVertex2i(-497,-157);
      glVertex2i(-500,-160);
    glEnd();
    //stickright
    glBegin(GL_POLYGON);
      glColor3ub(227, 124, 20);
      glVertex2i(-353,-300);
      glVertex2i(-350,-300);
      glVertex2i(-350,-157);
      glVertex2i(-353,-160);
    glEnd();
     //stickup
    glBegin(GL_POLYGON);
      glColor3ub(227, 124, 20);
      glVertex2i(-500,-158);
      glVertex2i(-350,-158);
      glVertex2i(-350,-154);
      glVertex2i(-500,-154);
    glEnd();
     //bucket
     glBegin(GL_POLYGON);
      glColor3ub(227, 124, 20);
      glVertex2i(-535,-450);
      glVertex2i(-517,-450);
      glVertex2i(-501,-380);
      glVertex2i(-550,-380);
    glEnd();
    // bucket rope
     glBegin(GL_POLYGON);
      glColor3ub(227, 124, 20);
      glVertex2i(-501,-380);
      glVertex2i(-504,-380);
      glVertex2i(-525,-360);
      glVertex2i(-527,-360);
    glEnd();

    glBegin(GL_POLYGON);
      glColor3ub(227, 124, 20);
      glVertex2i(-550,-380);
      glVertex2i(-547,-380);
      glVertex2i(-525,-360);
      glVertex2i(-527,-360);
    glEnd();
    //big rope
    glBegin(GL_POLYGON);
      glColor3ub(227, 124, 20);
      glVertex2i(-525,-360);
      glVertex2i(-527,-360);
      glVertex2i(-425,-158);
      glVertex2i(-425,-154);
    glEnd();

    //
    glBegin(GL_POLYGON);
      glColor3ub(227, 124, 20);
      glVertex2i(-425,-210);
      glVertex2i(-423,-210);
      glVertex2i(-423,-158);
      glVertex2i(-425,-154);
    glEnd();


}

void wellcircle1()
{
    glBegin(GL_POLYGON);
    glColor3ub(114, 120, 110);
    float x;
    for(int i=0;i<=360;i++)
    {
        x=i*3.142/180;
        glVertex2i((-425+75*cos(x)),(-300+45*sin(x)));
    }
    glEnd();
}
void wellcircle2()
{
    glBegin(GL_POLYGON);
    glColor3ub(129, 222, 219);
    float x;
    for(int i=0;i<=360;i++)
    {
        x=i*3.142/180;
        glVertex2i((-427+65*cos(x)),(-300+35*sin(x)));
    }
    glEnd();
}
//shahariar
void wave()
{
  glPushMatrix();
//    glTranslatef(position2,0.0f,0.0f);
    glColor3ub(255,255,255);

    //wave0

    glBegin(GL_LINES);
    glVertex2f(0,280);
    glVertex2f(10,280);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(40,280);
    glVertex2f(50,280);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(80,280);
    glVertex2f(90,280);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(120,280);
    glVertex2f(130,280);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(160,280);
    glVertex2f(170,280);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(200,280);
    glVertex2f(210,280);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(240,280);
    glVertex2f(250,280);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(280,280);
    glVertex2f(290,280);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(320,280);
    glVertex2f(330,280);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(360,280);
    glVertex2f(370,280);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(400,280);
    glVertex2f(410,280);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(440,280);
    glVertex2f(450,280);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(480,280);
    glVertex2f(490,280);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(520,280);
    glVertex2f(530,280);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(560,280);
    glVertex2f(570,280);
    glEnd();

    ////////////////////////////////////////////
   glBegin(GL_LINES);
    glVertex2f(-30,280);
    glVertex2f(-40,280);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-60,280);
    glVertex2f(-70,280);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-90,280);
    glVertex2f(-100,280);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-120,280);
    glVertex2f(-130,280);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-160,280);
    glVertex2f(-170,280);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-200,280);
    glVertex2f(-210,280);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-240,280);
    glVertex2f(-250,280);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-280,280);
    glVertex2f(-290,280);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-320,280);
    glVertex2f(-330,280);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-360,280);
    glVertex2f(-370,280);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-400,280);
    glVertex2f(-410,280);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-440,280);
    glVertex2f(-450,280);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-480,280);
    glVertex2f(-490,280);
    glEnd();

    //////////////////////////////////////////////////wave1

    glBegin(GL_LINES);
    glVertex2f(0,250);
    glVertex2f(10,250);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(40,250);
    glVertex2f(50,250);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(80,250);
    glVertex2f(90,250);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(120,250);
    glVertex2f(130,250);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(160,250);
    glVertex2f(170,250);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(200,250);
    glVertex2f(210,250);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(240,250);
    glVertex2f(250,250);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(280,250);
    glVertex2f(290,250);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(320,250);
    glVertex2f(330,250);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(360,250);
    glVertex2f(370,250);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(400,250);
    glVertex2f(410,250);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(440,250);
    glVertex2f(450,250);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(480,250);
    glVertex2f(490,250);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(520,250);
    glVertex2f(530,250);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(560,250);
    glVertex2f(570,250);
    glEnd();

    /////////////////////////////////////////////////////////////////

    glBegin(GL_LINES);
    glVertex2f(-30,250);
    glVertex2f(-40,250);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-60,250);
    glVertex2f(-70,250);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-90,250);
    glVertex2f(-100,250);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-120,250);
    glVertex2f(-130,250);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-160,250);
    glVertex2f(-170,250);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-200,250);
    glVertex2f(-210,250);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-240,250);
    glVertex2f(-250,250);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-280,250);
    glVertex2f(-290,250);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-320,250);
    glVertex2f(-330,250);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-360,250);
    glVertex2f(-370,250);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-400,250);
    glVertex2f(-410,250);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-440,250);
    glVertex2f(-450,250);
    glEnd();

    ///////////////////////////////wave2/////////////

    glBegin(GL_LINES);
    glVertex2f(0,220);
    glVertex2f(10,220);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(40,220);
    glVertex2f(50,220);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(80,220);
    glVertex2f(90,220);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(120,220);
    glVertex2f(130,220);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(160,220);
    glVertex2f(170,220);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(200,220);
    glVertex2f(210,220);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(240,220);
    glVertex2f(250,220);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(280,220);
    glVertex2f(290,220);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(320,220);
    glVertex2f(330,220);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(360,220);
    glVertex2f(370,220);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(400,220);
    glVertex2f(410,220);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(440,220);
    glVertex2f(450,220);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(480,220);
    glVertex2f(490,220);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(520,220);
    glVertex2f(530,220);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(560,220);
    glVertex2f(570,220);
    glEnd();

    //////////////////////////////////////////////////

     glBegin(GL_LINES);
    glVertex2f(-30,220);
    glVertex2f(-40,220);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-60,220);
    glVertex2f(-70,220);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-90,220);
    glVertex2f(-100,220);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-120,220);
    glVertex2f(-130,220);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-170,220);
    glVertex2f(-180,220);
    glEnd();
///////////////////////////////wave3///////////////////////

    glBegin(GL_LINES);
    glVertex2f(0,190);
    glVertex2f(10,190);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(40,190);
    glVertex2f(50,190);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(80,190);
    glVertex2f(90,190);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(120,190);
    glVertex2f(130,190);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(160,190);
    glVertex2f(170,190);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(200,190);
    glVertex2f(210,190);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(240,190);
    glVertex2f(250,190);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(280,190);
    glVertex2f(290,190);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(320,190);
    glVertex2f(330,190);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(360,190);
    glVertex2f(370,190);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(400,190);
    glVertex2f(410,190);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(440,190);
    glVertex2f(450,190);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(480,190);
    glVertex2f(490,190);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(520,190);
    glVertex2f(530,190);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(560,190);
    glVertex2f(570,190);
    glEnd();

    ////////////////////////////////////////////////////
    glBegin(GL_LINES);
    glVertex2f(-30,190);
    glVertex2f(-40,190);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-60,190);
    glVertex2f(-70,190);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-90,190);
    glVertex2f(-100,190);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-120,190);
    glVertex2f(-130,190);
    glEnd();

    ////////////////////////////////wave4//////////////////////

    glBegin(GL_LINES);
    glVertex2f(0,160);
    glVertex2f(10,160);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(40,160);
    glVertex2f(50,160);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(80,160);
    glVertex2f(90,160);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(120,160);
    glVertex2f(130,160);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(160,160);
    glVertex2f(170,160);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(200,160);
    glVertex2f(210,160);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(240,160);
    glVertex2f(250,160);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(280,160);
    glVertex2f(290,160);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(320,160);
    glVertex2f(330,160);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(360,160);
    glVertex2f(370,160);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(400,160);
    glVertex2f(410,160);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(440,160);
    glVertex2f(450,160);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(480,160);
    glVertex2f(490,160);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(520,160);
    glVertex2f(530,160);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(560,160);
    glVertex2f(570,160);
    glEnd();

    //////////////////////////////////////////////////////

    glBegin(GL_LINES);
    glVertex2f(-30,160);
    glVertex2f(-40,160);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-60,160);
    glVertex2f(-70,160);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-90,160);
    glVertex2f(-100,160);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-110,160);
    glVertex2f(-120,160);
    glEnd();

    ////////////////////////////////////////wave5////////////////

    glBegin(GL_LINES);
    glVertex2f(0,130);
    glVertex2f(10,130);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(40,130);
    glVertex2f(50,130);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(80,130);
    glVertex2f(90,130);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(120,130);
    glVertex2f(130,130);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(160,130);
    glVertex2f(170,130);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(200,130);
    glVertex2f(210,130);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(240,130);
    glVertex2f(250,130);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(280,130);
    glVertex2f(290,130);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(320,130);
    glVertex2f(330,130);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(360,130);
    glVertex2f(370,130);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(400,130);
    glVertex2f(410,130);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(440,130);
    glVertex2f(450,130);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(480,130);
    glVertex2f(490,130);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(520,130);
    glVertex2f(530,130);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(560,130);
    glVertex2f(570,130);
    glEnd();

    ///////////////////////////////////////////////////////////////////

     glBegin(GL_LINES);
    glVertex2f(-30,130);
    glVertex2f(-40,130);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-60,130);
    glVertex2f(-70,130);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-90,130);
    glVertex2f(-100,130);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-120,130);
    glVertex2f(-130,130);
    glEnd();

   //////////////////////////////wave6////////////////////////////

    glBegin(GL_LINES);
    glVertex2f(0,100);
    glVertex2f(10,100);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(40,100);
    glVertex2f(50,100);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(80,100);
    glVertex2f(90,100);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(120,100);
    glVertex2f(130,100);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(160,100);
    glVertex2f(170,100);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(200,100);
    glVertex2f(210,100);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(240,100);
    glVertex2f(250,100);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(280,100);
    glVertex2f(290,100);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(320,100);
    glVertex2f(330,100);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(360,100);
    glVertex2f(370,100);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(400,100);
    glVertex2f(410,100);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(440,100);
    glVertex2f(450,100);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(480,100);
    glVertex2f(490,100);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(520,100);
    glVertex2f(530,100);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(560,100);
    glVertex2f(570,100);
    glEnd();

    /////////////////////////////////////////////////

    glBegin(GL_LINES);
    glVertex2f(-30,100);
    glVertex2f(-40,100);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-60,100);
    glVertex2f(-70,100);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-90,100);
    glVertex2f(-100,100);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-120,100);
    glVertex2f(-130,100);
    glEnd();

    ////////////////////////////////////wave7///////////////////

    glBegin(GL_LINES);
    glVertex2f(0,70);
    glVertex2f(10,70);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(40,70);
    glVertex2f(50,70);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(80,70);
    glVertex2f(90,70);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(120,70);
    glVertex2f(130,70);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(160,70);
    glVertex2f(170,70);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(200,70);
    glVertex2f(210,70);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(240,70);
    glVertex2f(250,70);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(280,70);
    glVertex2f(290,70);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(320,70);
    glVertex2f(330,70);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(360,70);
    glVertex2f(370,70);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(400,70);
    glVertex2f(410,70);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(440,70);
    glVertex2f(450,70);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(480,70);
    glVertex2f(490,70);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(520,70);
    glVertex2f(530,70);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(560,70);
    glVertex2f(570,70);
    glEnd();

    /////////////////////////////////////////////////////

     glBegin(GL_LINES);
    glVertex2f(-30,70);
    glVertex2f(-40,70);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-60,70);
    glVertex2f(-70,70);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-90,70);
    glVertex2f(-100,70);
    glEnd();

    ///////////////////////////////////////wave8///////////////////

    glBegin(GL_LINES);
    glVertex2f(0,40);
    glVertex2f(10,40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(40,40);
    glVertex2f(50,40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(80,40);
    glVertex2f(90,40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(120,40);
    glVertex2f(130,40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(160,40);
    glVertex2f(170,40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(200,40);
    glVertex2f(210,40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(240,40);
    glVertex2f(250,40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(280,40);
    glVertex2f(290,40);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(320,40);
    glVertex2f(330,40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(360,40);
    glVertex2f(370,40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(400,40);
    glVertex2f(410,40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(440,40);
    glVertex2f(450,40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(480,40);
    glVertex2f(490,40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(520,40);
    glVertex2f(530,40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(560,40);
    glVertex2f(570,40);
    glEnd();

    //////////////////////////////////////////////////////////////////

    glBegin(GL_LINES);
    glVertex2f(-30,40);
    glVertex2f(-40,40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-60,40);
    glVertex2f(-70,40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-90,40);
    glVertex2f(-100,40);
    glEnd();

    ////////////////////////////wave9///////////////////////////////////

    glBegin(GL_LINES);
    glVertex2f(0,10);
    glVertex2f(10,10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(40,10);
    glVertex2f(50,10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(80,10);
    glVertex2f(90,10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(120,10);
    glVertex2f(130,10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(160,10);
    glVertex2f(170,10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(200,10);
    glVertex2f(210,10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(240,10);
    glVertex2f(250,10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(280,10);
    glVertex2f(290,10);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(320,10);
    glVertex2f(330,10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(360,10);
    glVertex2f(370,10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(400,10);
    glVertex2f(410,10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(440,10);
    glVertex2f(450,10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(480,10);
    glVertex2f(490,10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(520,10);
    glVertex2f(530,10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(560,10);
    glVertex2f(570,10);
    glEnd();

    //////////////////////////////////////////////////////////////////////

    glBegin(GL_LINES);
    glVertex2f(-30,10);
    glVertex2f(-40,10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-60,10);
    glVertex2f(-70,10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-90,10);
    glVertex2f(-100,10);
    glEnd();

    ///////////////////////////////////wave10///////////////////////////

    glBegin(GL_LINES);
    glVertex2f(0,-20);
    glVertex2f(10,-20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(40,-20);
    glVertex2f(50,-20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(80,-20);
    glVertex2f(90,-20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(120,-20);
    glVertex2f(130,-20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(160,-20);
    glVertex2f(170,-20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(200,-20);
    glVertex2f(210,-20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(240,-20);
    glVertex2f(250,-20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(280,-20);
    glVertex2f(290,-20);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(320,-20);
    glVertex2f(330,-20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(360,-20);
    glVertex2f(370,-20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(400,-20);
    glVertex2f(410,-20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(440,-20);
    glVertex2f(450,-20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(480,-20);
    glVertex2f(490,-20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(520,-20);
    glVertex2f(530,-20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(560,-20);
    glVertex2f(570,-20);
    glEnd();

    ///////////////////////////////wave11/////////////////////

    glBegin(GL_LINES);
    glVertex2f(40,-50);
    glVertex2f(50,-50);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(80,-50);
    glVertex2f(90,-50);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(120,-50);
    glVertex2f(130,-50);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(160,-50);
    glVertex2f(170,-50);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(200,-50);
    glVertex2f(210,-50);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(240,-50);
    glVertex2f(250,-50);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(280,-50);
    glVertex2f(290,-50);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(320,-50);
    glVertex2f(330,-50);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(360,-50);
    glVertex2f(370,-50);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(400,-50);
    glVertex2f(410,-50);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(440,-50);
    glVertex2f(450,-50);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(480,-50);
    glVertex2f(490,-50);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(520,-50);
    glVertex2f(530,-50);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(560,-50);
    glVertex2f(570,-50);
    glEnd();

    /////////////////////////////wave12////////////////////////////

    glBegin(GL_LINES);
    glVertex2f(80,-80);
    glVertex2f(90,-80);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(120,-80);
    glVertex2f(130,-80);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(160,-80);
    glVertex2f(170,-80);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(200,-80);
    glVertex2f(210,-80);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(240,-80);
    glVertex2f(250,-80);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(280,-80);
    glVertex2f(290,-80);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(320,-80);
    glVertex2f(330,-80);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(360,-80);
    glVertex2f(370,-80);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(400,-80);
    glVertex2f(410,-80);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(440,-80);
    glVertex2f(450,-80);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(480,-80);
    glVertex2f(490,-80);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(520,-80);
    glVertex2f(530,-80);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(560,-80);
    glVertex2f(570,-80);
    glEnd();

    ///////////////////////////////wave13///////////////////////////

    glBegin(GL_LINES);
    glVertex2f(120,-110);
    glVertex2f(130,-110);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(160,-110);
    glVertex2f(170,-110);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(200,-110);
    glVertex2f(210,-110);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(240,-110);
    glVertex2f(250,-110);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(280,-110);
    glVertex2f(290,-110);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(320,-110);
    glVertex2f(330,-110);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(360,-110);
    glVertex2f(370,-110);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(400,-110);
    glVertex2f(410,-110);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(440,-110);
    glVertex2f(450,-110);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(480,-110);
    glVertex2f(490,-110);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(520,-110);
    glVertex2f(530,-110);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(560,-110);
    glVertex2f(570,-110);
    glEnd();

    //////////////////////////wave14/////////////////////

    glBegin(GL_LINES);
    glVertex2f(240,-140);
    glVertex2f(250,-140);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(280,-140);
    glVertex2f(290,-140);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(320,-140);
    glVertex2f(330,-140);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(360,-140);
    glVertex2f(370,-140);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(400,-140);
    glVertex2f(410,-140);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(440,-140);
    glVertex2f(450,-140);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(480,-140);
    glVertex2f(490,-140);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(520,-140);
    glVertex2f(530,-140);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(560,-140);
    glVertex2f(570,-140);
    glEnd();

    /////////////////////////////wave15//////////////////

    glBegin(GL_LINES);
    glVertex2f(280,-170);
    glVertex2f(290,-170);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(320,-170);
    glVertex2f(330,-170);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(360,-170);
    glVertex2f(370,-170);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(400,-170);
    glVertex2f(410,-170);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(440,-170);
    glVertex2f(450,-170);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(480,-170);
    glVertex2f(490,-170);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(520,-170);
    glVertex2f(530,-170);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(560,-170);
    glVertex2f(570,-170);
    glEnd();

    //////////////////////////////////wave16///////////////////////

    glBegin(GL_LINES);
    glVertex2f(320,-200);
    glVertex2f(330,-200);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(360,-200);
    glVertex2f(370,-200);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(400,-200);
    glVertex2f(410,-200);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(440,-200);
    glVertex2f(450,-200);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(480,-200);
    glVertex2f(490,-200);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(520,-200);
    glVertex2f(530,-200);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(560,-200);
    glVertex2f(570,-200);
    glEnd();

    ///////////////////////////wave17////////////////////////

    glBegin(GL_LINES);
    glVertex2f(360,-230);
    glVertex2f(370,-230);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(400,-230);
    glVertex2f(410,-230);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(440,-230);
    glVertex2f(450,-230);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(480,-230);
    glVertex2f(490,-230);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(520,-230);
    glVertex2f(530,-230);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(560,-230);
    glVertex2f(570,-230);
    glEnd();

    ////////////////////////////////wave18//////////////////////////

    glBegin(GL_LINES);
    glVertex2f(440,-260);
    glVertex2f(450,-260);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(480,-260);
    glVertex2f(490,-260);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(520,-260);
    glVertex2f(530,-260);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(560,-260);
    glVertex2f(570,-260);
    glEnd();

    ///////////////////////wave19////////////////////////////////////

    glBegin(GL_LINES);
    glVertex2f(520,-290);
    glVertex2f(530,-290);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(560,-290);
    glVertex2f(570,-290);
    glEnd();

    ///////////////////////wave20////////////////////////////////////

    glBegin(GL_LINES);
    glVertex2f(560,-320);
    glVertex2f(570,-320);
    glEnd();
}
void palmtree()
{
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.0,0.0);
    glVertex2f(-370,300);
    glVertex2f(-360,360);
    glVertex2f(-350,300);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.30,0.05);
    glVertex2f(-360,350);
    glVertex2f(-390,340);
    glVertex2f(-380,350);
    glVertex2f(-390,360);
    glVertex2f(-370,370);
    glVertex2f(-370,390);
    glVertex2f(-360,380);
    glVertex2f(-350,390);
    glVertex2f(-350,370);
    glVertex2f(-330,360);
    glVertex2f(-340,350);
    glVertex2f(-330,340);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.0,0.0);
    glVertex2f(-130,300);
    glVertex2f(-120,360);
    glVertex2f(-110,300);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.30,0.05);
    glVertex2f(-140,340);
    glVertex2f(-120,410);
    glVertex2f(-100,340);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.0,0.0);
    glVertex2f(110,300);
    glVertex2f(120,360);
    glVertex2f(130,300);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.30,0.05);
    glVertex2f(120,340);
    glVertex2f(90,330);
    glVertex2f(100,360);
    glVertex2f(90,370);
    glVertex2f(110,380);
    glVertex2f(110,400);
    glVertex2f(120,390);
    glVertex2f(130,400);
    glVertex2f(130,380);
    glVertex2f(150,370);
    glVertex2f(140,360);
    glVertex2f(150,340);
    glVertex2f(120,350);
    glEnd();

    /*glBegin(GL_POLYGON);
    glColor3f(0.3,0.0,0.0);
    glVertex2f(350,300);
    glVertex2f(360,360);
    glVertex2f(370,300);
    glEnd();

    /*glBegin(GL_POLYGON);
    glColor3f(0.0,0.30,0.05);
    glVertex2f(330,340);
    glVertex2f(120,410);
    glVertex2f(100,340);
    glEnd();*/
}


void myDisplay(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,0.0,0.0);
    glPointSize(4.0);
    background();
    River();

    sky();

    //sun
    glPushMatrix();
    glTranslatef(position1,0.5f,0.5f);
    Cloud();
//    cloud
    Cloud1();
    glPopMatrix();
    //River_Bank();
    //house();
    //River();
    //sky();

    Hill();
   // River();
    //FlowerTree();
    street();
    //sun();
    //boat1();
    //boat2();
    //boat3();
    palmtree();
    glPushMatrix();
    glTranslatef(position,0.5f,0.5f);
    //wave();
    //glTranslatef(position,0.5f,0.5f);
    boat1();
    //glTranslatef(0.5f,0.5f,position);
    boat2();
    sun();
    //glTranslatef(0.5f,position,0.5f);
    /*glBegin(GL_POLYGON);

    float x;
    for(int i=0;i<=360;i++)
    {
        x=i*3.142/180;
        glVertex2i((150+50*cos(x)),(440+50*sin(x)));
    }
    glEnd();*/
    glTranslatef(position,0.5f,0.5f);
    boat3();
    glPopMatrix();
    Tree();
//    tree
    house();
    well();
    wellcircle1();
    wellcircle2();
    glFlush();

}

void myInit(void)
{
    glClearColor(1.0, 1.0, 1.0,1.0);
    glColor3f(0.0f,0.0f,0.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-600.0, 600.0, -480.0, 480.0);

}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(600,480);
    glutInitWindowPosition(150,150);
    glutCreateWindow("Village Scenario");
    //background();
    glutDisplayFunc(myDisplay);
    //glutDisplayFunc(background);
    myInit();
    glutKeyboardFunc(handleKeypress);
    //glutKeyboardFunc(handleKeypress1);
    glutMouseFunc(handleMouse);
    glutTimerFunc(100,update,0);
    glutTimerFunc(100,update1,0);
//    glutTim
    glutMainLoop();

}


