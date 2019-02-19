#include<Gl/glut.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<stdio.h>
GLint county=0;
GLint countb=0;
GLint countr=0;
GLint hit=0;
GLint hitb=0;
void myinit()
{
	glClearColor(1.0,1.0,1.0,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0,500.0,0.0,500.0,0.0,500.0);
	glMatrixMode(GL_MODELVIEW);
}
void ground()
{
    glColor3f(0.52,0.37,0.26);
    glBegin(GL_POLYGON);
	glVertex3f(0.0,0.0,0.0);
	glVertex3f(0.0,50.0,0.0);
    glVertex3f(500.0,50.0,0.0);
    glVertex3f(500.0,0.0,0.0);
	glEnd();
}
void target1()
{
	glColor3f(0.35,0.35,0.35);
	glBegin(GL_POLYGON);
	glVertex3f(350.0,70.0,0.0);
	glVertex3f(365.0,70.0,0.0);
    glVertex3f(365.0,170.0,0.0);
	glVertex3f(350.0,170.0,0.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(450.0,70.0,0.0);
	glVertex3f(465.0,70.0,0.0);
    glVertex3f(465.0,170.0,0.0);
	glVertex3f(450.0,170.0,0.0);
	glEnd();
	glColor3f(0.52,0.37,0.26);
	glBegin(GL_POLYGON);
	glVertex3f(340.0,170.0,0.0);
	glVertex3f(475.0,170.0,0.0);
    glVertex3f(475.0,190.0,0.0);
	glVertex3f(340.0,190.0,0.0);
	glEnd();
	
}
void target2()
{
    glColor3f(0.35,0.35,0.35);
    glBegin(GL_POLYGON);
	glVertex3f(350.0,190.0,0.0);
	glVertex3f(365.0,190.0,0.0);
    glVertex3f(365.0,290.0,0.0);
	glVertex3f(350.0,290.0,0.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(450.0,190.0,0.0);
	glVertex3f(465.0,190.0,0.0);
    glVertex3f(465.0,290.0,0.0);
	glVertex3f(450.0,290.0,0.0);
	glEnd();
	glColor3f(0.52,0.37,0.26);
	glBegin(GL_POLYGON);
	glVertex3f(340.0,290.0,0.0);
	glVertex3f(475.0,290.0,0.0);
    glVertex3f(475.0,310.0,0.0);
	glVertex3f(340.0,310.0,0.0);
	glEnd();
}

void target3()
{

	       int i;

		  // glColor3f(0.52,0.37,0.26);
	       glColor3f(0.19,0.6,0.9);
	       glBegin(GL_LINE_LOOP);
	       glVertex3f(350.0,70.0,0.0);
       	   glVertex3f(365.0,70.0,0.0);
           glVertex3f(365.0,170.0,0.0);
	       glVertex3f(350.0,170.0,0.0);
	       glEnd(); 
		   
		   glColor3f(1.0,0.0,0.0);
		   glBegin(GL_LINES);
		   for(i=0;i<100;i+=10)
		   {
			   glVertex2f(350.0,70.0+i);
		       glVertex2f(365.0,75.0+i);
		   }
		   glEnd();
	      
		   glColor3f(0.19,0.6,0.9);
	       glBegin(GL_LINE_LOOP);
	       glVertex3f(450.0,70.0,0.0);
	       glVertex3f(465.0,70.0,0.0);
           glVertex3f(465.0,170.0,0.0);
	       glVertex3f(450.0,170.0,0.0);
	       glEnd();

		   glColor3f(1.0,0.0,0.0);
		   glBegin(GL_LINES);
		   for(i=0;i<100;i+=10)
		   {
			   glVertex2f(450.0,70.0+i);
		       glVertex2f(465.0,75.0+i);
		   }
		   glEnd();
	       
		   glColor3f(0.19,0.6,0.9);
	       glBegin(GL_LINE_LOOP);
	       glVertex3f(340.0,170.0,0.0);
	       glVertex3f(475.0,170.0,0.0);
           glVertex3f(475.0,190.0,0.0);
	       glVertex3f(340.0,190.0,0.0);
	       glEnd();

		   glColor3f(1.0,0.0,0.0);
		   glBegin(GL_LINES);
		   for(i=0;i<135;i+=10)
		   {
			   glVertex2f(340.0+i,170.0);
		       glVertex2f(345.0+i,190.0);
		   }
		   glEnd();
}

void target4()
{
	
	int i;
    glColor3f(0.19,0.6,0.9);
    glBegin(GL_LINE_LOOP);
	glVertex3f(350.0,190.0,0.0);
	glVertex3f(365.0,190.0,0.0);
    glVertex3f(365.0,290.0,0.0);
	glVertex3f(350.0,290.0,0.0);
	glEnd();

	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
	for(i=0;i<100;i+=10)
		   {
			   glVertex2f(350.0,190.0+i);
		       glVertex2f(365.0,195.0+i);
		   }
	glEnd();
	
	glColor3f(0.19,0.6,0.9);
	glBegin(GL_LINE_LOOP);
	glVertex3f(450.0,190.0,0.0);
	glVertex3f(465.0,190.0,0.0);
    glVertex3f(465.0,290.0,0.0);
	glVertex3f(450.0,290.0,0.0);
	glEnd();

	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
	for(i=0;i<100;i+=10)
		   {
			   glVertex2f(450.0,190.0+i);
		       glVertex2f(465.0,195.0+i);
		   }
	glEnd();
	
	glColor3f(0.19,0.6,0.9);
	glBegin(GL_LINE_LOOP);
	glVertex3f(340.0,290.0,0.0);
	glVertex3f(475.0,290.0,0.0);
    glVertex3f(475.0,310.0,0.0);
	glVertex3f(340.0,310.0,0.0);
	glEnd();

	glColor3f(1.0,0.0,0.0);
		   glBegin(GL_LINES);
		   for(i=0;i<135;i+=10)
		   {
			   glVertex2f(340.0+i,290.0);
		       glVertex2f(345.0+i,310.0);
		   }
		   glEnd();
}
void grass()
{
	glColor3f(0.0,0.85,0.0);
    glBegin(GL_POLYGON);
	glVertex3f(0.0,50.0,0.0);
	glVertex3f(0.0,70.0,0.0);
	glVertex3f(500.0,70.0,0.0);
	glVertex3f(500.0,50.0,0.0);
	glEnd();
}
void pattern()
{
	GLint i;
	glColor3f(0.36,0.20,0.09);
	for(i=0;i<550;i+=80)
	{
		glBegin(GL_POLYGON);
		glVertex3f(45.0+i,0.0,0.0);
		glVertex3f(65.0+i,0.0,0.0);
		glVertex3f(75.0+i,5.0,0.0);
		glVertex3f(75.0+i,20.0,0.0);
		glVertex3f(60.0+i,40.0,0.0);
		glVertex3f(35.0+i,20.0,0.0);
		glVertex3f(35.0+i,5.0,0.0);
		glEnd();
	glBegin(GL_TRIANGLES);
	glVertex3f(0.0+i,0.0,0.0);
	glVertex3f(30.0+i,0.0,0.0);
	glVertex3f(15.0+i,22.0,0.0);
	glEnd();
	}
}
void point(float x,float y,int r)
{
	glColor3f(0.0,0.0,0.0);
	glPointSize(r);
	glEnable(GL_POINT_SMOOTH);
	glHint(GL_POINT_SMOOTH_HINT,GL_NICEST);
	glBegin(GL_POINTS);
	glVertex3f(x,y,0.0);
	glEnd();
}
void ellipse(float x,float y,int x1,int y1)
{
	glColor3f(0.0,0.5,0.0);
	GLint t;
	glVertex2f(x,y);
	glPointSize(3);
	glBegin(GL_POINTS);
		for(t=0;t<=360;t+=1)
		{
			x=x+x1*sin(t);
			y=y+y1*cos(t);
			glVertex3i(x,y,0);
		}
	glEnd();
}
void pig1()
{
	glColor3f(0.0,1.0,0.0);
	glLoadIdentity();
	glTranslatef(409.0,104.0,0.0);
    glutSolidSphere (35, 20, 16);
	glLoadIdentity();
	glTranslatef(384.0,137.0,0.0);
	glutSolidSphere(10,16,16);
	glLoadIdentity();
	glTranslatef(435.0,137.0,0.0);
	glutSolidSphere(10,16,16);
	glLoadIdentity();
	point(384.0,137.0,5);
	point(435.0,137.0,5);
	point(393.0,117.0,8);
	point(425.0,117.0,8);
	ellipse(395,90,15,10);
	point(400.0,95.0,6);
	point(415.0,95.0,6);
}

void pig2()
{
	glColor3f(0.0,1.0,0.0);
	glTranslatef(409.0,225.0,0.0);
    glutSolidSphere (35, 20, 16);
	glLoadIdentity();
	glTranslatef(384.0,260.0,0.0);
	glutSolidSphere(10,16,16);
	glLoadIdentity();
	glTranslatef(435.0,259.0,0.0);
	glutSolidSphere(10,16,16);
	glLoadIdentity();
	point(384.0,260.0,5);
	point(435.0,260.0,5);
	point(393.0,240.0,8);
	point(425.0,240.0,8);
	ellipse(395,213,15,10);
	point(400.0,218.0,6);
	point(415.0,218.0,6);

}
void display1()
{
   glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
   glLoadIdentity();
   pattern();
   glColor3f(0.52,0.37,0.26);
   glBegin(GL_POLYGON);
   glVertex3f(0.0,0.0,0.0);
   glVertex3f(0.0,50.0,0.0);
   glVertex3f(500.0,50.0,0.0);
   glVertex3f(500.0,0.0,0.0);
   glEnd();
   grass();
   target1();
   pig1();
  
   glFlush();
}
void display2()
{
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
		   glLoadIdentity();
		   pattern();
	       glColor3f(0.52,0.37,0.26);
           glBegin(GL_POLYGON);
	       glVertex3f(0.0,0.0,0.0);
	       glVertex3f(0.0,50.0,0.0);
           glVertex3f(500.0,50.0,0.0);
           glVertex3f(500.0,0.0,0.0);
	       glEnd();
	       grass();
	    
	       glFlush();
}

void display3()
{
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
		   glLoadIdentity();
		   pattern();
		   glColor3f(0.52,0.37,0.26);
           glBegin(GL_POLYGON);
	       glVertex3f(0.0,0.0,0.0);
	       glVertex3f(0.0,50.0,0.0);
           glVertex3f(500.0,50.0,0.0);
           glVertex3f(500.0,0.0,0.0);
	       glEnd();
	       grass();
	       
           pig1();
	       target2();
	       pig2();
		   target3();

	   
	       glFlush();

	
	
}
void display4()
{
	 glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
     glLoadIdentity();
     pattern();
	 glColor3f(0.52,0.37,0.26);
     glBegin(GL_POLYGON);
	 glVertex3f(0.0,0.0,0.0);
	 glVertex3f(0.0,50.0,0.0);
     glVertex3f(500.0,50.0,0.0);
     glVertex3f(500.0,0.0,0.0);
	 glEnd();
	 grass();
	 target1();
	 pig1();
  	 pig2();
	 target4();
	

	 glFlush();

}

void display5()
{
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
		   glLoadIdentity();
		   pattern();
		   glColor3f(0.52,0.37,0.26);
           glBegin(GL_POLYGON);
	       glVertex3f(0.0,0.0,0.0);
	       glVertex3f(0.0,50.0,0.0);
           glVertex3f(500.0,50.0,0.0);
           glVertex3f(500.0,0.0,0.0);
	       glEnd();
	       grass();
	       
           pig1();
		   target3();

	  
	       glFlush();

	
	
}

void check()
{
   if(hit==2)
	{
		MessageBox(NULL,"YOU WIN!","WINNER",MB_OK);
		printf("Game Over! You Won\n");
	}
   if(hit!=2 && countb==1 && county==1 && countr==1)
	{
		MessageBox(NULL,"YOU LOSE!","LOSER",MB_OK);
		printf("Game Over! You Lost\n");
	}
}

void birdb(int x,int y)
{
	GLfloat x2,y2,i;
	GLfloat angle;
	countb=1;
	
	for(i=0.0;i<=500.0;i+=2)
	{
		
		glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
		pattern();
		ground();
		grass();
		if(hit==0)
		{
		target1();
		pig1();
		target2();
		pig2();
        
		glColor3f(0.0,0.0,0.0);
		glPointSize(5);
		glBegin(GL_POINTS);
		glVertex2f(40+i,(500-y)+8);
		glEnd();

		glColor3f(1.0,1.0,1.0);
		glBegin(GL_TRIANGLES);
		glVertex2f(35+i,(500-y)+15);
		glVertex2f(48+i,(500-y)+7.5);
		glVertex2f(35+i,(500-y));
		glEnd();
         
		glColor3f(0.0,0.0,0.0);
		glLineWidth(3.0);
		glBegin(GL_LINES);
		glVertex2f(50+i,(500-y));
		glVertex2f(67+i,(500-y));
		glEnd();
		 
		glColor3f(0.0,0.0,0.0);
		glBegin(GL_LINES);
		glVertex2f(30+i,(500-y)+20);
		glVertex2f(30+i,(500-y)+35);
		glVertex2f(30+i,(500-y)+20);
		glVertex2f(20+i,(500-y)+35);
		glVertex2f(30+i,(500-y)+20);
		glVertex2f(40+i,(500-y)+35);
		glEnd();

		glColor3f(1.0,0.0,0.0);
		glBegin(GL_TRIANGLES);
		glVertex2f(15+i,(500-y));
		glVertex2f(5+i,(500-y)+15);
		glVertex2f(5+i,(500-y)-15);
		glEnd();

		glColor3f(1.0,0.0,0.0);
		glBegin(GL_TRIANGLES);
		glVertex2f(50+i,(500-y)+10);
		glVertex2f(70+i,(500-y));
		glVertex2f(50+i,(500-y)-10);
		glEnd();

		glColor3f(0.0,0.0,1.0);
	    glBegin(GL_TRIANGLE_FAN);
	    glVertex2f(35+i,(500-y));
	    for(angle=0.0f;angle<4*360;angle+=50)
		{
	      x2=35+sin(angle)*20;
		  y2=(500-y)+cos(angle)*20;
		  glVertex2f(x2+i,y2);
		}
	    glEnd();
		}

		if(hit==1)
		{
		target1();
		pig1();
        
		glColor3f(0.0,0.0,0.0);
		glPointSize(3);
		glBegin(GL_POINTS);
		glVertex2f(40+i,(500-y)+10);
		glEnd();

		glColor3f(1.0,1.0,1.0);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(40+i,(500-y)+10);
		glEnd();
         
		glColor3f(0.0,0.0,0.0);
		glLineWidth(3.0);
		glBegin(GL_LINES);
		glVertex2f(50+i,(500-y));
		glVertex2f(67+i,(500-y));
		glEnd();
		 
		glColor3f(0.0,0.0,0.0);
		glBegin(GL_LINES);
		glVertex2f(30+i,(500-y)+20);
		glVertex2f(30+i,(500-y)+35);
		glVertex2f(30+i,(500-y)+20);
		glVertex2f(20+i,(500-y)+35);
		glVertex2f(30+i,(500-y)+20);
		glVertex2f(40+i,(500-y)+35);
		glEnd();

		glColor3f(1.0,0.0,0.0);
		glBegin(GL_TRIANGLES);
		glVertex2f(15+i,(500-y));
		glVertex2f(5+i,(500-y)+15);
		glVertex2f(5+i,(500-y)-15);
		glEnd();

		glColor3f(1.0,0.0,0.0);
		glBegin(GL_TRIANGLES);
		glVertex2f(50+i,(500-y)+10);
		glVertex2f(70+i,(500-y));
		glVertex2f(50+i,(500-y)-10);
		glEnd();

		glColor3f(0.0,0.0,1.0);
	    glBegin(GL_TRIANGLE_FAN);
	    glVertex2f(35+i,(500-y));
	    for(angle=0.0f;angle<4*360;angle+=50)
		{
	      x2=35+sin(angle)*20;
		  y2=(500-y)+cos(angle)*20;
		  glVertex2f(x2+i,y2);
		}
	    glEnd();
		}

		if(70+i>=335 )
		{
			if(y>=190 && y<=209)
			{
				hit=1; 
			    display1();
			}
		   
			else if(y>=310 && y<=331) 
			{
				hit=2;
			    display2();
			}
			else if(y>=210 && y<=309 && hit==1)
			{
				hitb=1;
				display1();
			}
			else if(y>=210 && y<=309)
			{
				hitb=1;
				display4();
			}
			else if(y>=330 && y<=428 && hit==1)
			{
				hitb=2;
				display5();
			}
			else if(y>=330 && y<=428)
			{
				hitb=2;
				display3();
			}
		}
		
	    glFlush();
		glutSwapBuffers();
	}  
	check();
}


void birdy(int x,int y)
{
	GLfloat i=0.0;
	county=1;
	for(i=0.0;i<=490.0;i+=3.0)
	{
		glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
		pattern();
		ground();
		grass();
		if(hit==0)
		{
			if(hitb==0)
			{
		     target1();
		     pig1();
		     target2();
		     pig2();
			}
			else if(hitb==1)
			{
			 target1();
		     pig1();
		     target4();
		     pig2();
			}
			else if(hitb==2)
			{
			 target3();
		     pig1();
		     target2();
		     pig2();
			}

		
		glColor3f(0.0,0.0,0.0);
		glPointSize(6);
		glBegin(GL_POINTS);
		glVertex2f(68+i,(500-y)+10);
		glEnd();

		glColor3f(1.0,1.0,1.0);
		glBegin(GL_TRIANGLES);
		glVertex2f(60+i,(500-y));
		glVertex2f(80+i,(500-y)+10);
		glVertex2f(60+i,(500-y)+20);
		glEnd();
		
		glLineWidth(4.0);
		glColor3f(1.0,1.0,0.0);
		glBegin(GL_POLYGON);
		glVertex2f(45+i,(500-y)-30);
		glVertex2f(45+i,(500-y)+30);
		glVertex2f(85+i,(500-y)+10);
		glVertex2f(85+i,(500-y)-10);
		glEnd();
		
		glLineWidth(4.0);
		glColor3f(0.0,.0,0.0);
		glBegin(GL_LINES);
		glVertex2f(85+i,(500-y));
		glVertex2f(102+i,(500-y));
		glEnd();

		glColor3f(0.36,0.20,0.09);
		glBegin(GL_TRIANGLES);
		glVertex2f(85+i,(500-y)+10);
		glVertex2f(105+i,(500-y));
		glVertex2f(85+i,(500-y)-10);
		glEnd();
		
		glColor3f(0.0,0.0,0.0);
		glBegin(GL_LINES);
		glVertex2f(45+i,(500-y)+30);
		glVertex2f(35+i,(500-y)+45);
		glVertex2f(45+i,(500-y)+30);
		glVertex2f(47+i,(500-y)+45);
	    glVertex2f(45+i,(500-y)+30);
		glVertex2f(55+i,(500-y)+45);
		glEnd();
		}
		if(hit==1)
		{
			if(hitb==0)
			{
		     target1();
		     pig1();
			}
			else if(hitb==1 && hit==1)
			{
			 target1();
		     pig1();
			}
			else if(hitb==1)
			{
			 target1();
		     pig1();
		     target4();
		     pig2();
			}
			else if(hitb==2 && hit==1)
			{
			 target3();
		     pig1();
			}
			
			else if(hitb==2)
			{
			 target3();
		     pig1();
		     target2();
		     pig2();
			}
		
		glColor3f(0.0,0.0,0.0);
		glPointSize(6);
		glBegin(GL_POINTS);
		glVertex2f(68+i,(500-y)+10);
		glEnd();

		glColor3f(1.0,1.0,1.0);
		glBegin(GL_TRIANGLES);
		glVertex2f(60+i,(500-y));
		glVertex2f(80+i,(500-y)+10);
		glVertex2f(60+i,(500-y)+20);
		glEnd();
		
		glLineWidth(4.0);
		glColor3f(1.0,1.0,0.0);
		glBegin(GL_POLYGON);
		glVertex2f(45+i,(500-y)-30);
		glVertex2f(45+i,(500-y)+30);
		glVertex2f(85+i,(500-y)+10);
		glVertex2f(85+i,(500-y)-10);
		glEnd();
		
		glLineWidth(4.0);
		glColor3f(0.0,.0,0.0);
		glBegin(GL_LINES);
		glVertex2f(85+i,(500-y));
		glVertex2f(102+i,(500-y));
		glEnd();

		glColor3f(0.36,0.20,0.09);
		glBegin(GL_TRIANGLES);
		glVertex2f(85+i,(500-y)+10);
		glVertex2f(105+i,(500-y));
		glVertex2f(85+i,(500-y)-10);
		glEnd();
		
		glColor3f(0.0,0.0,0.0);
		glBegin(GL_LINES);
		glVertex2f(45+i,(500-y)+30);
		glVertex2f(35+i,(500-y)+45);
		glVertex2f(45+i,(500-y)+30);
		glVertex2f(47+i,(500-y)+45);
	    glVertex2f(45+i,(500-y)+30);
		glVertex2f(55+i,(500-y)+45);
		glEnd();
		}
		if(105+i>=335 )
		{
			if(y>=190 && y<=310 && hitb==2) 
			{
				hit=1; 
			    display5();
			}
			else if(y>=190 && y<=310) 
			{
				hit=1; 
			    display1();
			}

		    else if(y>=310 && y<=428) 
			{
				hit=2; 
			    display2();
			}
		}
		
		glFlush();
		glutSwapBuffers();
	}
	check();
}

void birdr(int x,int y)
{
	
	GLfloat x2,y2,i;
	GLfloat angle;
	countr=1;
	
    for(i=0.0;i<=500.0;i+=5)
	{
		
		glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
		pattern();
		ground();
		grass();
		if(hit==0)
		{
			if(hitb==0)
			{
		     target1();
		     pig1();
		     target2();
		     pig2();
			}
			else if(hitb==1)
			{
			 target1();
		     pig1();
		     target4();
		     pig2();
			}
			else if(hitb==2)
			{
			 target3();
		     pig1();
		     target2();
		     pig2();
			}

		glColor3f(0.0,0.0,0.0);
		glPointSize(15);
		glBegin(GL_POINTS);
		glVertex2f(65+i,(500-y)+10);
		glEnd();

		glColor3f(1.0,1.0,1.0);
		glBegin(GL_TRIANGLES);
		glVertex2f(55+i,(500-y)+20);
		glVertex2f(75+i,(500-y)+10);
		glVertex2f(55+i,(500-y));
		glEnd();

		glColor3f(0.0,0.0,1.0);
		glBegin(GL_TRIANGLES);
		glVertex2f(55+i,(500-y)+28);
		glVertex2f(70+i,(500-y)+45);
		glVertex2f(40+i,(500-y)+45);
		glEnd();

		glColor3f(1.0,1.0,1.0);
		glLineWidth(2.0);
		glBegin(GL_LINES);
		glVertex2f(80+i,(500-y));
		glVertex2f(102+i,(500-y));
		glEnd();

		glColor3f(0.0,0.0,0.0);
		glLineWidth(4.0);
		glBegin(GL_LINES);
		glVertex2f(25+i,(500-y));
		glVertex2f(5+i,(500-y)-5);
		glVertex2f(25+i,(500-y));
		glVertex2f(5+i,(500-y)+5);
		glVertex2f(25+i,(500-y));
		glVertex2f(5+i,(500-y)-15);
		glEnd();
        
		glColor3f(0.0,0.0,0.0);
		glBegin(GL_TRIANGLES);
		glVertex2f(80+i,(500-y)-15);
		glVertex2f(80+i,(500-y)+15);
		glVertex2f(105+i,(500-y));
		glEnd();
		
		glColor3f(1.0,0.0,0.0);
	    glBegin(GL_TRIANGLE_FAN);
	    glVertex2f(55+i,500-y);
	    for(angle=0.0f;angle<4*360;angle+=50)
		{
	      x2=55+sin(angle)*30;
		  y2=(500-y)+cos(angle)*30;
		  glVertex2f(x2+i,y2);
		}
	    glEnd();
		}
		
		if(hit==1)
		{
			if(hitb==0)
			{
		     target1();
		     pig1();
			}
			else if(hitb==1 && hit==1)
			{
			 target1();
		     pig1();
			}
			else if(hitb==1)
			{
			 target1();
		     pig1();
		     target4();
		     pig2();
			}
			else if(hitb==2 && hit==1)
			{
			 target3();
		     pig1();
			}
			else if(hitb==2)
			{
			 target3();
		     pig1();
		     target2();
		     pig2();
			}

		glColor3f(0.0,0.0,0.0);
		glPointSize(15);
		glBegin(GL_POINTS);
		glVertex2f(65+i,(500-y)+10);
		glEnd();

		glColor3f(1.0,1.0,1.0);
		glBegin(GL_TRIANGLES);
		glVertex2f(55+i,(500-y)+20);
		glVertex2f(75+i,(500-y)+10);
		glVertex2f(55+i,(500-y));
		glEnd();

		glColor3f(0.0,0.0,1.0);
		glBegin(GL_TRIANGLES);
		glVertex2f(55+i,(500-y)+28);
		glVertex2f(70+i,(500-y)+45);
		glVertex2f(40+i,(500-y)+45);
		glEnd();

		glColor3f(1.0,1.0,1.0);
		glLineWidth(2.0);
		glBegin(GL_LINES);
		glVertex2f(80+i,(500-y));
		glVertex2f(102+i,(500-y));
		glEnd();

		glColor3f(0.0,0.0,0.0);
		glLineWidth(4.0);
		glBegin(GL_LINES);
		glVertex2f(25+i,(500-y));
		glVertex2f(5+i,(500-y)-5);
		glVertex2f(25+i,(500-y));
		glVertex2f(5+i,(500-y)+5);
		glVertex2f(25+i,(500-y));
		glVertex2f(5+i,(500-y)-15);
		glEnd();
        
		glColor3f(0.0,0.0,0.0);
		glBegin(GL_TRIANGLES);
		glVertex2f(80+i,(500-y)-15);
		glVertex2f(80+i,(500-y)+15);
		glVertex2f(105+i,(500-y));
		glEnd();
		
		glColor3f(1.0,0.0,0.0);
	    glBegin(GL_TRIANGLE_FAN);
	    glVertex2f(55+i,500-y);
	    for(angle=0.0f;angle<4*360;angle+=50)
		{
	      x2=55+sin(angle)*30;
		  y2=(500-y)+cos(angle)*30;
		  glVertex2f(x2+i,y2);
		}
	    glEnd();
		}
		if(105+i>=335 )
		{
			
			if(y>=190 && y<=310 && hitb==2) 
			{
				hit=1; 
			    display5();
			}
			else if(y>=190 && y<=310) 
			{
				hit=1; 
			    display1();
			}
		    else if(y>=310 && y<=428) 
			{
				hit=2; 
			    display2();
			}
		}

	    glFlush();
		glutSwapBuffers();
	}
	check();
}

void mouse(int btn,int state,int x,int y)
{
	if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
	{
		if(countb==0 && y<=410)
		{
		  printf("x=%d,y=%d",x,y);
		  birdb(x,y);
		}
	}
    if(btn==GLUT_MIDDLE_BUTTON && state==GLUT_DOWN) 
	{
		if(countr==0 && y<=410)
		{
		  printf("x=%d,y=%d",x,y);
		  birdr(x,y);
		}
	}
	if(btn==GLUT_RIGHT_BUTTON && state==GLUT_DOWN)
	{
		if(county==0 && y<=405)
		{
		printf("x=%d  , y=%d",x,y);
		birdy(x,y);
		}
      
	}
}

void display()
{

	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	pattern();
	ground();
	grass();
	target1();
	target2();
	pig1();
	pig2();
	glutSwapBuffers();
	glFlush();
}

void main(int argc,char *argv[])
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);
	glutInitWindowPosition(0.0,0.0);
	glutInitWindowSize(500.0,500.0);
	glutCreateWindow("Angry Birds");
    glutDisplayFunc(display);
	myinit();
	glutMouseFunc(mouse);
	glEnable(GL_DEPTH_TEST);
	glutMainLoop();
}