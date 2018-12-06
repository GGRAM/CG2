#include "stdafx.h"
#include "MyCamera.h"
#include "math.h"

MyCamera::MyCamera()
{
	x = 0; y = 0; z = 0;
	C_angle = 0;
	C_speed = INIT_C_SPEED;
	clock = 1;


}


MyCamera::~MyCamera()
{
}



GLvoid MyCamera::update(float t)
{
	float c_t = t / 100;
	float a = sin(c_t);
	float b = a * a/10;
	z = b;


	C_speed = INIT_C_SPEED + t / 40000;
	int temp = rand() % 100;
	if (temp == 0)
		clock = -clock;

	C_angle += clock*C_speed;

	

}
GLvoid MyCamera::draw()
{
	glRotatef(C_angle, 0, 0, 1);
	glTranslatef(x, y, z);


}
