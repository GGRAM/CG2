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
	glPushMatrix();
	glTranslatef(0, -0.7, 0);

	//Áß¾Ó ¸öÅë
	glPushMatrix();
	glColor3f(1, 1, 1);
	glScalef(1.0,0.6,2.0);
	glutSolidCube(0.2);
	//glColor3f(0, 0, 0);
	//glutWireCube(0.25);
	glPushMatrix();		//¿Þ³¯°³
	glColor3f(1, 0, 0);
	glTranslatef(-0.143, -0.04, 0.0);
	glScalef(0.7, 1.0, 1.0);
	glutSolidCube(0.12);
	glPopMatrix();

	glPushMatrix();		//¿À¸¥³¯°³
	glColor3f(1, 0, 0);
	glTranslatef(0.143, -0.04, 0.0);
	glScalef(0.7, 1.0, 1.0);
	glutSolidCube(0.12);
	glPopMatrix();

	glPushMatrix();		//À­ ±âµÕ
	glTranslatef(0, 0.15, 0.0);
	glColor3f(1, 1, 1);
	glScalef(0.6, 0.7, 0.25);
	glutSolidCube(0.2);

	glPushMatrix();		//À­ ±âµÕ
	glTranslatef(0, 0.16, 0.0);
	glColor3f(0, 0, 1);
	glScalef(0.6, 0.7, 0.25);
	glutSolidCube(0.2);
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(0, 0.07, 0.0);
	glColor3f(0, 0, 1);
	glScalef(0.1, 0.5, 0.1);
	glutSolidCube(0.2);
	glPopMatrix();

	glPopMatrix();

	return GLvoid();
}


