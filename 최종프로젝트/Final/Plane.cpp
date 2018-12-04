#include "stdafx.h"
#include "Plane.h"


Plane::Plane()
{
	x = 0;
	y = 0;
	z = 0;
}


Plane::~Plane()
{
}

GLvoid Plane::draw()
{
	//¸ÇÀ­ ³¯°³
	glPushMatrix();
	glColor3f(0.5, 0.4, 0.2);
	glTranslatef(0, -0.50, 0);
	glScalef(1.0, 1.0, 1.0);
	glutSolidCube(0.1);
	glPopMatrix();

	//À­ ³¯°³
	glPushMatrix();
	glColor3f(0.5, 0.7, 0.1);
	glTranslatef(0, -0.58, 0);
	glScalef(1.2, 0.5, 1.5);
	glutSolidCube(0.2);
	glPopMatrix();
	
	//¸öÃ¼
	glPushMatrix();
	glColor3f(1, 0, 1);
	glTranslatef(0, -0.7, 0);
	glScalef(1.5, 0.5,2.0);
	glutSolidCube(0.3);
	glPopMatrix();
	//¿ÞÂÊ ³¯°³
	glPushMatrix();
	glColor3f(1, 0, 0);
	glTranslatef(-0.3, -0.7, 0);
	glScalef(1.0, 0.5, 2.0);
	glutSolidCube(0.15);
	glPopMatrix();

	//¿À¸¥ÂÊ ³¯°³
	glPushMatrix();
	glColor3f(1, 0, 0);
	glTranslatef(0.3, -0.7, 0);
	glScalef(1.0, 0.5, 2.0);
	glutSolidCube(0.15);
	glPopMatrix();

	return GLvoid();
}


