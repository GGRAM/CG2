#include "stdafx.h"
#include "Pipe.h"


Pipe::Pipe()
{
}


Pipe::~Pipe()
{

}
GLvoid Pipe::draw(){
//	glShadeModel(GL_SMOOTH);
	glPushMatrix();
	for (int i = 0; i < 6; ++i) {
		glRotatef(60, 0, 0, 1);

		glPushMatrix();
		glTranslatef(-0.5, -1, 0);
		glBegin(GL_QUADS);
		glColor3f(1, 1, 0);
		glVertex3f(0, 0, 0);
		glVertex3f(1, 0, 0);
		glVertex3f(1, 0, 1);
		glVertex3f(0, 0, 1);
		glEnd();
		glPopMatrix();


	}
		//	glShadeModel(GL_FLAT);
	glPopMatrix();
}
