#include "stdafx.h"
#include "Plane.h"


Plane::Plane()
{

}

Plane::~Plane()
{
}

GLvoid Plane::draw() {
	glPushMatrix();
	

	//로테이트
	//distance 트렌지션
	//로테이트


	glColor3f(1, 1, 0.5);
	glutSolidCube(0.2);

	glPushMatrix();
	glTranslatef(0, 0.2, 0);
	
	
	glutSolidCube(0.1);
glPopMatrix();
	glScalef(4, 1, 1);
	glutSolidCube(0.1);


	glPopMatrix();
}