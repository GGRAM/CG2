#include "stdafx.h"
#include "Barrier.h"


Barrier::Barrier()
{
	set = false;
}


Barrier::~Barrier()
{
}

GLvoid Barrier::draw(Vertex3 color) {
	glColor3f(color.x/2+0.5, color.y/2+0.5, color.z/2+0.5);
//	glColor3f(color.x *1, color.y*0.5, color.z *0.5);
	glBegin(GL_QUADS);
	glVertex3f(0, 0, 0);
	glVertex3f(1, 0, 0);
	glVertex3f(0.8, 0.5, 0);
	glVertex3f(0.2, 0.5, 0);
	glEnd();
}