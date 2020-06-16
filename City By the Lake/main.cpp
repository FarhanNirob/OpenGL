/*
group members:
1. AHMED,ARAFAT  ID:17-34292-1
2. Islam, Md. Farhan ID:17-33720-1
3. Hossain,Kabir ID:17-33130-1
4. Mistry.Sandip ID:17-33231-1Stay
*/





#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>

using namespace std;

float _move = 0.0f;//plane
float _move1 = 0.0f;//wave1
float _move2 = 0.0f;//wave2
float _move3 = 0.0f;//boat
float _move4 = 0.0f;//bus
float _move5 = 0.0f;//bird
float _move6 = 0.0f;//cloud1
float _move7 = 0.0f;//cloud2


void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1.0, 1.0, 1.0, 0.0);
	glLoadIdentity(); //Reset the drawing perspective
	glMatrixMode(GL_MODELVIEW);

//glPushMatrix();

     //////////////////////////////////////////////////////////////////////////////////////////sky
     glBegin(GL_POLYGON);
     glColor3ub(102,255,255);
     glVertex3f(-25, 0.0, 0.0);
     glVertex3f(-25, 11.5, 0.0);
     glVertex3f(25, 11.5, 0.0);
     glVertex3f(25, 0.0, 0.0);
     glEnd();
   //  glPopMatrix();

////////////////////////////////////////////////////////////////////////////////////////////////Sun
     glPushMatrix();
   glTranslatef(0.8, 0.8, 0.0);
   glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.1;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	////////////////////////////////////////////////////////////////////////////////Sunrays
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex3f(0.8,0.8,0.0);
	glVertex3f(0.8,0.6,0.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex3f(0.8,0.8,0.0);
	glVertex3f(0.7,0.6,0.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex3f(0.8,0.8,0.0);
	glVertex3f(0.9,0.6,0.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex3f(0.8,0.8,0.0);
	glVertex3f(0.8,1.0,0.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex3f(0.8,0.8,0.0);
	glVertex3f(0.9,1.0,0.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex3f(0.8,0.8,0.0);
	glVertex3f(0.7,1.0,0.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex3f(0.8,0.8,0.0);
	glVertex3f(1.2,1.0,0.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex3f(0.8,0.8,0.0);
	glVertex3f(1.0,0.8,0.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex3f(0.8,0.8,0.0);
	glVertex3f(1.0,0.6,0.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex3f(0.8,0.8,0.0);
	glVertex3f(0.5,0.7,0.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex3f(0.8,0.8,0.0);
	glVertex3f(0.5,0.5,0.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex3f(0.8,0.8,0.0);
	glVertex3f(0.5,0.9,0.0);
	glEnd();

	///////////////////////////////////////////////////////////////////////////////////clouds///
	////////////////////////////////////////////////////1///
	    glPushMatrix();
    //glTranslatef(6,0,0);
   glTranslatef(_move6+0.2, 0.8, 0.0);
   glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
       glPushMatrix();

   glTranslatef(_move6+0.28, 0.8, 0.0);
   glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
  glPushMatrix();

   glTranslatef(_move6+0.35, 0.8, 0.0);
   glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
	  glPushMatrix();

   glTranslatef(_move6+0.2, 0.75, 0.0);
   glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
	  glPushMatrix();

   glTranslatef(_move6+0.28, 0.75, 0.0);
   glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
	  glPushMatrix();

   glTranslatef(_move6+0.35, 0.75, 0.0);
   glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
	  glPushMatrix();
   glTranslatef(_move6+0.15, 0.77, 0.0);
   glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
	  glPushMatrix();
   glTranslatef(_move6+0.39, 0.77, 0.0);
   glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	////2////
  glPushMatrix();
   glTranslatef(_move7+0.6, 0.6, 0.0);
   glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
	  glPushMatrix();
   glTranslatef(_move7+0.68, 0.6, 0.0);
   glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
	  glPushMatrix();

   glTranslatef(_move7+0.75, 0.6, 0.0);
   glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
	  glPushMatrix();

   glTranslatef(_move7+0.6, 0.65, 0.0);
   glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
	  glPushMatrix();

   glTranslatef(_move7+0.68, 0.65, 0.0);
   glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
	  glPushMatrix();

   glTranslatef(_move7+0.75, 0.65, 0.0);
   glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
	  glPushMatrix();

   glTranslatef(_move7+0.55, 0.62, 0.0);
   glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
	  glPushMatrix();

   glTranslatef(_move7+0.79, 0.62, 0.0);
   glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	////////////////////////////////////////////////////////////////////////////////////////////Bird
	 glPushMatrix();
	 glTranslatef(_move5, 0.0f, 0.0f);

	 //////////////////////////////////////////tail
	  glBegin(GL_POLYGON);
     glColor3f(0.0, 0.1, 0.1);
     glVertex3f(0.933f, 0.4f,0.0);
     glVertex3f(1.0f, 0.4166f, 0.0);
     glVertex3f(0.966f, 0.45f, 0.0);
     glEnd();

     ///////////////////////////////////////////body
     glBegin(GL_POLYGON);
     glColor3f(0.1,0.3, 0.4);
     glVertex3f(0.933f, 0.4f,0.0);
     glVertex3f(0.966f, 0.45f, 0.0);
      glVertex3f(0.933f, 0.466f,0.0);
      glVertex3f(0.85f, 0.466f,0.0);
      glVertex3f(0.883f, 0.4166f,0.0);
     glEnd();

/////////////////////////////////////////////////lip
      glBegin(GL_POLYGON);
     glColor3f(0.0, 0.1, 0.1);
      glVertex3f(0.833f,0.4f,0.0);
     glVertex3f(0.883f, 0.433f,0.0);
    glVertex3f(0.85f,0.466f,0.0);
    glEnd();

    ////////////////////////////////////////////wings
      glBegin(GL_POLYGON);
     glColor3f(0.0,0.0 , 0.0);
      glVertex3f(0.866f,0.466f,0.0f);
     glVertex3f(0.916f,0.466f,0.0);
    glVertex3f(0.883f,0.533f,0.0);
    glEnd();
     glBegin(GL_POLYGON);
     glColor3f(0.0,0.0 , 0.0);
     glVertex3f(0.9f,0.466f,0.0);
    glVertex3f(0.933f,0.466f,0.0);
    glVertex3f(0.925f,0.512f,0.0);
    glEnd();

      glPopMatrix();



     //////////////////////////////////////////////////////////////////////////////////Road
     glPushMatrix();
     glBegin(GL_POLYGON);
     glColor3f(0.2,0.2 , 0.2);
     glVertex3f(-1.0f, -0.33f, 0.0);
     glVertex3f(1.0f, -0.33f, 0.0);
     glVertex3f(1.0f, 0.0f, 0.0);
     glVertex3f(-1.0f, 0.0f, 0.0);
     glEnd();
     glPopMatrix();

     ////////////////////////////////////////////Roadlines
     glPushMatrix();
     glBegin(GL_POLYGON);
     glColor3f(1.0,1.0,1.0);
     glVertex3f(-1.0f, -0.166f, 0.0);
     glVertex3f(-0.5f, -0.166f, 0.0);
     glVertex3f(-0.5f, -0.13f, 0.0);
     glVertex3f(-1.0f, -0.13f, 0.0);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3f(1.0,1.0 , 1.0);
     glVertex3f(-0.33f, -0.166f, 0.0);
     glVertex3f(0.166f, -0.166f, 0.0);
     glVertex3f(0.166f, -0.13f, 0.0);
     glVertex3f(-0.33f, -0.13f, 0.0);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3f(1.0,1.0,1.0);
     glVertex3f(0.33f, -0.166f, 0.0);
     glVertex3f(0.833f, -0.166f, 0.0);
     glVertex3f(0.833f, -0.13f, 0.0);
     glVertex3f(0.33f, -0.13f, 0.0);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3f(1.0,1.0 , 1.0);
     glVertex3f(0.833f, -0.166f, 0.0);
     glVertex3f(1.0f, -0.166f, 0.0);
     glVertex3f(1.0f, -0.13f, 0.0);
     glVertex3f(0.833f, -0.13f, 0.0);
     glEnd();
     glPopMatrix();

     ////////////////////////////////////////////////////////////////////////////////////Lake
     glPushMatrix();
     glBegin(GL_POLYGON);
     glColor3ub(0,191,255);
     glVertex3f(-1.0f, -1.0f, 0.0);
     glVertex3f(1.0f, -1.0f, 0.0);
     glVertex3f(1.0f, -0.33f, 0.0);
     glVertex3f(-1.0f, -0.33f, 0.0);
     glEnd();
     glPushMatrix();

     ////////////////////////////////////////////////Border
      glPushMatrix();
     glBegin(GL_POLYGON);
     glColor3f(0.2,0.098 , 0.0);
     glVertex3f(-1.0f, -0.33f, 0.0);
     glVertex3f(1.0f, -0.33f, 0.0);
     glVertex3f(1.0f, -0.416f, 0.0);
     glVertex3f(-1.0f, -0.416f, 0.0);
       glEnd();
     glBegin(GL_POLYGON);
     glColor3f(0.0,0.0 , 0.0);
     glVertex3f(-1.0f, -0.35f, 0.0);
     glVertex3f(1.0f, -0.35f, 0.0);
     glVertex3f(1.0f, -0.33f, 0.0);
     glVertex3f(-1.0f, -0.33f, 0.0);
     glEnd();
     glPushMatrix();

     ////////////////////////////////////////////////////////////////////////////////////////Waves
     ////////////////////////////////////////////////1
     glPushMatrix();
     glTranslatef(_move1, 0.0f, 0.0f);
     glBegin(GL_POLYGON);
     glColor3f(0.0,0.56 , 0.698);
     glVertex3f(-1.0f, -0.5f, 0.0);
     glVertex3f(-0.966f, -0.416f, 0.0);
     glVertex3f(-0.933f, -0.5f, 0.0);
     glVertex3f(-0.9f, -0.416f, 0.0);
     glVertex3f(-0.866f, -0.5f, 0.0);
     glVertex3f(-0.833f, -0.416f, 0.0);
     glVertex3f(-0.8f, -0.5f, 0.0);
     glEnd();
          glPopMatrix();

          ////////////////////////////////////////////2
           glPushMatrix();
     glTranslatef(_move2, 0.0f, 0.0f);
     glBegin(GL_POLYGON);
     glColor3f(0.0,0.56 , 0.698);
     glVertex3f(0.8f, -0.66f, 0.0);
     glVertex3f(0.833f, -0.583f, 0.0);
     glVertex3f(0.866f, -0.66f, 0.0);
     glVertex3f(0.9f, -0.583f, 0.0);
     glVertex3f(0.933f, -0.66f, 0.0);
     glVertex3f(0.966f, -0.583f, 0.0);
     glVertex3f(1.0f, -0.66f, 0.0);
     glEnd();

    glPushMatrix();
	glTranslatef(_move, 0.0f, 0.0f);

	/////////////////////////////////////////////////////////////////////////////////////Plane
    glBegin(GL_POLYGON);
         glColor3f(1.0,1.0,1.0);
        glVertex3f(-1.0f, 0.55f, 0.0f);
        glVertex3f(-0.5f, 0.5f, 0.0f);
         glVertex3f(-0.366f, 0.55f, 0.0f);
          glVertex3f(-0.45f, 0.616f, 0.0f);
        glVertex3f(-0.5f, 0.66f, 0.0f);
        glVertex3f(-1.0f, 0.66f, 0.0f);
	glEnd();

	 ////////////////////////////////////////////Planewindows
	 glBegin(GL_POLYGON);
         glColor3f(0.6,0.8,0.9);
        glVertex3f(-0.966f, 0.57f, 0.0f);
        glVertex3f(-0.916f, 0.57f, 0.0f);
         glVertex3f(-0.916f, 0.63f, 0.0f);
          glVertex3f(-0.966f, 0.63f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.6,0.8,0.9);
        glVertex3f(-0.866f, 0.55f, 0.0f);
        glVertex3f(-0.816f, 0.55f, 0.0f);
         glVertex3f(-0.816f, 0.63f, 0.0f);
          glVertex3f(-0.866f, 0.63f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.6,0.8,0.9);
        glVertex3f(-0.766f, 0.55f, 0.0f);
        glVertex3f(-0.716f, 0.55f, 0.0f);
         glVertex3f(-0.716f, 0.63f, 0.0f);
          glVertex3f(-0.766f, 0.63f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.6,0.8,0.9);
        glVertex3f(-0.666f, 0.55f, 0.0f);
        glVertex3f(-0.616f, 0.55f, 0.0f);
         glVertex3f(-0.616f, 0.63f, 0.0f);
          glVertex3f(-0.666f, 0.63f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.6,0.8,0.9);
        glVertex3f(-0.566f, 0.55f, 0.0f);
        glVertex3f(-0.516f, 0.55f, 0.0f);
         glVertex3f(-0.516f, 0.63f, 0.0f);
          glVertex3f(-0.566f, 0.63f, 0.0f);
	glEnd();

	/////////////////////////////////////////////////Planewings
	glBegin(GL_POLYGON);
         glColor3f(0.6,0.6,0.7);
        glVertex3f(-0.966f, 0.66f, 0.0f);
        glVertex3f(-0.88f, 0.66f, 0.0f);
         glVertex3f(-0.983f, 0.833f, 0.0f);
          glVertex3f(-0.986f, 0.833f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.6,0.6,0.7);
        glVertex3f(-0.657f, 0.66f, 0.0f);
        glVertex3f(-0.588f, 0.66f, 0.0f);
         glVertex3f(-0.638f, 0.8f, 0.0f);
          glVertex3f(-0.68f, 0.8f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.6,0.6,0.7);
        glVertex3f(-0.66f, 0.33f, 0.0f);
        glVertex3f(-0.616f, 0.33f, 0.0f);
         glVertex3f(-0.583f, 0.516f, 0.0f);
          glVertex3f(-0.655f, 0.516f, 0.0f);
	glEnd();
	glPopMatrix();

/////////////////////////////////////////////////////////////////////////////////////Buildings back
/////////////////////////////////////////////////Building_1
glPushMatrix();
  glBegin(GL_POLYGON);
         glColor3f(0.7,0.7,0.8);
        glVertex3f(-0.66f, 0.0f, 0.0f);
        glVertex3f(-0.416f, 0.0f, 0.0f);
         glVertex3f(-0.416f, 0.25f, 0.0f);
          glVertex3f(-0.66f, 0.25f, 0.0f);
	glEnd();
	////////////////////////////////////////window_1///
	glBegin(GL_POLYGON);
         glColor3f(0.8,1.0,0.9);
        glVertex3f(-0.65f, 0.166f, 0.0f);
        glVertex3f(-0.566f, 0.166f, 0.0f);
         glVertex3f(-0.566f, 0.216f, 0.0f);
          glVertex3f(-0.65f, 0.216f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.8,1.0,0.9);
        glVertex3f(-0.65f, 0.15f, 0.0f);
        glVertex3f(-0.566f, 0.15f, 0.0f);
         glVertex3f(-0.566f, 0.1f, 0.0f);
          glVertex3f(-0.65f, 0.1f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.8,1.0,0.9);
        glVertex3f(-0.65f, 0.083f, 0.0f);
        glVertex3f(-0.566f, 0.083f, 0.0f);
         glVertex3f(-0.566f, 0.033f, 0.0f);
          glVertex3f(-0.65f, 0.033f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.8,1.0,0.9);
        glVertex3f(-0.55f, 0.166f, 0.0f);
        glVertex3f(-0.5f, 0.166f, 0.0f);
         glVertex3f(-0.5f, 0.216f, 0.0f);
          glVertex3f(-0.55f, 0.216f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.8,1.0,0.9);
        glVertex3f(-0.55f, 0.15f, 0.0f);
        glVertex3f(-0.5f, 0.15f, 0.0f);
         glVertex3f(-0.5f, 0.1f, 0.0f);
          glVertex3f(-0.55f, 0.1f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.8,1.0,0.9);
        glVertex3f(-0.55f, 0.083f, 0.0f);
        glVertex3f(-0.5f, 0.083f, 0.0f);
         glVertex3f(-0.5f, 0.033f, 0.0f);
          glVertex3f(-0.55f, 0.033f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.8,1.0,0.9);
        glVertex3f(-0.483f, 0.166f, 0.0f);
        glVertex3f(-0.433f, 0.166f, 0.0f);
         glVertex3f(-0.433f, 0.216f, 0.0f);
          glVertex3f(-0.483f, 0.216f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.8,1.0,0.9);
        glVertex3f(-0.483f, 0.15f, 0.0f);
        glVertex3f(-0.433f, 0.15f, 0.0f);
         glVertex3f(-0.433f, 0.1f, 0.0f);
          glVertex3f(-0.483f, 0.1f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.8,1.0,0.9);
        glVertex3f(-0.483f, 0.083f, 0.0f);
        glVertex3f(-0.433f, 0.083f, 0.0f);
         glVertex3f(-0.433f, 0.033f, 0.0f);
          glVertex3f(-0.483f, 0.033f, 0.0f);
	glEnd();

	///////////////////////////////////////////////////////Building_2
glPushMatrix();
  glBegin(GL_POLYGON);
         glColor3f(0.8,1.0,0.6);
        glVertex3f(-0.25f, 0.0f, 0.0f);
        glVertex3f(0.0f, 0.0f, 0.0f);
         glVertex3f(0.0f, 0.25f, 0.0f);
          glVertex3f(-0.25f, 0.25f, 0.0f);
	glEnd();
		///////////////////////////////////////////Window2///
	glBegin(GL_POLYGON);
         glColor3f(0.0,0.4,0.4);
        glVertex3f(-0.233f, 0.166f, 0.0f);
        glVertex3f(-0.166f, 0.166f, 0.0f);
         glVertex3f(-0.166f, 0.216f, 0.0f);
          glVertex3f(-0.233f, 0.216f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.0,0.4,0.4);
        glVertex3f(-0.233f, 0.15f, 0.0f);
        glVertex3f(-0.166f, 0.15f, 0.0f);
         glVertex3f(-0.166f, 0.1f, 0.0f);
          glVertex3f(-0.233f, 0.1f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.0,0.4,0.4);
        glVertex3f(-0.233f, 0.083f, 0.0f);
        glVertex3f(-0.166f, 0.083f, 0.0f);
         glVertex3f(-0.166f, 0.033f, 0.0f);
          glVertex3f(-0.233f, 0.033f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.0,0.4,0.4);
        glVertex3f(-0.15f, 0.166f, 0.0f);
        glVertex3f(-0.066f, 0.166f, 0.0f);
         glVertex3f(-0.066f, 0.216f, 0.0f);
          glVertex3f(-0.15f, 0.216f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.0,0.4,0.4);
        glVertex3f(-0.15f, 0.15f, 0.0f);
        glVertex3f(-0.066f, 0.15f, 0.0f);
         glVertex3f(-0.066f, 0.1f, 0.0f);
          glVertex3f(-0.15f, 0.1f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.0,0.4,0.4);
        glVertex3f(-0.15f, 0.083f, 0.0f);
        glVertex3f(-0.066f, 0.083f, 0.0f);
         glVertex3f(-0.066f, 0.033f, 0.0f);
          glVertex3f(-0.15f, 0.033f, 0.0f);
	glEnd();
glBegin(GL_POLYGON);
         glColor3f(0.0,0.4,0.4);
        glVertex3f(-0.05f, 0.166f, 0.0f);
        glVertex3f(0.0f, 0.166f, 0.0f);
         glVertex3f(0.0f, 0.216f, 0.0f);
          glVertex3f(-0.05f, 0.216f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.0,0.4,0.4);
        glVertex3f(-0.05f, 0.15f, 0.0f);
        glVertex3f(0.0f, 0.15f, 0.0f);
         glVertex3f(0.0f, 0.1f, 0.0f);
          glVertex3f(-0.05f, 0.1f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.0,0.4,0.4);
        glVertex3f(-0.05f, 0.083f, 0.0f);
        glVertex3f(0.0f, 0.083f, 0.0f);
         glVertex3f(0.0f, 0.033f, 0.0f);
          glVertex3f(-0.05f, 0.033f, 0.0f);
	glEnd();

	////////////////////////////////////////////////////////Building_3
	glBegin(GL_POLYGON);
         glColor3f(1.0,1.0,0.5);
        glVertex3f(0.33f, 0.0f, 0.0f);
        glVertex3f(0.5f, 0.0f, 0.0f);
         glVertex3f(0.5f, 0.25f, 0.0f);
          glVertex3f(0.33f, 0.25f, 0.0f);
	glEnd();
	//////////////////////////////////////////////Window3///
	glBegin(GL_POLYGON);
         glColor3f(1.0,0.7,0.1);
        glVertex3f(0.366f, 0.166f, 0.0f);
        glVertex3f(0.466f, 0.166f, 0.0f);
         glVertex3f(0.466f, 0.216f, 0.0f);
          glVertex3f(0.366f, 0.216f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(1.0,0.7,0.1);
        glVertex3f(0.366f, 0.15f, 0.0f);
        glVertex3f(0.466f, 0.15f, 0.0f);
         glVertex3f(0.466f, 0.1f, 0.0f);
          glVertex3f(0.366f, 0.1f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(1.0,0.7,0.1);
        glVertex3f(0.366f, 0.083f, 0.0f);
        glVertex3f(0.466f, 0.083f, 0.0f);
         glVertex3f(0.466f, 0.033f, 0.0f);
          glVertex3f(0.366f, 0.033f, 0.0f);
	glEnd();

	////////////////////////////////////////////////////////Building_4
	glBegin(GL_POLYGON);
         glColor3f(1.0,0.69,0.5);
        glVertex3f(0.833f, 0.0f, 0.0f);
        glVertex3f(1.0f, 0.0f, 0.0f);
         glVertex3f(1.0f, 0.25f, 0.0f);
          glVertex3f(0.833f, 0.25f, 0.0f);
	glEnd();
		//////////////////////////////////////////////////Window_4///
glBegin(GL_POLYGON);
         glColor3f(1.0,1.0,0.4);
        glVertex3f(0.866f, 0.166f, 0.0f);
        glVertex3f(0.966f, 0.166f, 0.0f);
         glVertex3f(0.966f, 0.216f, 0.0f);
          glVertex3f(0.866f, 0.216f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(1.0,1.0,0.4);
        glVertex3f(0.866f, 0.15f, 0.0f);
        glVertex3f(0.966f, 0.15f, 0.0f);
         glVertex3f(0.966f, 0.1f, 0.0f);
          glVertex3f(0.866f, 0.1f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(1.0,1.0,0.4);
        glVertex3f(0.866f, 0.083f, 0.0f);
        glVertex3f(0.966f, 0.083f, 0.0f);
         glVertex3f(0.966f, 0.033f, 0.0f);
          glVertex3f(0.866f, 0.033f, 0.0f);
	glEnd();


     ////////////////////////////////////////////////////////////////////////////////////////////TreeBack
	glBegin(GL_POLYGON);
     glColor3f(0.4,0.8 , 0.0);
     glVertex3f(-0.4166f, 0.0f, 0.0);
     glVertex3f(-0.33f, 0.33f, 0.0);
     glVertex3f(-0.25f, 0.0f, 0.0);
     glEnd();



     //////////////////////////////////////////////////////////////////////////////////////////////Bus
     glPushMatrix();
     glTranslatef(_move4, 0.0f, 0.0f);
     /////////////////////////////////////////////////LowerPart
  glBegin(GL_POLYGON);
         glColor3f(0.1,0.0,0.3);
        glVertex3f(0.5f, -0.166f, 0.0f);
        glVertex3f(1.0f, -0.166f, 0.0f);
         glVertex3f(1.0f, 0.0f, 0.0f);
          glVertex3f(0.55f, 0.0f, 0.0f);
          glVertex3f(0.5f, -0.033f, 0.0f);
	glEnd();
	//////////////////////////////////////////////////HeadLight
	  glBegin(GL_POLYGON);
         glColor3f(1.0,1.0,0.0);
        glVertex3f(0.5f, -0.1f, 0.0f);
        glVertex3f(0.5166f, -0.1f, 0.0f);
         glVertex3f(0.5166f, -0.066f, 0.0f);
          glVertex3f(0.5f, -0.066f, 0.0f);
	glEnd();
	///////////////////////////////////////////////////TopPart
	glBegin(GL_POLYGON);
         glColor3f(0.0,0.6,0.9);
        glVertex3f(0.55f, 0.0f, 0.0f);
        glVertex3f(1.0f, 0.0f, 0.0f);
         glVertex3f(1.0f, 0.116f, 0.0f);
          glVertex3f(0.55f, 0.116f, 0.0f);
	glEnd();

	///////////////////////////////////////////////////Buswindows
	glBegin(GL_POLYGON);
         glColor3f(0.26,0.26,0.26);
        glVertex3f(0.5833f, 0.016f, 0.0f);
        glVertex3f(0.633f, 0.016f, 0.0f);
         glVertex3f(0.633f, 0.1f, 0.0f);
          glVertex3f(0.5833f, 0.1f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.26,0.26,0.26);
        glVertex3f(0.65f, 0.016f, 0.0f);
        glVertex3f(0.7f, 0.016f, 0.0f);
         glVertex3f(0.7f, 0.1f, 0.0f);
          glVertex3f(0.65f, 0.1f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.26,0.26,0.26);
        glVertex3f(0.716f, 0.016f, 0.0f);
        glVertex3f(0.766f, 0.016f, 0.0f);
         glVertex3f(0.766f, 0.1f, 0.0f);
          glVertex3f(0.716f, 0.1f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.26,0.26,0.26);
        glVertex3f(0.783f, 0.016f, 0.0f);
        glVertex3f(0.833f, 0.016f, 0.0f);
         glVertex3f(0.833f, 0.1f, 0.0f);
          glVertex3f(0.783f, 0.1f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.26,0.26,0.26);
        glVertex3f(0.85f, 0.016f, 0.0f);
        glVertex3f(0.9f, 0.016f, 0.0f);
         glVertex3f(0.9f, 0.1f, 0.0f);
          glVertex3f(0.85f, 0.1f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.26,0.26,0.26);
        glVertex3f(0.916f, 0.016f, 0.0f);
        glVertex3f(0.966f, 0.016f, 0.0f);
         glVertex3f(0.966f, 0.1f, 0.0f);
          glVertex3f(0.916f, 0.1f, 0.0f);
	glEnd();
	glPopMatrix();



     ////////////////////////////////////////////////Wheels
	 glPushMatrix();

   glTranslatef(_move4+0.6, -0.2, 0.0);
   glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.06;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
	glPushMatrix();
	  glTranslatef(_move4+0.6, -0.2, 0.0);
   glColor3f(0.7,0.8,0.9);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.03;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
	 glPushMatrix();

   glTranslatef(_move4+0.92, -0.2, 0.0);
   glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.06;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
	glPushMatrix();

   glTranslatef(_move4+0.92, -0.2, 0.0);
   glColor3f(0.7,0.8,0.9);
	glBegin(GL_POLYGON);

	for(int i=0;i<600;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.03;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();


 ///////////////////////////////////////////////////////////////////////////////////BuildingsFront

 ///////////////////////////////////////////////////Building_1
 //glPushMatrix();
  glBegin(GL_POLYGON);
         glColor3f(0.0,0.0,0.5);
        glVertex3f(-1.0f, -0.33f, 0.0f);
        glVertex3f(-0.66f, -0.33f, 0.0f);
         glVertex3f(-0.66f, 0.33f, 0.0f);
          glVertex3f(-1.0f, 0.33f, 0.0f);
	glEnd();
	/////////////////////////////////////////////Window_1
	 glBegin(GL_POLYGON);
         glColor3f(0.0,0.4,0.8);
        glVertex3f(-0.966f, -0.2499f, 0.0f);
        glVertex3f(-0.883f, -0.2499f, 0.0f);
         glVertex3f(-0.883f, -0.312f, 0.0f);
          glVertex3f(-0.966f, -0.312f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.0,0.4,0.8);
        glVertex3f(-0.7833f, -0.2499f, 0.0f);
        glVertex3f(-0.7f, -0.2499f, 0.0f);
         glVertex3f(-0.7f, -0.312f, 0.0f);
          glVertex3f(-0.7833f, -0.312f, 0.0f);
	glEnd();
 glBegin(GL_POLYGON);
         glColor3f(0.0,0.4,0.8);
        glVertex3f(-0.966f, 0.166f, 0.0f);
        glVertex3f(-0.883f, 0.166f, 0.0f);
         glVertex3f(-0.883f, 0.25f, 0.0f);
          glVertex3f(-0.966f, 0.25f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.0,0.4,0.8);
        glVertex3f(-0.7833f, 0.166f, 0.0f);
        glVertex3f(-0.7f, 0.166f, 0.0f);
         glVertex3f(-0.7f, 0.25f, 0.0f);
          glVertex3f(-0.7833f, 0.25f, 0.0f);
	glEnd();
glBegin(GL_POLYGON);
         glColor3f(0.0,0.4,0.8);
        glVertex3f(-0.966f, 0.0f, 0.0f);
        glVertex3f(-0.883f, 0.0f, 0.0f);
         glVertex3f(-0.883f, 0.0833f, 0.0f);
          glVertex3f(-0.966f, 0.0833f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.0,0.4,0.8);
        glVertex3f(-0.7833f, 0.0f, 0.0f);
        glVertex3f(-0.7f, 0.0f, 0.0f);
         glVertex3f(-0.7f, 0.0833f, 0.0f);
          glVertex3f(-0.7833f, 0.0833f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.0,0.4,0.8);
        glVertex3f(-0.966f, -0.0833f, 0.0f);
        glVertex3f(-0.883f, -0.0833f, 0.0f);
         glVertex3f(-0.883f, -0.166f, 0.0f);
          glVertex3f(-0.966f, -0.166f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.0,0.4,0.8);
        glVertex3f(-0.7833f, -0.0833f, 0.0f);
        glVertex3f(-0.7f, -0.0833f, 0.0f);
         glVertex3f(-0.7f, -0.166f, 0.0f);
          glVertex3f(-0.7833f, -0.166f, 0.0f);
	glEnd();


	////////////////////////////////////////////////Building_2
glBegin(GL_POLYGON);
         glColor3f(0.9,1.0,1.0);
        glVertex3f(-0.5f, -0.33f, 0.0f);
        glVertex3f(-0.216f, -0.33f, 0.0f);
         glVertex3f(-0.216f, 0.4f, 0.0f);
          glVertex3f(-0.5f, 0.4f, 0.0f);
	glEnd();
		/////////////////////////////////////////Window_2


		glBegin(GL_POLYGON);
         glColor3f(0.8,0.9,1.0);
        glVertex3f(-0.466f, -0.25f, 0.0f);
        glVertex3f(-0.383f, -0.25f, 0.0f);
         glVertex3f(-0.383f, -0.166f, 0.0f);
          glVertex3f(-0.466f, -0.166f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.8,0.9,1.0);
        glVertex3f(-0.466f, -0.133f, 0.0f);
        glVertex3f(-0.383f, -0.133f, 0.0f);
         glVertex3f(-0.383f, -0.033f, 0.0f);
          glVertex3f(-0.466f, -0.033f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.8,0.9,1.0);
        glVertex3f(-0.466f, 0.0f, 0.0f);
        glVertex3f(-0.383f, 0.0f, 0.0f);
         glVertex3f(-0.383f, 0.0833f, 0.0f);
          glVertex3f(-0.466f, 0.0833f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.8,0.9,1.0);
        glVertex3f(-0.466f, 0.1163f, 0.0f);
        glVertex3f(-0.383f, 0.1163f, 0.0f);
         glVertex3f(-0.383f, 0.1966f, 0.0f);
          glVertex3f(-0.466f, 0.1966f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.8,0.9,1.0);
        glVertex3f(-0.466f, 0.2296f, 0.0f);
        glVertex3f(-0.383f, 0.2296f, 0.0f);
         glVertex3f(-0.383f, 0.3129f, 0.0f);
          glVertex3f(-0.466f, 0.3129f, 0.0f);
	glEnd();

glBegin(GL_POLYGON);
         glColor3f(0.8,0.9,1.0);
        glVertex3f(-0.33f, -0.25f, 0.0f);
        glVertex3f(-0.25f, -0.25f, 0.0f);
         glVertex3f(-0.25f, -0.166f, 0.0f);
          glVertex3f(-0.33f, -0.166f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.8,0.9,1.0);
        glVertex3f(-0.33f, -0.133f, 0.0f);
        glVertex3f(-0.25f, -0.133f, 0.0f);
         glVertex3f(-0.25f, -0.033f, 0.0f);
          glVertex3f(-0.33f, -0.033f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.8,0.9,1.0);
        glVertex3f(-0.33f, 0.0f, 0.0f);
        glVertex3f(-0.25f, 0.0f, 0.0f);
         glVertex3f(-0.25f, 0.0833f, 0.0f);
          glVertex3f(-0.33f, 0.0833f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.8,0.9,1.0);
        glVertex3f(-0.33f, 0.1163f, 0.0f);
        glVertex3f(-0.25f, 0.1163f, 0.0f);
         glVertex3f(-0.25f, 0.1966f, 0.0f);
          glVertex3f(-0.33f, 0.1966f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.8,0.9,1.0);
        glVertex3f(-0.33f, 0.2296f, 0.0f);
        glVertex3f(-0.25f, 0.2296f, 0.0f);
         glVertex3f(-0.25f, 0.3129f, 0.0f);
          glVertex3f(-0.33f, 0.3129f, 0.0f);
	glEnd();

	////////////////////////////////////////////////Building_3
	glBegin(GL_POLYGON);
         glColor3f(0.5,0.6,0.8);
        glVertex3f(0.0f, -0.33f, 0.0f);
        glVertex3f(0.32f, -0.33f, 0.0f);
        glVertex3f(0.32f, 0.33f, 0.0f);
        glVertex3f(0.0f, 0.33f, 0.0f);
         glEnd();
         ///////////////////////////////////////////////Window_3
glBegin(GL_POLYGON);
         glColor3f(1.5,1.7,1.8);
        glVertex3f(0.0166f, 0.166f, 0.0f);
        glVertex3f(0.0833f, 0.166f, 0.0f);
         glVertex3f(0.0833f, 0.25f, 0.0f);
          glVertex3f(0.0166f, 0.25f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(1.5,1.7,1.8);
        glVertex3f(0.1166f, 0.166f, 0.0f);
        glVertex3f(0.2f, 0.166f, 0.0f);
         glVertex3f(0.2f, 0.25f, 0.0f);
          glVertex3f(0.1166f, 0.25f, 0.0f);
	glEnd();
glBegin(GL_POLYGON);
         glColor3f(1.5,1.7,1.8);
        glVertex3f(0.233f, 0.166f, 0.0f);
        glVertex3f(0.3f, 0.166f, 0.0f);
         glVertex3f(0.3f, 0.25f, 0.0f);
          glVertex3f(0.233f, 0.25f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(1.5,1.7,1.8);
        glVertex3f(0.0166f, 0.0833f, 0.0f);
        glVertex3f(0.0833f, 0.0833f, 0.0f);
         glVertex3f(0.0833f, 0.0f, 0.0f);
          glVertex3f(0.0166f, 0.0f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(1.5,1.7,1.8);
        glVertex3f(0.1166f, 0.0833f, 0.0f);
        glVertex3f(0.2f, 0.0833f, 0.0f);
         glVertex3f(0.2f, 0.0f, 0.0f);
          glVertex3f(0.1166f, 0.0f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(1.5,1.7,1.8);
        glVertex3f(0.233f, 0.0833f, 0.0f);
        glVertex3f(0.3f, 0.0833f, 0.0f);
         glVertex3f(0.3f, 0.0f, 0.0f);
          glVertex3f(0.233f, 0.0f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(1.5,1.7,1.8);
        glVertex3f(0.0166f, -0.0833f, 0.0f);
        glVertex3f(0.0833f, -0.0833f, 0.0f);
         glVertex3f(0.0833f, -0.166f, 0.0f);
          glVertex3f(0.0166f, -0.166f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(1.5,1.7,1.8);
        glVertex3f(0.1166f, -0.0833f, 0.0f);
        glVertex3f(0.2f, -0.0833f, 0.0f);
         glVertex3f(0.2f, -0.166f, 0.0f);
          glVertex3f(0.1166f, -0.166f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(1.5,1.7,1.8);
        glVertex3f(0.233f, -0.0833f, 0.0f);
        glVertex3f(0.3f, -0.0833f, 0.0f);
         glVertex3f(0.3f, -0.166f, 0.0f);
          glVertex3f(0.233f, -0.166f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
         glColor3f(1.5,1.7,1.8);
        glVertex3f(0.0166f, -0.2499f, 0.0f);
        glVertex3f(0.0833f, -0.2499f, 0.0f);
         glVertex3f(0.0833f, -0.312f, 0.0f);
          glVertex3f(0.0166f, -0.312f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(1.5,1.7,1.8);
        glVertex3f(0.1166f, -0.2499f, 0.0f);
        glVertex3f(0.2f, -0.2499f, 0.0f);
         glVertex3f(0.2f, -0.312f, 0.0f);
          glVertex3f(0.1166f, -0.312f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(1.5,1.7,1.8);
        glVertex3f(0.233f, -0.2499f, 0.0f);
        glVertex3f(0.3f, -0.2499f, 0.0f);
         glVertex3f(0.3f, -0.312f, 0.0f);
          glVertex3f(0.233f, -0.312f, 0.0f);
	glEnd();

         ////////////////////////////////////////////////////////////Building_4
         glBegin(GL_POLYGON);
         glColor3f(0.8,1.0,0.6);
        glVertex3f(0.54f, -0.33f, 0.0f);
        glVertex3f(0.793f, -0.33f, 0.0f);
          glVertex3f(0.793f, 0.29f, 0.0f);
          glVertex3f(0.54f, 0.29f, 0.0f);
          glEnd();
          glPopMatrix();
          	///////////////////////////////////////////Window_4
	glBegin(GL_POLYGON);
         glColor3f(0.0,0.4,0.8);
        glVertex3f(0.583f, 0.166f, 0.0f);
        glVertex3f(0.65f, 0.166f, 0.0f);
         glVertex3f(0.65f, 0.25f, 0.0f);
          glVertex3f(0.583f, 0.25f, 0.0f);
	glEnd();
		glBegin(GL_POLYGON);
         glColor3f(0.0,0.4,0.8);
        glVertex3f(0.683f, 0.166f, 0.0f);
        glVertex3f(0.75f, 0.166f, 0.0f);
         glVertex3f(0.75f, 0.25f, 0.0f);
          glVertex3f(0.683f, 0.25f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.0,0.4,0.8);
        glVertex3f(0.583f, 0.083f, 0.0f);
        glVertex3f(0.65f, 0.083f, 0.0f);
         glVertex3f(0.65f, 0.0f, 0.0f);
          glVertex3f(0.583f, 0.0f, 0.0f);
	glEnd();
		glBegin(GL_POLYGON);
         glColor3f(0.0,0.4,0.8);
        glVertex3f(0.683f, 0.083f, 0.0f);
        glVertex3f(0.75f, 0.083f, 0.0f);
         glVertex3f(0.75f, 0.0f, 0.0f);
          glVertex3f(0.683f, 0.0f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.0,0.4,0.8);
        glVertex3f(0.583f, -0.083f, 0.0f);
        glVertex3f(0.65f, -0.083f, 0.0f);
         glVertex3f(0.65f, -0.166f, 0.0f);
          glVertex3f(0.583f, -0.166f, 0.0f);
	glEnd();
		glBegin(GL_POLYGON);
         glColor3f(0.0,0.4,0.8);
        glVertex3f(0.683f, -0.083f, 0.0f);
        glVertex3f(0.75f, -0.083f, 0.0f);
         glVertex3f(0.75f, -0.166f, 0.0f);
          glVertex3f(0.683f, -0.166f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.0,0.4,0.8);
        glVertex3f(0.583f, -0.2499f, 0.0f);
        glVertex3f(0.65f, -0.2499f, 0.0f);
         glVertex3f(0.65f, -0.312f, 0.0f);
          glVertex3f(0.583f, -0.312f, 0.0f);
	glEnd();
		glBegin(GL_POLYGON);
         glColor3f(0.0,0.4,0.8);
        glVertex3f(0.683f, -0.2499f, 0.0f);
        glVertex3f(0.75f, -0.2499f, 0.0f);
         glVertex3f(0.75f, -0.312f, 0.0f);
          glVertex3f(0.683f, -0.312f, 0.0f);
	glEnd();



    ///////////////////////////////////////////////////////////////////////////////////TreesFront row
	glPushMatrix();
	glBegin(GL_POLYGON);
         glColor3f(0.6,0.298,0.0);
        glVertex3f(-0.6f, -0.33f, 0.0f);
        glVertex3f(-0.566f, -0.33f, 0.0f);
         glVertex3f(-0.566f, 0.166f, 0.0f);
          glVertex3f(-0.6f, 0.166f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.6,0.298,0.0);
        glVertex3f(-0.1f, -0.33f, 0.0f);
        glVertex3f(-0.066f, -0.33f, 0.0f);
         glVertex3f(-0.066f, 0.166f, 0.0f);
          glVertex3f(-0.1f, 0.166f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.6,0.298,0.0);
        glVertex3f(0.4f, -0.33f, 0.0f);
        glVertex3f(0.433f, -0.33f, 0.0f);
         glVertex3f(0.433f, 0.166f, 0.0f);
          glVertex3f(0.4f, 0.166f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.6,0.298,0.0);
        glVertex3f(0.9f, -0.33f, 0.0f);
        glVertex3f(0.933f, -0.33f, 0.0f);
         glVertex3f(0.933f, 0.166f, 0.0f);
          glVertex3f(0.9f, 0.166f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.0,0.4,0.0);
        glVertex3f(-0.65f, -0.166f, 0.0f);
        glVertex3f(-0.516f, -0.166f, 0.0f);
         glVertex3f(-0.583f, 0.0f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.0,0.4,0.0);
        glVertex3f(-0.15f, -0.166f, 0.0f);
        glVertex3f(-0.016f, -0.166f, 0.0f);
         glVertex3f(-0.0833f, 0.0f, 0.0f);
	glEnd();
		glBegin(GL_POLYGON);
         glColor3f(0.0,0.4,0.0);
        glVertex3f(0.35f, -0.166f, 0.0f);
        glVertex3f(0.483f, -0.166f, 0.0f);
         glVertex3f(0.4166f, 0.0f, 0.0f);
	glEnd();
		glBegin(GL_POLYGON);
         glColor3f(0.0,0.4,0.0);
        glVertex3f(0.85f, -0.166f, 0.0f);
        glVertex3f(0.983f, -0.166f, 0.0f);
         glVertex3f(0.9166f, 0.0f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.4,0.8,0.0);
        glVertex3f(-0.65f, -0.05f, 0.0f);
        glVertex3f(-0.516f, -0.05f, 0.0f);
         glVertex3f(-0.583f, 0.33f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.4,0.8,0.0);
        glVertex3f(-0.15f, -0.05f, 0.0f);
        glVertex3f(-0.016f, -0.05f, 0.0f);
         glVertex3f(-0.0833f, 0.33f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.4,0.8,0.0);
        glVertex3f(0.35f, -0.05f, 0.0f);
        glVertex3f(0.483f, -0.05f, 0.0f);
         glVertex3f(0.416f, 0.33f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);
         glColor3f(0.4,0.8,0.0);
        glVertex3f(0.85f, -0.05f, 0.0f);
        glVertex3f(0.983f, -0.05f, 0.0f);
         glVertex3f(0.9166f, 0.33f, 0.0f);
	glEnd();
	glPopMatrix();

	  ////////////////////////////////////////////////////////////////////////////////////////////Boat
	  ///////////////////////////////////LowerPart
     glPushMatrix();
     glTranslatef(_move3, 0.0f, 0.0f);
     glBegin(GL_POLYGON);
     glColor3f(0.3,0.4 , 0.698);
     glVertex3f(-0.833f, -0.66f, 0.0);
     glVertex3f(-0.33f, -0.66f, 0.0);
     glVertex3f(-0.25f, -0.583f, 0.0);
     glVertex3f(-0.916f, -0.583f, 0.0);
     glEnd();
     /////////////////////////////////////////Body//
     glBegin(GL_POLYGON);
     glColor3f(1.5,1.7,1.8);
     glVertex3f(-0.833f, -0.583f, 0.0);
     glVertex3f(-0.33f, -0.583f, 0.0);
     glVertex3f(-0.416f, -0.45f, 0.0);
     glVertex3f(-0.75f, -0.45f, 0.0);
     glEnd();
     /////////////////////////////////////////Top//
     glBegin(GL_POLYGON);
     glColor3f(0.3,0.4 , 0.698);
     glVertex3f(-0.66f, -0.45f, 0.0);
     glVertex3f(-0.5f, -0.45f, 0.0);
     glVertex3f(-0.583f, -0.33f, 0.0);
     glEnd();
     //////////////////////////////////////////Pole//
     glBegin(GL_LINES);
     glColor3f(0.0,0.0 , 0.0);
     glVertex3f(-0.583f, -0.33f, 0.0);
     glVertex3f(-0.583f, -0.2166f, 0.0);
     glEnd();
     //////////////////////////////////////////Flag//
     glBegin(GL_POLYGON);
     glColor3f(1.0,0.0 , 0.0);
     glVertex3f(-0.583f, -0.283f, 0.0);
     glVertex3f(-0.55f, -0.25f, 0.0);
     glVertex3f(-0.583f, -0.2166f, 0.0);
     glEnd();

     ////////////////////////////////////////////windows//
     glBegin(GL_POLYGON);
     glColor3f(0.3,0.7 , 1.9);
     glVertex3f(-0.75f,-0.566f,0.0f);
     glVertex3f(-0.66f,-0.566f,0.0f);
     glVertex3f(-0.66f,-0.49f,0.0f);
     glVertex3f(-0.75f,-0.49f,0.0f);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3f(0.3,0.7 , 1.9);
     glVertex3f(-0.63f,-0.566f,0.0f);
     glVertex3f(-0.53f,-0.566f,0.0f);
     glVertex3f(-0.53f,-0.49f,0.0f);
     glVertex3f(-0.63f,-0.49f,0.0f);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3f(0.3,0.7 , 1.9);
     glVertex3f(-0.5f,-0.566f,0.0f);
     glVertex3f(-0.416f,-0.566f,0.0f);
     glVertex3f(-0.416f,-0.49f,0.0f);
     glVertex3f(-0.5f,-0.49f,0.0f);
     glEnd();
     //////////////////////////////////////Shadow
 glBegin(GL_POLYGON);
     glColor3f(0.0,0.56 , 0.698);
     glVertex3f(-0.833f,-0.6833f,0.0f);
     glVertex3f(-0.33f,-0.6833f,0.0f);
     glVertex3f(-0.33f,-0.66f,0.0f);
     glVertex3f(-0.833f,-0.66f,0.0f);
     glEnd();

  //     glPopMatrix();






glutSwapBuffers();
}



void update(int value) {

    _move +=0.0001f;
    if(_move-1.5 > 1.0)
    {
        _move = -1.0;
    }


	_move1 += .005;
    if(_move1-1.966 > +1.0)
    {
        _move1 = -1.0;
    }


	_move2 += .01;
    if(_move2-1.663 > 1.0)
    {
        _move2 = -1.0;
    }


	_move3 += .003;
    if(_move3-1.663 > 1.0)
    {
        _move3 = -1.0;
    }

	_move4-=.01;
    if(_move4+1.5 < -1.0)
    {
        _move4 = 1.0;
    }
	_move5 -= .01;
    if(_move5+1.966 < - 1.0)
    {
        _move5 = 1.0;
    }
    _move6 += .005;
    if(_move6-0.39 > +1.0)
    {
        _move6 = -1.4;
    }
     _move7 += .0006;
    if(_move7-0.79 > 1.0)
    {
        _move7 = -1.4;
    }
	glutPostRedisplay();


	glutTimerFunc(25, update, 0); //Notify GLUT to call update again in 20 milliseconds
}



int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1200, 1200);
	glutCreateWindow("City By The Lake");
	glutDisplayFunc(drawScene);

	glutTimerFunc(25, update, 0);//Add a timer
	/*glutTimerFunc(40, update1, 0);*/
	glutMainLoop();
	return 0;
}
