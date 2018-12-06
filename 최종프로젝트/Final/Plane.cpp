#include "stdafx.h"
#include "Plane.h"


Plane::Plane()
{
	plane_pos.x = 0;
	plane_pos.z = -0.5;
	plane_pos.y = -0.7;
	pos_angle = 0;
}

Plane::~Plane()
{
}

GLvoid Plane::draw() {
	glPushMatrix();
	glRotatef(pos_angle, 0, 0, 1);
	glTranslatef(plane_pos.x, plane_pos.y, plane_pos.z);
	//glRotatef(30, 1, 0, 0);
	glRotatef(action_angle, 0, 0, 1);

	//Áß¾Ó ¸öÅë
	glPushMatrix();
	glColor3f(1, 1, 1);
	glScalef(0.7, 0.3, 1.2);
	glutSolidCube(0.2);
	glColor3f(0, 0, 0);
	glutWireCube(0.2);

	glPushMatrix();
	glColor3f(1, 0, 0);
	glScalef(2.0, 0.5, 0.25);
	glutSolidCube(0.2);
	glColor3f(0, 0, 0);
	glutWireCube(0.2);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 0, 0.12);
	glColor3f(0, 0, 1);
	glScalef(1.2, 0.3, 0.3);
	glutSolidCube(0.15);
	glColor3f(0, 0, 0);
	glutWireCube(0.15);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 0.05, 0);
	glColor3f(0, 1, 0);
	glScalef(0.25, 0.5, 0.25);
	glutSolidCube(0.2);
	glColor3f(0, 0, 0);
	glutWireCube(0.2);
	glPopMatrix();


	glPopMatrix();

	glPopMatrix();
}