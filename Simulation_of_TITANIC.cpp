// Simulation of Titanic.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<glut.h>
#include<math.h>
void ship();
void windows(int a,int b,int c,int d);
void sea();
void sky();
void sky1();
void iceberg();
void display1();
void display2();
GLint z=0,a=20;
GLfloat b=0;

void update(int value)
{
	a+=4.0; 
	glutPostRedisplay();
	glutTimerFunc(100,update,0);
}

void display()
{
	/*glClear(GL_COLOR_BUFFER_BIT);*/
	if(a<500)
	{
	display1();
	}
	if(a>500)
	{
		display2();
	}
	
}

void display1()
{
	glPushMatrix();
	glTranslatef(a,30,0.0);
		ship();
	glPopMatrix();
	   iceberg();
	   sea();
	glPushMatrix();
	glTranslated(0.0,900.0,0.0);
	   sky();
	glPopMatrix();
	glPushMatrix();
	glTranslated(400.0,900.0,0.0);
	   sky1();
	glPopMatrix();
	glPushMatrix();
	glTranslated(800.0,900.0,0.0);
	   sky();
	glPopMatrix();
	glPushMatrix();
	glTranslated(800.0,400.0,0.0);
	   sky1();
	glPopMatrix();
	glPushMatrix();
	glTranslated(0.0,400.0,0.0);
	   sky1();
	glPopMatrix();
	glPushMatrix();
	glTranslated(400.0,400.0,0.0);
	   sky1();
	glPopMatrix();
}

void display2()
{
	b-=0.5;
	glPushMatrix();
	glTranslated(500,b,0.0);
	glRotated(-10.0,0.0,0.0,1.0);
	   ship();
	glPopMatrix();
	   iceberg();
	   sea();
	glPushMatrix();
	glTranslated(0.0,900.0,0.0);
	   sky();
	glPopMatrix();
	glPushMatrix();
	glTranslated(400.0,900.0,0.0);
	   sky1();
	glPopMatrix();
	glPushMatrix();
	glTranslated(800.0,900.0,0.0);
	   sky();
	glPopMatrix();
	glPushMatrix();
	glTranslated(800.0,400.0,0.0);
	   sky1();
	glPopMatrix();
	glPushMatrix();
	glTranslated(0.0,400.0,0.0);
	   sky1();
	glPopMatrix();
	glPushMatrix();
	glTranslated(400.0,400.0,0.0);
	   sky1();
	glPopMatrix();
}

void sky()
{

	glColor3f(1.0,1.0,1.0);
	glPointSize(0.37);
	glBegin(GL_POINTS);
	glVertex2i(10,20);
	glVertex2i(20,100);
	glVertex2i(30,10);
	glVertex2i(15,150);
	glVertex2i(17,80);
	glVertex2i(200,200);
	glVertex2i(55,33);
	glVertex2i(400,300);
	glVertex2i(330,110);
	glVertex2i(125,63);
	glVertex2i(63,125);
	glVertex2i(20,10);
	glVertex2i(110,330);
	glVertex2i(440,430);
	glVertex2i(32,65);
	glVertex2i(110,440);
	glVertex2i(210,230);
	glVertex2i(390,490);
	glVertex2i(12,90);
	glVertex2i(400,322);
	glVertex2i(420,366);
	glVertex2i(455,400);
	glVertex2i(20,20);
	glVertex2i(111,120);
	glVertex2i(401,200);
	glVertex2i(230,30);
	glVertex2i(220,20);
	glVertex2i(122,378);
	glVertex2i(133,340);
	glVertex2i(345,420);
	glVertex2i(130,360);
	glVertex2i(333,120);
	glVertex2i(250,22);
	glVertex2i(242,11);
	glVertex2i(280,332);
	glVertex2i(233,40);
	glVertex2i(210,418);
	glVertex2i(256,12);
	glVertex2i(288,232);
	glVertex2i(247,36);
	glVertex2i(229,342);
	glVertex2i(257,47);
	glVertex2i(290,63);
	glVertex2i(232,72);
	glVertex2i(243,143);
	glVertex2i(100,200);
	glVertex2i(90,250);
	glVertex2i(80,225);
	glVertex2i(50,333);
	glVertex2i(60,350);
	glVertex2i(243,143);
	glVertex2i(243,143);
	glEnd();
           glFlush();
}

void sky1()
{
	glColor3f(1.0,1.0,1.0);
	glPointSize(0.3);
	glBegin(GL_POINTS);
	glVertex2i(50,20);
	glVertex2i(70,100);
	glVertex2i(80,10);
	glVertex2i(65,150);
	glVertex2i(67,80);
	glVertex2i(105,33);
	glVertex2i(450,300);
	glVertex2i(380,110);
	glVertex2i(175,63);
	glVertex2i(113,125);
	glVertex2i(70,10);
	glVertex2i(160,330);
	glVertex2i(490,430);
	glVertex2i(82,65);
	glVertex2i(160,440);
	glVertex2i(440,490);
	glVertex2i(62,90);
	glVertex2i(450,322);
	glVertex2i(420,366);
	glVertex2i(455,400);
	glVertex2i(60,20);
	glVertex2i(111,120);
	glVertex2i(451,200);
	glVertex2i(280,30);
	glVertex2i(220,20);
	glVertex2i(132,378);
	glVertex2i(173,340);
	glVertex2i(325,420);
	glVertex2i(180,360);
	glVertex2i(383,120);
	glVertex2i(200,22);
	glVertex2i(342,11);
	glVertex2i(330,332);
	glVertex2i(283,40);
	glVertex2i(210,418);
	glVertex2i(256,12);
	glVertex2i(288,232);
	glVertex2i(247,36);
	glVertex2i(229,342);
	glVertex2i(257,47);
	glVertex2i(290,63);
	glVertex2i(232,72);
	glVertex2i(243,143);
	glVertex2i(100,200);
	glVertex2i(90,250);
	glVertex2i(80,225);
	glVertex2i(50,333);
	glVertex2i(60,350);
	glVertex2i(243,143);
	glVertex2i(243,143);
	glEnd();
	   glFlush();
}

void iceberg()
{
	//from left of iceberg
	glColor3f(1.0,1.0,1.0); 
	glBegin(GL_POLYGON);
	glVertex2f(800.0,320.0); //point A
	glVertex2f(825.0,350.0); //point B
	glVertex2f(850.0,320.0); //point C
	glEnd();
	//glFlush();
	glBegin(GL_POLYGON);
	glVertex2f(850.0,320.0); //point C
	glVertex2f(870.0,380.0); //point D
	glVertex2f(875.0,380.0); //point E
	glVertex2f(890.0,320.0); //point F
	glEnd();
	//glFlush();
	glBegin(GL_POLYGON);
	glVertex2f(890.0,320.0); //point G
	glVertex2f(930.0,390.0); //point H
	glVertex2f(955.0,320.0); //point I
	glEnd();
	//glFlush();
    glBegin(GL_POLYGON);
	glVertex2f(955.0,320.0); //point J
	glVertex2f(975.0,450.0); //point K
	glVertex2f(1000.0,320.0); //point L
	glEnd();
	//glFlush();
	glBegin(GL_POLYGON);
	glVertex2f(1000.0,320.0); //point M
	glVertex2f(1030.0,440.0); //point N
	glVertex2f(1037.0,435.0); //point O
    glVertex2f(1045.0,320.0); //point P
	glEnd();
	//glFlush();
	glBegin(GL_POLYGON);
	glVertex2f(1045.0,320.0); //point Q
	glVertex2f(1055.0,370.0); //point R
	glVertex2f(1080.0,320.0); //point S
	glEnd();
	//glFlush();
	glBegin(GL_POLYGON);
	glVertex2f(1080.0,320.0); //point T
	glVertex2f(1096.0,466.0); //point U
	glVertex2f(1106.0,320.0); //point V
	glEnd();
	//glFlush();
	glBegin(GL_POLYGON);
	glVertex2f(1106.0,320.0); //point W
	glVertex2f(1118.0,469.0); //point X
	glVertex2f(1122.0,320.0); //point Y
    glEnd();
	glFlush();
}

void sea()
{
	/*glClear(GL_COLOR_BUFFER_BIT):*/
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.1,0.7);
	glVertex2f(0.0,0.0);
	glVertex2f(0.0,320.0);
	glVertex2f(2000.0,320.0);
	glVertex2f(2000.0,0.0);
	glEnd();
	//glFlush();
}

void ship()
{
	GLint i,x1=140,y1=350,x2=143,y2=354,y3=340,y4=343,y5=330,y6=333,y7=370,y8=374,n=250,z;
	GLint n1=165,n2=280;
	glPushMatrix();
	glClear(GL_COLOR_BUFFER_BIT);
	
	//lower black surface
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(120,300);
	glVertex2f(110,360);
	glVertex2f(420,360);
	glVertex2f(390,300);
	glEnd();
	//glFlush();
	//windows for lower black surface
	for(i=0;i<n;i+=15)
	{
		windows(x1+i,x2+i,y1,y2);
		windows(x1+i,x2+i,y3,y4);
		windows(x1+i,x2+i,y5,y6);
    }
	//glFlush();

	//lower red surface
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(120,290);
	glVertex2f(120,300);
	glVertex2f(390,300);
	glVertex2f(385,290);
	glEnd();
	//glFlush();

	//upper surface above black part of the ship
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(115,360);
	glVertex2f(115,380);
	glVertex2f(410,380);
	glVertex2f(410,360);
	glEnd();
	//glFlush();
	//windows for upper surface above black part of the ship
	for(i=0;i<n2;i+=20) 
	{
		glColor3f(1.0,0.0,0.0);
		glBegin(GL_POLYGON);
		glVertex2f(120+i,365);
		glVertex2f(120+i,375);
		glVertex2f(130+i,375);
		glVertex2f(130+i,365);
		glEnd();
		//glFlush();
	}
	//second white block
	glColor3f(0.95,0.95,0.95);
		glBegin(GL_POLYGON);
		glVertex2f(160,378);
		glVertex2f(160,440);
		glVertex2f(377,440);
		glVertex2f(377,378);
		glEnd();
		//glFlush();
		//windows for second white block
		for(i=0;i<n1;i+=50)
		{
			glColor3f(0.0,0.0,0.0);
		glBegin(GL_POLYGON);
		glVertex2f(170+i,425);
		glVertex2f(170+i,435);
		glVertex2f(210+i,435);
		glVertex2f(210+i,425);
		glEnd();
		//glFlush();
		}
		for(i=0;i<n1;i+=50)
		{
			glColor3f(0.0,0.0,0.0);
			glBegin(GL_POLYGON);
		glVertex2f(170+i,410);
		glVertex2f(170+i,420);
		glVertex2f(210+i,420);
		glVertex2f(210+i,410);
		glEnd();
		//glFlush();
		}
		for(i=0;i<n1;i+=50)
		{
			glColor3f(0.0,0.0,0.0);
			glBegin(GL_POLYGON);
		glVertex2f(170+i,395);
		glVertex2f(170+i,405);
		glVertex2f(210+i,405);
		glVertex2f(210+i,395);
		glEnd();
		//glFlush();
		}
		for(i=0;i<n1;i+=50)
		{
			glColor3f(0.0,0.0,0.0);
			glBegin(GL_POLYGON);
		glVertex2f(170+i,380);
		glVertex2f(170+i,390);
		glVertex2f(210+i,390);
		glVertex2f(210+i,380);
		glEnd();
		//glFlush();
		}

		//steps on the left side
		glColor3f(1.0,0.0,0.0);
		glBegin(GL_POLYGON);
		glVertex2f(125,380);
		glVertex2f(125,395);
		glVertex2f(160,395);
		glVertex2f(160,380);
		glEnd();
		//glFlush();
		glColor3f(1.0,1.0,1.0);
		glBegin(GL_POLYGON);
		glVertex2f(130,395);
		glVertex2f(130,410);
		glVertex2f(160,410);
		glVertex2f(160,395);
		glEnd();
		//glFlush();
		glColor3f(1.0,0.0,0.0);
		glBegin(GL_POLYGON);
		glVertex2f(140,410);
		glVertex2f(140,425);
		glVertex2f(160,425);
		glVertex2f(160,410);
		glEnd();
		glPopMatrix();
		//glFlush();

		//top cylinder1.1 part
		glColor3f(1.0,1.0,1.0);
	    glBegin(GL_POLYGON);
	    glVertex2f(205,440);
	    glVertex2f(205,484);
	    glVertex2f(235,484);
	    glVertex2f(235,440);
	    glEnd();
	    //glFlush();
		//top cylinder1.2 part
		glColor3f(1.0,0.0,0.0);
	    glBegin(GL_POLYGON);
	    glVertex2f(205,484);
	    glVertex2f(205,489);
	    glVertex2f(235,489);
	    glVertex2f(235,484);
	    glEnd();
	    //glFlush();
		//top cylinder2.1 part
		glColor3f(1.0,1.0,1.0);
	    glBegin(GL_POLYGON);
	    glVertex2f(245,440);
	    glVertex2f(245,484);
	    glVertex2f(275,484);
	    glVertex2f(275,440);
	    glEnd();
	    //glFlush();
        //top cylinder2.2 part
		glColor3f(1.0,0.0,0.0);
	    glBegin(GL_POLYGON);
	    glVertex2f(245,484);
	    glVertex2f(245,489);
	    glVertex2f(275,489);
	    glVertex2f(275,484);
	    glEnd();
	    //glFlush();


		//top red1 balcony part
		glColor3f(1.0,0.0,0.0);
	    glBegin(GL_POLYGON);
	    glVertex2f(170,440);
	    glVertex2f(170,460);
	    glVertex2f(173,460);
	    glVertex2f(173,440);
	    glEnd();
	    //glFlush();

		//top red2 balcony part
		glColor3f(1.0,0.0,0.0);
	    glBegin(GL_POLYGON);
	    glVertex2f(183,440);
	    glVertex2f(183,460);
	    glVertex2f(187,460);
	    glVertex2f(187,440);
	    glEnd();
	    //glFlush();

		//top red3 balcony part
		glColor3f(1.0,0.0,0.0);
	    glBegin(GL_POLYGON);
	    glVertex2f(197,440);
	    glVertex2f(197,460);
	    glVertex2f(201,460);
	    glVertex2f(201,440);
	    glEnd();
	    //glFlush();

		//top red4 balcony part
		glColor3f(1.0,0.0,0.0);
	    glBegin(GL_POLYGON);
	    glVertex2f(211,440);
	    glVertex2f(211,460);
	    glVertex2f(215,460);
	    glVertex2f(215,440);
	    glEnd();
	    //glFlush();

		//top red5 balcony part
		glColor3f(1.0,0.0,0.0);
	    glBegin(GL_POLYGON);
	    glVertex2f(225,440);
	    glVertex2f(225,460);
	    glVertex2f(229,460);
	    glVertex2f(229,440);
	    glEnd();
	    //glFlush();

		//top red6 balcony part
		glColor3f(1.0,0.0,0.0);
	    glBegin(GL_POLYGON);
	    glVertex2f(239,440);
	    glVertex2f(239,460);
	    glVertex2f(243,460);
	    glVertex2f(243,440);
	    glEnd();
	    //glFlush();

		//top red7 balcony part
		glColor3f(1.0,0.0,0.0);
	    glBegin(GL_POLYGON);
	    glVertex2f(253,440);
	    glVertex2f(253,460);
	    glVertex2f(257,460);
	    glVertex2f(257,440);
	    glEnd();
	    //glFlush();

		//top red8 balcony part
		glColor3f(1.0,0.0,0.0);
	    glBegin(GL_POLYGON);
	    glVertex2f(267,440);
	    glVertex2f(267,460);
	    glVertex2f(271,460);
	    glVertex2f(271,440);
	    glEnd();
	    //glFlush();

		//top red9 balcony part
		glColor3f(1.0,0.0,0.0);
	    glBegin(GL_POLYGON);
	    glVertex2f(281,440);
	    glVertex2f(281,460);
	    glVertex2f(285,460);
	    glVertex2f(285,440);
	    glEnd();
	    //glFlush();

		//top red10 balcony part
		glColor3f(1.0,0.0,0.0);
	    glBegin(GL_POLYGON);
	    glVertex2f(295,440);
	    glVertex2f(295,460);
	    glVertex2f(299,460);
	    glVertex2f(299,440);
	    glEnd();
	    //glFlush();

		//top red11 balcony part
		glColor3f(1.0,0.0,0.0);
	    glBegin(GL_POLYGON);
	    glVertex2f(309,440);
	    glVertex2f(309,460);
	    glVertex2f(313,460);
	    glVertex2f(313,440);
	    glEnd();
	    //glFlush();

		//top red12 balcony part
		glColor3f(1.0,0.0,0.0);
	    glBegin(GL_POLYGON);
	    glVertex2f(323,440);
	    glVertex2f(323,460);
	    glVertex2f(327,460);
	    glVertex2f(327,440);
	    glEnd();
	    //glFlush();

		
		//top red13 balcony part
		glColor3f(1.0,0.0,0.0);
	    glBegin(GL_POLYGON);
	    glVertex2f(337,440);
	    glVertex2f(337,460);
	    glVertex2f(341,460);
	    glVertex2f(341,440);
	    glEnd();
	    //glFlush();

		
		//top red14 balcony part
		glColor3f(1.0,0.0,0.0);
	    glBegin(GL_POLYGON);
	    glVertex2f(351,440);
	    glVertex2f(351,460);
	    glVertex2f(355,460);
	    glVertex2f(355,440);
	    glEnd();
	    //glFlush();

		//top red15 balcony part
		glColor3f(1.0,0.0,0.0);
	    glBegin(GL_POLYGON);
	    glVertex2f(365,440);
	    glVertex2f(365,460);
	    glVertex2f(369,460);
	    glVertex2f(369,440);
	    glEnd();
	    //glFlush();

		//top redroof balcony part
		glColor3f(1.0,0.0,0.0);
	    glBegin(GL_POLYGON);
	    glVertex2f(170,460);
	    glVertex2f(170,465);
	    glVertex2f(369,465);
	    glVertex2f(369,460);
	    glEnd();
	    //glFlush();
}
    
	  void windows(int x1,int x2,int y1,int y2)
	  {
		glColor3f(1.0,0.0,0.0);
		glBegin(GL_POLYGON);
		glVertex2f(x1,y1);
		glVertex2f(x2,y1);
		glVertex2f(x2,y2);
		glVertex2f(x2,y2);
		glEnd();
	  }

	  void myinit()
	  {
		  glClearColor(0.1,0.1,0.1,1.0);
		  gluOrtho2D(0.0,1200.0,0.0,1200.0);
	  }
	  void main(int argc,char **argv)
	  {
		  glutInit(&argc,argv);
		  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
		  glutInitWindowSize(900,900);
		  glutInitWindowPosition(10,10);
		  glutCreateWindow("body");
		  glutDisplayFunc(display);
		  myinit();
		  glutTimerFunc(100,update,0);
		  glutMainLoop();
	  }
    





	