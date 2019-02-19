// my projt.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
#include<string.h>
#include<stdio.h>
#include<glut.h>
#define GL_PI 3.1412
void windmill();
void tostring(char [], int);
void output(float x, float y, float r, float g, float b,char *string);
void grass_1();
void building_1();
void building_p();
void building_2();
void building_3();
void bus(); 
void moon(int b);
void moon1();
void road();
void signalboard();
void timer1(int value);
void Timer1(int value);
void car1();
void car2();
void lorry();
void strip();
void strip1();
void mydisplay();
void display();
void frontscreen(void);
void setFont();
void sun(int b);
void update();
void update1();
void helpscreen();
GLint a=500,b=-300,d=600,flag=0,traffic_regulator=1,control_keyl,control_keyr,c=-1000;
GLfloat red=1,blue=0.00001,green=0.8;
char str[10];
int w=0;
int re=0,bl=0;
int num=50;
GLfloat p=0,q=0,r=0;
//-----------
float rate = 1.0f,angle = 1.0,spin=1.0;  
int pj=0;
void Timer(int value) 
{
    windmill();      // Post re-paint request to activate display()
  //glutTimerFunc(200, Timer, 0); // next Timer call milliseconds later
}
void Timer1(int value)
{
	if(w!=1)
	{
		w+=1;
	}
	else
	{
		w-=0.005;

	}
	glutPostRedisplay();
}

void frontscreen(void)
{
	//background for cover page
glClearColor(0,0,0,0);
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1,0,0);
output(550.0,700.0,1.0,1.0,0.8,"K.S INSTITUTE OF TECHNOLOGY");
output(435,650,0.2,1.0,0.5,"DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING");
output(570,570,0.5,0.0,0.9,"A MINI PROJECT ON");
output(565,500,w,0,1,"SIMULATION OF CITY");
glutTimerFunc(700,Timer1,0);
output(235,400,0,0.6,0.6,"BY:");
output(155,350,0,0,1,"SWEATHA SURESH B");
output(180,300,0,0,1,"(1KS12CS107)");
output(970,400,0,0.6,0.6,"UNDER THE GUIDANCE OF:");
output(980,355,0,0,1,"SOUGANDHIKA NARAYAN");
output(980,315,0,0,1,"PRADEEP KUMAR G H");
output(555,100,1,0,1,"PRESS ENTER TO START");
glFlush();
}

void windmill()
{
	
 glPushMatrix();
 glTranslated(36,25.0,-1.0);
glScaled(1.0,1.0,0.0);
glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(172.0f, 665.0f);
glVertex2f(172,645);
glEnd();
glPopMatrix();
// prop
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
int a=0,b=0;
glTranslated(36,25.0,-1.0);
glScaled(1.0,1.0,0.0);
glRotatef(angle,172,665, 0.0f); 
glBegin(GL_TRIANGLES);
glColor3f(0.0f,0.0f,1.0f);
glVertex2f(172.0, 665.0f);
glVertex2f(120, 685);
glVertex2f(120, 675);
glColor3f(0.0f, 0.0f, 1.0f);
glVertex2f(172, 665);
glVertex2f(224.0f, 685.0f);
glVertex2f(224, 675.0);
glEnd();
glPopMatrix();
}


void myKeyboard( unsigned char key, int x, int y )
{
switch(key)
{
	case 13:
		if(flag==1)
		{
			flag=2;
			mydisplay();
		}
		if(flag==0) //Ascii of 'enter' key is 13
		{
	flag=2;
	mydisplay();
		}		
}
    
}



void mydisplay(void)
{
glClear(GL_COLOR_BUFFER_BIT);
if(flag==0)
frontscreen ();
if(flag==2)
display();
glutSwapBuffers();
}

void upd(int value) //function to update the object and change day to night
{

	b=b+6;//sun n moon
	angle=angle+rate*15;//wind mill
	if(red!=0 && blue!=0)//making day to night
{
	red-=.0038;blue-=.0038;green-=.0038;
	sun(b);
	moon(b);
}
	glutPostRedisplay();
}


void update(int value) // update the vehicle function
{
a=a-6;//bus
c=c+9;//lorry n car1
d=d-9;//car2
glutPostRedisplay();//used to call display fn again
}


void display(void)
{
	glutTimerFunc(7,upd,0);
	if(traffic_regulator)
	{
glutTimerFunc(60,update,0);//updated values will be displayed
	}
glClear(GL_COLOR_BUFFER_BIT);
glClearColor(red,green,blue,0);//back ground for sky
moon(b);
sun(b);
road();
building_p();
building_1();
grass_1();
building_2();
windmill();
strip();
strip1();
car1();
signalboard();
bus();
lorry();
car2();
output(185,655,0,0,1,"KSIT");
output(360,695,0,0,1,"KSP");
output(800,545,0,0,0,"GOLI");
output(890,525,0,0,0,"HUT TEA");
output(1220,550,0,0,0,"ADIGAS");
}

void sun(int b)
{
	if(b<=1600)
	{
	glColor3f(0.9,0,0);
		glPushMatrix();
	glTranslated(450,375.0-b/8,-1.0);
glScaled(10.0,10.0,0.0);
int x1=30,y1=30;//center of circle
float x,y,angle=0.0;//outer circle
glBegin(GL_POLYGON);

			for(angle=0.0; angle<=(2*GL_PI);angle+=GL_PI/100.0f)
			{
				x=2.0 *sin(angle)+x1;
				y=2.0 *cos(angle)+y1;
				glVertex2f(x,y);
			}
glEnd();
glPopMatrix();	
}
}
void moon(int b)
{
		if(b<=1800)
	{
glPointSize(4.0);
glPushMatrix();
glColor3f(1.0,1.0,1.0);
glTranslated(810,340+b/8,-1.0);
glScaled(5.0,5.0,0.0);
int x1=30,y1=30;//center of circle
float x=0,y=0,angle=0.0;//outer circle
glBegin(GL_POINTS);


		for(angle=0.0; angle<=GL_PI;angle+=GL_PI/500.0f)
			{
				x=-4.0 *sin(angle)+x1;//outer
				y=-4.0 *cos(angle)+y1;//outer
				float x0=-1.0 *sin(angle)+x1;//inner circle
				float y0=-4.0 *cos(angle)+y1;//inner circle
				glBegin(GL_LINES);
				glVertex2f(x,y);
				glVertex2f(x0,y0);
				glEnd();
				glFlush();
			}
			
glEnd();
glPopMatrix();
}
		else
		{
	moon1();
		}
			
}
void moon1()

{
	glPointSize(4.0);
glPushMatrix();
glColor3f(1.0,1.0,1.0);
glTranslated(810,565,-1.0);
glScaled(5.0,5.0,0.0);
int x1=30,y1=30;
float x,y,angle=0.0;
glBegin(GL_POINTS);

			for(angle=0.0; angle<=GL_PI;angle+=GL_PI/500.0f)
			{
				x=-4.0 *sin(angle)+x1;
				y=-4.0 *cos(angle)+y1;
				float x0=-1.0 *sin(angle)+x1;
				float y0=-4.0 *cos(angle)+y1;
				glBegin(GL_LINES);
				glVertex2f(x,y);
				glVertex2f(x0,y0);
				glEnd();
				glFlush();
			}
			
glEnd();
glPopMatrix();  
}  

void grass_1()
{
	glPushMatrix();
	glTranslated(290,200.0,-1.0);
	glScaled(10.0,20.0,0.0);
glColor3f(0.0,0.5,0.0);
glBegin(GL_POLYGON);
glVertex2f(13,10);
glVertex2f(11,11);
glVertex2f(18,11);
glVertex2f(16,10);
glEnd();

glColor3f(0.0,0.7,0.0);
glBegin(GL_POLYGON);
glVertex2f(13.5,11);
glVertex2f(12,12);
glVertex2f(17,12);
glVertex2f(15.5,11);
glEnd();

glColor3f(0.0,0.9,0.0);
glBegin(GL_POLYGON);
glVertex2f(13.3,12);
glVertex2f(14.5,13);
glVertex2f(15.7,12);
glEnd();
glPopMatrix();
}
		
void building_1()
{
	glPushMatrix();
	//1st building
	glTranslated(-90,300.0,-1.0);
glScaled(10.0,10.0,0.0);
glColor3f(0.5,0.5,0.5);
glBegin(GL_POLYGON);
glVertex2f(10,10);
glVertex2f(10,35);
glVertex2f(35,35);
glVertex2f(35,10);
glEnd();
//back
glColor3f(0.3,0.3,0.3);
glBegin(GL_POLYGON);
glVertex2f(35,10);
glVertex2f(35,35);
glVertex2f(40,30);
glVertex2f(40,10);
glEnd();

//board
glColor3f(0.7,0.7,0.7);
glBegin(GL_POLYGON);
glVertex2f(25,35);
glVertex2f(25,37);
glVertex2f(35,37);
glVertex2f(35,35);
glEnd();

//doors
glColor3f(0.2,0.2,0.4);
glBegin(GL_POLYGON);
glVertex2f(19,10);
glVertex2f(19,16);
glVertex2f(26,16);
glVertex2f(26,10);
glEnd();

//windows
glColor3f(0.9,0.9,0);
glBegin(GL_POLYGON);
glVertex2f(11,13);
glVertex2f(11,14);
glVertex2f(18,14);
glVertex2f(18,13);
glEnd();

glColor3f(0.9,0.9,0);
glBegin(GL_POLYGON);
glVertex2f(11,11);
glVertex2f(11,12);
glVertex2f(18,12);
glVertex2f(18,11);
glEnd();

glColor3f(0.9,0.9,0);
glBegin(GL_POLYGON);
glVertex2f(11,15);
glVertex2f(11,16);
glVertex2f(18,16);
glVertex2f(18,15);
glEnd();

glColor3f(0.9,0.9,0);
glBegin(GL_POLYGON);
glVertex2f(27,13);
glVertex2f(27,14);
glVertex2f(34,14);
glVertex2f(34,13);
glEnd();

glColor3f(0.9,0.9,0);
glBegin(GL_POLYGON);
glVertex2f(27,11);
glVertex2f(27,12);
glVertex2f(34,12);
glVertex2f(34,11);
glEnd();

glColor3f(0.9,0.9,0);
glBegin(GL_POLYGON);
glVertex2f(27,15);
glVertex2f(27,16);
glVertex2f(34,16);
glVertex2f(34,15);
glEnd();

glColor3f(0.9,0.9,0);
glBegin(GL_POLYGON);
glVertex2f(11,17);
glVertex2f(11,18);
glVertex2f(34,18);
glVertex2f(34,17);
glEnd();

glColor3f(0.9,0.9,0);
glBegin(GL_POLYGON);
glVertex2f(11,19);
glVertex2f(11,20);
glVertex2f(34,20);
glVertex2f(34,19);
glEnd();

glColor3f(0.9,0.9,0);
glBegin(GL_POLYGON);
glVertex2f(11,21);
glVertex2f(11,22);
glVertex2f(34,22);
glVertex2f(34,21);
glEnd();

glColor3f(0.9,0.9,0);
glBegin(GL_POLYGON);
glVertex2f(11,23);
glVertex2f(11,24);
glVertex2f(34,24);
glVertex2f(34,23);
glEnd();

glColor3f(0.9,0.9,0);
glBegin(GL_POLYGON);
glVertex2f(11,25);
glVertex2f(11,26);
glVertex2f(34,26);
glVertex2f(34,25);
glEnd();

glColor3f(0.9,0.9,0);
glBegin(GL_POLYGON);
glVertex2f(11,27);
glVertex2f(11,28);
glVertex2f(34,28);
glVertex2f(34,27);
glEnd();

glColor3f(0.9,0.9,0);
glBegin(GL_POLYGON);
glVertex2f(11,29);
glVertex2f(11,30);
glVertex2f(34,30);
glVertex2f(34,29);
glEnd();

glColor3f(0.9,0.9,0);
glBegin(GL_POLYGON);
glVertex2f(11,31);
glVertex2f(11,32);
glVertex2f(34,32);
glVertex2f(34,31);
glEnd();

glColor3f(0.9,0.9,0);
glBegin(GL_POLYGON);
glVertex2f(11,33);
glVertex2f(11,34);
glVertex2f(34,34);
glVertex2f(34,33);
glEnd();
glPopMatrix();
}

void building_p()
{
	glPushMatrix();
	glTranslated(-70,300.0,-1.0);
glScaled(10.0,10.0,0.0);
glColor3f(0,0,0.9);
glBegin(GL_POLYGON);
glVertex2f(37,10);
glVertex2f(37,39);
glVertex2f(47,39);
glVertex2f(47,10);
glEnd();

glColor3f(0,0,0.5);
glBegin(GL_POLYGON);
glVertex2f(47,10);
glVertex2f(47,39);
glVertex2f(50,34);
glVertex2f(50,10);
glEnd();

//board
glColor3f(0.6,0.6,0.6);
glBegin(GL_POLYGON);
glVertex2f(42,39);
glVertex2f(42,41);
glVertex2f(47,41);
glVertex2f(47,39);
glEnd();

glColor3f(0.8,0,0.8);
glBegin(GL_POLYGON);
glVertex2f(38,11);
glVertex2f(38,13);
glVertex2f(46,13);
glVertex2f(46,11);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(38,14);
glVertex2f(38,16);
glVertex2f(46,16);
glVertex2f(46,14);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(38,17);
glVertex2f(38,19);
glVertex2f(46,19);
glVertex2f(46,17);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(38,20);
glVertex2f(38,22);
glVertex2f(46,22);
glVertex2f(46,20);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(38,23);
glVertex2f(38,25);
glVertex2f(46,25);
glVertex2f(46,23);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(38,26);
glVertex2f(38,28);
glVertex2f(46,28);
glVertex2f(46,26);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(38,29);
glVertex2f(38,31);
glVertex2f(46,31);
glVertex2f(46,29);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(38,32);
glVertex2f(38,34);
glVertex2f(46,34);
glVertex2f(46,32);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(38,35);
glVertex2f(38,37);
glVertex2f(46,37);
glVertex2f(46,35);
glEnd();
glPopMatrix();
}

void building_2()
{
	glPushMatrix();
	//1st building
glTranslated(575,300.0,-1.0);
glScaled(10.0,10.0,0.0);
glColor3f(0.3,0.2,0.7);
glBegin(GL_POLYGON);
glVertex2f(10,10);
glVertex2f(10,30);
glVertex2f(20,31);
glVertex2f(20,10);
glEnd();

glColor3f(0.3,0.2,0.2);
glBegin(GL_POLYGON);
glVertex2f(11,10);
glVertex2f(11,29);
glVertex2f(19,29);
glVertex2f(19,10);
glEnd();

//door
glColor3f(0,0.7,0.9);
glBegin(GL_POLYGON);
glVertex2f(13,10);
glVertex2f(13,14);
glVertex2f(17,14);
glVertex2f(17,10);
glEnd();
//window
glBegin(GL_POLYGON);
glVertex2f(12,15);
glVertex2f(12,17);
glVertex2f(18,17);
glVertex2f(18,15);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(12,18);
glVertex2f(12,20);
glVertex2f(18,20);
glVertex2f(18,18);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(12,21);
glVertex2f(12,23);
glVertex2f(18,23);
glVertex2f(18,21);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(12,24);
glVertex2f(12,26);
glVertex2f(18,26);
glVertex2f(18,24);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(12,27);
glVertex2f(12,28);
glVertex2f(18,28);
glVertex2f(18,27);
glEnd();

//2nd building
glColor3f(0.5,0.2,0.5);
glBegin(GL_POLYGON);
glVertex2f(20,10);
glVertex2f(20,25);
glVertex2f(25,31);
glVertex2f(30,25);
glVertex2f(30,10);
glEnd();

//board
glColor3f(0.8,0.4,0.5);
glBegin(GL_POLYGON);
glVertex2f(22,24);
glVertex2f(22,26);
glVertex2f(28,26);
glVertex2f(28,24);
glEnd();

//door
glColor3f(0,0.5,1);
glBegin(GL_POLYGON);
glVertex2f(23.5,10);
glVertex2f(23.5,13.5);
glVertex2f(26.5,13.5);
glVertex2f(26.5,10);
glEnd();
//windows
glColor3f(0,0,0.6);
glBegin(GL_POLYGON);
glVertex2f(21,11);
glVertex2f(21,13);
glVertex2f(22,13);
glVertex2f(22,11);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(21,14);
glVertex2f(21,16);
glVertex2f(22,16);
glVertex2f(22,14);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(21,17);
glVertex2f(21,19);
glVertex2f(22,19);
glVertex2f(22,17);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(21,20);
glVertex2f(21,22);
glVertex2f(22,22);
glVertex2f(22,20);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(28,14);
glVertex2f(28,16);
glVertex2f(29,16);
glVertex2f(29,14);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(28,11);
glVertex2f(28,13);
glVertex2f(29,13);
glVertex2f(29,11);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(28,17);
glVertex2f(28,19);
glVertex2f(29,19);
glVertex2f(29,17);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(28,20);
glVertex2f(28,22);
glVertex2f(29,22);
glVertex2f(29,20);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(23,14);
glVertex2f(23,16);
glVertex2f(24.5,16);
glVertex2f(24.5,14);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(23,17);
glVertex2f(23,19);
glVertex2f(24.5,19);
glVertex2f(24.5,17);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(23,20);
glVertex2f(23,22);
glVertex2f(24.5,22);
glVertex2f(24.5,20);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(25.5,14);
glVertex2f(25.5,16);
glVertex2f(27,16);
glVertex2f(27,14);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(25.5,17);
glVertex2f(25.5,19);
glVertex2f(27,19);
glVertex2f(27,17);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(25.5,20);
glVertex2f(25.5,22);
glVertex2f(27,22);
glVertex2f(27,20);
glEnd();

//back building
glColor3f(0.5,0,0);
glBegin(GL_POLYGON);
glVertex2f(35,10);
glVertex2f(35,30);
glVertex2f(43,30);
glVertex2f(43,10);
glEnd();

glColor3f(0.3,0,0);
glBegin(GL_POLYGON);
glVertex2f(43,10);
glVertex2f(43,30);
glVertex2f(45,26);
glVertex2f(45,10);
glEnd();

//window
glColor3f(0,0.9,0.9);
glBegin(GL_POLYGON);
glVertex2f(36,27);
glVertex2f(36,29);
glVertex2f(42,29);
glVertex2f(42,27);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(36,26);
glVertex2f(36,24);
glVertex2f(42,24);
glVertex2f(42,26);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(36,23);
glVertex2f(36,21);
glVertex2f(42,21);
glVertex2f(42,23);
glEnd();

//3rd building
glColor3f(0.1,0.2,0.5);
glBegin(GL_POLYGON);
glVertex2f(30,10);
glVertex2f(30,25);
glVertex2f(40,25);
glVertex2f(40,10);
glEnd();

//board
glColor3f(0.9,0,0.9);
glBegin(GL_POLYGON);
glVertex2f(31,22);
glVertex2f(31,24);
glVertex2f(39,24);
glVertex2f(39,22);
glEnd();

//door
glColor3f(0.8,0,0);
glBegin(GL_POLYGON);
glVertex2f(32,10);
glVertex2f(31,18);
glVertex2f(35,21);
glVertex2f(39,18);
glVertex2f(38,10);
glEnd();

glColor3f(0,0,0.5);
glBegin(GL_POLYGON);
glVertex2f(33,10);
glVertex2f(32,18);
glVertex2f(35,20);
glVertex2f(38,18);
glVertex2f(37,10);
glEnd();

//4th building
glColor3f(0.4,0.4,0.5);
glBegin(GL_POLYGON);
glVertex2f(40,10);
glVertex2f(40,20);
glVertex2f(55,20);
glVertex2f(55,10);
glEnd();

//window
glColor3f(0,0,0.5);
glBegin(GL_POLYGON);
glVertex2f(41,11);
glVertex2f(41,13);
glVertex2f(43,13);
glVertex2f(43,11);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(45,11);
glVertex2f(45,13);
glVertex2f(47,13);
glVertex2f(47,11);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(45,14);
glVertex2f(45,16);
glVertex2f(47,16);
glVertex2f(47,14);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(49,11);
glVertex2f(49,13);
glVertex2f(51,13);
glVertex2f(51,11);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(49,14);
glVertex2f(49,16);
glVertex2f(51,16);
glVertex2f(51,14);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(52.5,11);
glVertex2f(52.5,13);
glVertex2f(54,13);
glVertex2f(54,11);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(41,14);
glVertex2f(41,16);
glVertex2f(43,16);
glVertex2f(43,14);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(52.5,14);
glVertex2f(52.5,16);
glVertex2f(54,16);
glVertex2f(54,14);
glEnd();

//terrace
glBegin(GL_POLYGON);
glVertex2f(40,17);
glVertex2f(40,18);
glVertex2f(55,18);
glVertex2f(55,17);
glEnd();

//5th building
glColor3f(0.4,0.2,0.2);
glBegin(GL_POLYGON);
glVertex2f(55,10);
glVertex2f(55,30);
glVertex2f(57.5,35);
glVertex2f(60,30);
glVertex2f(60,10);
glEnd();

//window
glColor3f(0.4,0.4,0);
glBegin(GL_POLYGON);
glVertex2f(56,11);
glVertex2f(56,30);
glVertex2f(59,30);
glVertex2f(59,11);
glEnd();

glColor3f(0,0,0);
glBegin(GL_LINES);
glVertex2f(57.5,11);
glVertex2f(57.5,30);
glVertex2f(56,13);
glVertex2f(59,13);
glVertex2f(56,15);
glVertex2f(59,15);
glVertex2f(56,17);
glVertex2f(59,17);
glVertex2f(56,19);
glVertex2f(59,19);
glVertex2f(56,21);
glVertex2f(59,21);
glVertex2f(56,23);
glVertex2f(59,23);
glVertex2f(56,25);
glVertex2f(59,25);
glVertex2f(56,27);
glVertex2f(59,27);
glVertex2f(56,29);
glVertex2f(59,29);
glEnd();

//7th building
glColor3f(0.4,0,0.9);
glBegin(GL_POLYGON);
glVertex2f(68,10);
glVertex2f(68,30);
glVertex2f(80,30);
glVertex2f(80,10);
glEnd();

glColor3f(0.4,0.6,0);
glBegin(GL_POLYGON);
glVertex2f(66,10);
glVertex2f(66,28);
glVertex2f(78,28);
glVertex2f(78,10);
glEnd();

//6th building
glColor3f(0.4,0.5,0.9);
glBegin(GL_POLYGON);
glVertex2f(60,10);
glVertex2f(60,26);
glVertex2f(75,26);
glVertex2f(75,10);
glEnd();

glColor3f(0.4,0,0.4);
glBegin(GL_POLYGON);
glVertex2f(62,10);
glVertex2f(62,28);
glVertex2f(73,28);
glVertex2f(73,10);
glEnd();

//board
glColor3f(0.9,0,0.9);
glBegin(GL_POLYGON);
glVertex2f(63,24);
glVertex2f(63,27);
glVertex2f(72,27);
glVertex2f(72,24);
glEnd();

//window
glColor3f(0.4,0.9,0.4);
glBegin(GL_POLYGON);
glVertex2f(63,11);
glVertex2f(63,16);
glVertex2f(66,16);
glVertex2f(66,11);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(69,11);
glVertex2f(69,16);
glVertex2f(72,16);
glVertex2f(72,11);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(63,17);
glVertex2f(63,22);
glVertex2f(66,22);
glVertex2f(66,17);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(69,17);
glVertex2f(69,22);
glVertex2f(72,22);
glVertex2f(72,17);
glEnd();

glColor3f(0,0,0);
glBegin(GL_LINES);
glVertex2f(64.5,11);
glVertex2f(64.5,16);
glVertex2f(64.5,17);
glVertex2f(64.5,22);
glVertex2f(70.5,11);
glVertex2f(70.5,16);
glVertex2f(70.5,17);
glVertex2f(70.5,22);
glEnd();
glPopMatrix();
}

void road()
{
glPushMatrix();
glScaled(40.0,40.0,0.0);
glColor3f(0.1555,0.1555,0.1555);
glBegin(GL_POLYGON);
//straight road
glVertex2f(0,5);
glVertex2f(40,5);
glVertex2f(40,10);
glVertex2f(0,10);
glEnd();

//green edge
glBegin(GL_POLYGON);
glColor3f(0.1,0.2,0.1);
glVertex2f(0,5);
glVertex2f(40,5);
glVertex2f(40,4);
glVertex2f(0,4);
glEnd();
//cross road
glColor3f(0.1555,0.1555,0.1555);
glBegin(GL_POLYGON);
glVertex2f(10,10);
glVertex2f(40,15);
glVertex2f(45,15);
glVertex2f(35,10);
glEnd();
glPopMatrix();
}

void strip()
{
	glPushMatrix();
glScaled(5.0,5.0,0.0);
glTranslatef(20,55,0);
	glColor3f(1,1,1);
	for(int i=10;i<=3000;i+=50)
	{
glBegin(GL_POLYGON);
//straight road
glVertex2f(0+i,5);
glVertex2f(20+i,5);
glVertex2f(20+i,6);
glVertex2f(0+i,6);
glEnd();
	}
glPopMatrix();
}
	
void strip1()
{
glPushMatrix();
glTranslated(250,300.0,-1.0);
glScaled(10.0,10.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(28,10);
glVertex2f(38,12);
glVertex2f(40,12);
glVertex2f(30,10);
glEnd();
glPopMatrix();
}

void car1()
{
glPushMatrix();
glTranslated(c-60,195.0,0.0);
glScaled(7.0,7.0,0.0);
glColor3f(0.1,0.3,0.8);
glBegin(GL_POLYGON);
glVertex2f(10,10);
glVertex2f(10,15);
glVertex2f(20,15);
glVertex2f(24,20);
glVertex2f(34,20);
glVertex2f(40,15);
glVertex2f(48,15);
glVertex2f(48,10);
glEnd();

//top line
glColor3f(0.1,0.1,0.2);
glBegin(GL_POLYGON);
glVertex2f(23.1,19.3);
glVertex2f(23.6,19.8);
glVertex2f(34.3,19.8);
glVertex2f(34.7,19.3);
glEnd();
//line
glColor3f(0.1,0.1,0.2);
glBegin(GL_LINES);
glPointSize(6);
glVertex2f(20,15);
glVertex2f(33,15);
glEnd();

//windows
glColor3f(0,0.8,1);
glBegin(GL_POLYGON);
glVertex2f(34,15);
glVertex2f(34,19);
glVertex2f(35,19);
glVertex2f(40,15);
glEnd();
//side window
glColor3f(0,0.8,1);
glBegin(GL_POLYGON);
glVertex2f(26,15);
glVertex2f(26,19);
glVertex2f(31,19);
glVertex2f(31,15);	
glEnd();
//back window
glColor3f(0,0.8,1);
glBegin(GL_POLYGON);
glVertex2f(17.2,15);
glVertex2f(22.6,19);
glVertex2f(23.5,19);
glVertex2f(19,15);	
glEnd();
glPopMatrix();

//tyre
glPushMatrix();//front tyre
glTranslated(c+120,200,0.0);
glScaled(25.0,25.0,0.0);
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(3.0,2.5);
glVertex2f(3.0,2.6);
glVertex2f(3.15,3.1);
glVertex2f(3.2,3.2);
glVertex2f(3.3,3.35);
glVertex2f(3.4,3.4);
glVertex2f(3.5,3.45);
glVertex2f(3.6,3.55);
glVertex2f(3.7,3.6);
glVertex2f(3.8,3.63);
glVertex2f(4.0,3.65);
glVertex2f(4.2,3.7);
glVertex2f(4.4,3.7);
glVertex2f(4.6,3.65);
glVertex2f(4.8,3.55);
glVertex2f(5.0,3.45);
glVertex2f(5.1,3.4);
glVertex2f(5.2,3.25);
glVertex2f(5.3,3.2);
glVertex2f(5.4,3.0);
glVertex2f(5.5,2.5);

glVertex2f(5.45,2.15);
glVertex2f(5.4,1.9);
glVertex2f(5.35,1.8);
glVertex2f(5.2,1.6);
glVertex2f(5.0,1.5);
glVertex2f(4.9,1.4);
glVertex2f(4.7,1.3);
glVertex2f(4.6,1.27);
glVertex2f(4.4,1.25);
glVertex2f(4.0,1.25);
glVertex2f(3.9,1.3);
glVertex2f(3.75,1.35);
glVertex2f(3.6,1.4);
glVertex2f(3.45,1.55);
glVertex2f(3.3,1.7);
glVertex2f(3.2,1.8);
glVertex2f(3.1,2.2);
glEnd();
glPopMatrix();

glPushMatrix();//back tyre
glTranslated(c-47,200,0.0);
glScaled(25.0,25.0,0.0);
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(3.0,2.5);
glVertex2f(3.0,2.6);
glVertex2f(3.15,3.1);
glVertex2f(3.2,3.2);
glVertex2f(3.3,3.35);
glVertex2f(3.4,3.4);
glVertex2f(3.5,3.45);
glVertex2f(3.6,3.55);
glVertex2f(3.7,3.6);
glVertex2f(3.8,3.63);
glVertex2f(4.0,3.65);
glVertex2f(4.2,3.7);
glVertex2f(4.4,3.7);
glVertex2f(4.6,3.65);
glVertex2f(4.8,3.55);
glVertex2f(5.0,3.45);
glVertex2f(5.1,3.4);
glVertex2f(5.2,3.25);
glVertex2f(5.3,3.2);
glVertex2f(5.4,3.0);
glVertex2f(5.5,2.5);

glVertex2f(5.45,2.15);
glVertex2f(5.4,1.9);
glVertex2f(5.35,1.8);
glVertex2f(5.2,1.6);
glVertex2f(5.0,1.5);
glVertex2f(4.9,1.4);
glVertex2f(4.7,1.3);
glVertex2f(4.6,1.27);
glVertex2f(4.4,1.25);
glVertex2f(4.0,1.25);
glVertex2f(3.9,1.3);
glVertex2f(3.75,1.35);
glVertex2f(3.6,1.4);
glVertex2f(3.45,1.55);
glVertex2f(3.3,1.7);
glVertex2f(3.2,1.8);
glVertex2f(3.1,2.2);
glEnd();
glPopMatrix();
}

void lorry()
{
glPushMatrix();
glTranslated(c-1120,180.0,0.0);
glScaled(7.0,7.0,0.0);
//front part
glColor3f(0,1,0);
glBegin(GL_POLYGON);
glVertex2f(30,10);
glVertex2f(30,25);
glVertex2f(39,25);
glVertex2f(45,20);
glVertex2f(45,10);
glEnd();

//ladder
glColor3f(0.4,0.4,0.2);
glBegin(GL_POLYGON);
glVertex2f(1,20);
glVertex2f(1,22);
glVertex2f(3,22);
glVertex2f(3,23);
glVertex2f(1,23);
glVertex2f(1,24);
glVertex2f(29,24);
glVertex2f(29,23);
glVertex2f(28,23);
glVertex2f(28,21);
glVertex2f(29,21);
glVertex2f(29,20);
glEnd();

glColor3f(0.1555,0.1555,0.1555);
glBegin(GL_POLYGON);
glVertex2f(2,20.5);
glVertex2f(2,23.5);
glVertex2f(5,23.5);
glVertex2f(5,20.5);
glEnd();

glColor3f(0.1555,0.1555,0.1555);
glBegin(GL_POLYGON);
glVertex2f(6.5,20.5);
glVertex2f(6.5,23.5);
glVertex2f(9.5,23.5);
glVertex2f(9.5,20.5);
glEnd();

glColor3f(0.1555,0.1555,0.1555);
glBegin(GL_POLYGON);
glVertex2f(11,20.5);
glVertex2f(11,23.5);
glVertex2f(14,23.5);
glVertex2f(14,20.5);
glEnd();

glColor3f(0.1555,0.1555,0.1555);
glBegin(GL_POLYGON);
glVertex2f(15.5,20.5);
glVertex2f(15.5,23.5);
glVertex2f(18.5,23.5);
glVertex2f(18.5,20.5);
glEnd();

glColor3f(0.1555,0.1555,0.1555);
glBegin(GL_POLYGON);
glVertex2f(20,20.5);
glVertex2f(20,23.5);
glVertex2f(23,23.5);
glVertex2f(23,20.5);
glEnd();

glColor3f(0.1555,0.1555,0.1555);
glBegin(GL_POLYGON);
glVertex2f(24.5,20.5);
glVertex2f(24.5,23.5);
glVertex2f(27,23.5);
glVertex2f(27,20.5);
glEnd();
//window
glColor3f(0.2,0.1,0.9);
glBegin(GL_POLYGON);
glVertex2f(31,19);
glVertex2f(31,24);
glVertex2f(39,24);
glVertex2f(44.2,19);
glEnd();

//back part
glColor3f(1,0,0);
glBegin(GL_POLYGON);
glVertex2f(0,10);
glVertex2f(0,20);
glVertex2f(30,20);
glVertex2f(30,10);
glEnd();

//back door
glLineWidth(3);
glBegin(GL_LINE_LOOP);
glColor3f(0,0,0);
glVertex2f(15,18);
glVertex2f(15,12);
glVertex2f(4,12);
glVertex2f(4,18);
glEnd();

glBegin(GL_LINE_LOOP);
glColor3f(0,0,0);
glVertex2f(25,18);
glVertex2f(25,12);
glVertex2f(15,12);
glVertex2f(15,18);
glEnd();
glPopMatrix();


//tyre
glPushMatrix();//front tyre
glTranslated(c-960,180,0.0);
glScaled(25.0,25.0,0.0);
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(3.0,2.5);
glVertex2f(3.0,2.6);
glVertex2f(3.15,3.1);
glVertex2f(3.2,3.2);
glVertex2f(3.3,3.35);
glVertex2f(3.4,3.4);
glVertex2f(3.5,3.45);
glVertex2f(3.6,3.55);
glVertex2f(3.7,3.6);
glVertex2f(3.8,3.63);
glVertex2f(4.0,3.65);
glVertex2f(4.2,3.7);
glVertex2f(4.4,3.7);
glVertex2f(4.6,3.65);
glVertex2f(4.8,3.55);
glVertex2f(5.0,3.45);
glVertex2f(5.1,3.4);
glVertex2f(5.2,3.25);
glVertex2f(5.3,3.2);
glVertex2f(5.4,3.0);
glVertex2f(5.5,2.5);

glVertex2f(5.45,2.15);
glVertex2f(5.4,1.9);
glVertex2f(5.35,1.8);
glVertex2f(5.2,1.6);
glVertex2f(5.0,1.5);
glVertex2f(4.9,1.4);
glVertex2f(4.7,1.3);
glVertex2f(4.6,1.27);
glVertex2f(4.4,1.25);
glVertex2f(4.0,1.25);
glVertex2f(3.9,1.3);
glVertex2f(3.75,1.35);
glVertex2f(3.6,1.4);
glVertex2f(3.45,1.55);
glVertex2f(3.3,1.7);
glVertex2f(3.2,1.8);
glVertex2f(3.1,2.2);
glEnd();
glPopMatrix();

glPushMatrix();//back tyre
glTranslated(c-1175,180,0.0);
glScaled(25.0,25.0,0.0);
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(3.0,2.5);
glVertex2f(3.0,2.6);
glVertex2f(3.15,3.1);
glVertex2f(3.2,3.2);
glVertex2f(3.3,3.35);
glVertex2f(3.4,3.4);
glVertex2f(3.5,3.45);
glVertex2f(3.6,3.55);
glVertex2f(3.7,3.6);
glVertex2f(3.8,3.63);
glVertex2f(4.0,3.65);
glVertex2f(4.2,3.7);
glVertex2f(4.4,3.7);
glVertex2f(4.6,3.65);
glVertex2f(4.8,3.55);
glVertex2f(5.0,3.45);
glVertex2f(5.1,3.4);
glVertex2f(5.2,3.25);
glVertex2f(5.3,3.2);
glVertex2f(5.4,3.0);
glVertex2f(5.5,2.5);

glVertex2f(5.45,2.15);
glVertex2f(5.4,1.9);
glVertex2f(5.35,1.8);
glVertex2f(5.2,1.6);
glVertex2f(5.0,1.5);
glVertex2f(4.9,1.4);
glVertex2f(4.7,1.3);
glVertex2f(4.6,1.27);
glVertex2f(4.4,1.25);
glVertex2f(4.0,1.25);
glVertex2f(3.9,1.3);
glVertex2f(3.75,1.35);
glVertex2f(3.6,1.4);
glVertex2f(3.45,1.55);
glVertex2f(3.3,1.7);
glVertex2f(3.2,1.8);
glVertex2f(3.1,2.2);
glEnd();
glPopMatrix();
}

void mymouse(int btn,int state,int,int)                                                  
{
	if(btn==GLUT_LEFT_BUTTON)//red
	{
	 p=1;
	 traffic_regulator=0;
	}
	else
		p=0;
if(btn==GLUT_RIGHT_BUTTON)//green
{
	r=1;
	traffic_regulator=1;
}
else
	r=0;
if(btn==GLUT_MIDDLE_BUTTON)//yellow
{
	q=1;
}
else
	q=0;
glutPostRedisplay();
}


void signalboard()
{	
glPushMatrix();
glTranslatef(260,-240,0);
glScaled(30.0,30.0,0.0);
glColor3f(0.8,0.6,0.4);
//board
glBegin(GL_POLYGON);
glVertex2f(10,12);
glVertex2f(16,12);
glVertex2f(16,10);
glVertex2f(10,10);
glEnd();
//red
glColor3f(p,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(10.5,11.5);
glVertex2f(11.5,11.5);
glVertex2f(11.5,10.5);
glVertex2f(10.5,10.5);
glEnd();
//yellow
glColor3f(q,q,0.0);
glPointSize(5.0);
glBegin(GL_POLYGON);
glVertex2f(12.5,11.5);
glVertex2f(13.5,11.5);
glVertex2f(13.5,10.5);
glVertex2f(12.5,10.5);
glEnd();
//green
glColor3f(0.0,r,0.0);
glBegin(GL_POLYGON);
glVertex2f(14.5,11.5);
glVertex2f(15.5,11.5);
glVertex2f(15.5,10.5);
glVertex2f(14.5,10.5);
glEnd();
glPopMatrix();
}

void output(float x, float y, float r, float g, float b,char *string)
{
  glColor3f(r,g,b);
  glRasterPos2f(x, y);
  int len, i;
  len = (int)strlen(string);
  for (i = 0; i < len; i++) 
  {
  glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,string[i]);
  }
}

void car2()
{
glPushMatrix();
glTranslated(d,80,0.0);
glScaled(25.0,35.0,0.0);
glBegin(GL_POLYGON);
glColor3f(0.7,0.2,0.1);
glVertex2f(35.5,8.3);
glVertex2f(35.5,9);
glVertex2f(38,9.5);
glVertex2f(39,10);
glVertex2f(45,10);
glVertex2f(46.2,9);
glVertex2f(46,8.3);
glEnd();

//window
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(38,9.3);
glVertex2f(39,9.9);
glVertex2f(44.5,9.9);
glVertex2f(45.3,9.3);
glEnd();

//lines for window
glLineWidth(3);
glBegin(GL_LINE_LOOP);
glColor3f(0,0,0);
glVertex2f(38,9.3);
glVertex2f(39,9.9);
glVertex2f(44.5,9.9);
glVertex2f(45.3,9.3);
glEnd();

glColor3f(0,0,0);
glLineWidth(2);
glBegin(GL_LINES);
glVertex2f(42,8.3);
glVertex2f(42,9.3);
glVertex2f(41.5,9.9);
glVertex2f(42,9.3);
glEnd();
glPopMatrix();

glPushMatrix();//front tyre
glTranslated(d+840,310,0.0);
glScaled(25.0,23.0,0.0);
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(3.0,2.5);
glVertex2f(3.0,2.6);
glVertex2f(3.15,3.1);
glVertex2f(3.2,3.2);
glVertex2f(3.3,3.35);
glVertex2f(3.4,3.4);
glVertex2f(3.5,3.45);
glVertex2f(3.6,3.55);
glVertex2f(3.7,3.6);
glVertex2f(3.8,3.63);
glVertex2f(4.0,3.65);
glVertex2f(4.2,3.7);
glVertex2f(4.4,3.7);
glVertex2f(4.6,3.65);
glVertex2f(4.8,3.55);
glVertex2f(5.0,3.45);
glVertex2f(5.1,3.4);
glVertex2f(5.2,3.25);
glVertex2f(5.3,3.2);
glVertex2f(5.4,3.0);
glVertex2f(5.5,2.5);

glVertex2f(5.45,2.15);
glVertex2f(5.4,1.9);
glVertex2f(5.35,1.8);
glVertex2f(5.2,1.6);
glVertex2f(5.0,1.5);
glVertex2f(4.9,1.4);
glVertex2f(4.7,1.3);
glVertex2f(4.6,1.27);
glVertex2f(4.4,1.25);
glVertex2f(4.0,1.25);
glVertex2f(3.9,1.3);
glVertex2f(3.75,1.35);
glVertex2f(3.6,1.4);
glVertex2f(3.45,1.55);
glVertex2f(3.3,1.7);
glVertex2f(3.2,1.8);
glVertex2f(3.1,2.2);
glEnd();
glPopMatrix();

glPushMatrix();//back tyre
glTranslated(d+1000,310,0.0);
glScaled(25.0,23.0,0.0);
glColor3f(0,0,0);
glBegin(GL_POLYGON);
glVertex2f(3.0,2.5);
glVertex2f(3.0,2.6);
glVertex2f(3.15,3.1);
glVertex2f(3.2,3.2);
glVertex2f(3.3,3.35);
glVertex2f(3.4,3.4);
glVertex2f(3.5,3.45);
glVertex2f(3.6,3.55);
glVertex2f(3.7,3.6);
glVertex2f(3.8,3.63);
glVertex2f(4.0,3.65);
glVertex2f(4.2,3.7);
glVertex2f(4.4,3.7);
glVertex2f(4.6,3.65);
glVertex2f(4.8,3.55);
glVertex2f(5.0,3.45);
glVertex2f(5.1,3.4);
glVertex2f(5.2,3.25);
glVertex2f(5.3,3.2);
glVertex2f(5.4,3.0);
glVertex2f(5.5,2.5);

glVertex2f(5.45,2.15);
glVertex2f(5.4,1.9);
glVertex2f(5.35,1.8);
glVertex2f(5.2,1.6);
glVertex2f(5.0,1.5);
glVertex2f(4.9,1.4);
glVertex2f(4.7,1.3);
glVertex2f(4.6,1.27);
glVertex2f(4.4,1.25);
glVertex2f(4.0,1.25);
glVertex2f(3.9,1.3);
glVertex2f(3.75,1.35);
glVertex2f(3.6,1.4);
glVertex2f(3.45,1.55);
glVertex2f(3.3,1.7);
glVertex2f(3.2,1.8);
glVertex2f(3.1,2.2);
glEnd();
glPopMatrix();
}

void bus()
{
glPushMatrix();

glTranslated(a,50.0,0.0);
glScaled(40.0,40.0,0.0);
glColor3f(1.0,1.0,0.0);

//bus out line
glBegin(GL_POLYGON);
glVertex2f(25,8);
glVertex2f(25,9.5);
glVertex2f(26,11);
glVertex2f(35,11);
glVertex2f(35,8);
glEnd();

//Doors
glColor3f(0.1,0.1,0.1);
glBegin(GL_POLYGON);
glVertex2f(26.1,10.4);
glVertex2f(27.2,10.4);
glVertex2f(27.2,9.6);
glVertex2f(26.1,9.6);
glEnd();


glColor3f(0.3,0.3,0.3);
glBegin(GL_POLYGON);
glVertex2f(27.3,8.4);
glVertex2f(27.3,10.4);
glVertex2f(28.3,10.4);
glVertex2f(28.3,8.4);
glEnd();
//small windows
glColor3f(0.1,0.1,0.1);
glBegin(GL_POLYGON);
glVertex2f(28.4,9.6);
glVertex2f(28.4,10.4);
glVertex2f(29.6,10.4);
glVertex2f(29.6,9.6);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(29.7,9.6);
glVertex2f(29.7,10.4);
glVertex2f(30.9,10.4);
glVertex2f(30.9,9.6);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(31,9.6);
glVertex2f(31,10.4);
glVertex2f(32.2,10.4);
glVertex2f(32.2,9.6);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(32.3,9.6);
glVertex2f(32.3,10.4);
glVertex2f(33.5,10.4);
glVertex2f(33.5,9.6);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(33.6,9.6);
glVertex2f(33.6,10.4);
glVertex2f(34.8,10.4);
glVertex2f(34.8,9.6);
glEnd();

//driver window
glColor3f(0.3,0.3,0.3);
glBegin(GL_POLYGON);
glVertex2f(25,9.5);
glVertex2f(26,11);
glVertex2f(26,9.5);
glEnd();
glPopMatrix();


//tyre
glPushMatrix();//front tyre
glTranslated(a+970,320,0.0);
glScaled(20.0,20.0,0.0);
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(3.0,2.5);
glVertex2f(3.0,2.6);
glVertex2f(3.15,3.1);
glVertex2f(3.2,3.2);
glVertex2f(3.3,3.35);
glVertex2f(3.4,3.4);
glVertex2f(3.5,3.45);
glVertex2f(3.6,3.55);
glVertex2f(3.7,3.6);
glVertex2f(3.8,3.63);
glVertex2f(4.0,3.65);
glVertex2f(4.2,3.7);
glVertex2f(4.4,3.7);
glVertex2f(4.6,3.65);
glVertex2f(4.8,3.55);
glVertex2f(5.0,3.45);
glVertex2f(5.1,3.4);
glVertex2f(5.2,3.25);
glVertex2f(5.3,3.2);
glVertex2f(5.4,3.0);
glVertex2f(5.5,2.5);

glVertex2f(5.45,2.15);
glVertex2f(5.4,1.9);
glVertex2f(5.35,1.8);
glVertex2f(5.2,1.6);
glVertex2f(5.0,1.5);
glVertex2f(4.9,1.4);
glVertex2f(4.7,1.3);
glVertex2f(4.6,1.27);
glVertex2f(4.4,1.25);
glVertex2f(4.0,1.25);
glVertex2f(3.9,1.3);
glVertex2f(3.75,1.35);
glVertex2f(3.6,1.4);
glVertex2f(3.45,1.55);
glVertex2f(3.3,1.7);
glVertex2f(3.2,1.8);
glVertex2f(3.1,2.2);
glEnd();
glPopMatrix();

glPushMatrix();//back tyre
glTranslated(a+1260,320,0.0);
glScaled(20.0,20.0,0.0);
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(3.0,2.5);
glVertex2f(3.0,2.6);
glVertex2f(3.15,3.1);
glVertex2f(3.2,3.2);
glVertex2f(3.3,3.35);
glVertex2f(3.4,3.4);
glVertex2f(3.5,3.45);
glVertex2f(3.6,3.55);
glVertex2f(3.7,3.6);
glVertex2f(3.8,3.63);
glVertex2f(4.0,3.65);
glVertex2f(4.2,3.7);
glVertex2f(4.4,3.7);
glVertex2f(4.6,3.65);
glVertex2f(4.8,3.55);
glVertex2f(5.0,3.45);
glVertex2f(5.1,3.4);
glVertex2f(5.2,3.25);
glVertex2f(5.3,3.2);
glVertex2f(5.4,3.0);
glVertex2f(5.5,2.5);

glVertex2f(5.45,2.15);
glVertex2f(5.4,1.9);
glVertex2f(5.35,1.8);
glVertex2f(5.2,1.6);
glVertex2f(5.0,1.5);
glVertex2f(4.9,1.4);
glVertex2f(4.7,1.3);
glVertex2f(4.6,1.27);
glVertex2f(4.4,1.25);
glVertex2f(4.0,1.25);
glVertex2f(3.9,1.3);
glVertex2f(3.75,1.35);
glVertex2f(3.6,1.4);
glVertex2f(3.45,1.55);
glVertex2f(3.3,1.7);
glVertex2f(3.2,1.8);
glVertex2f(3.1,2.2);
glEnd();
glPopMatrix();
}

void myinit()
{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0,1346.0,0.0,750);
}

void main(int argc, char* argv[])
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(1550,1550);
glutInitWindowPosition(0,0);
glutCreateWindow("simulation of city");
/*call back functions*/
glutDisplayFunc(mydisplay);
glutKeyboardFunc(myKeyboard); 
glutMouseFunc(mymouse);
myinit();
glutMainLoop();
}
