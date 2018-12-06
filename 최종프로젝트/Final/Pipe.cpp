#include "stdafx.h"
#include "Pipe.h"


Pipe::Pipe(int order)
{
	z = order;
	printf("%d \n", order);
	color.set(1, 1, 0);
}


Pipe::~Pipe()
{

}
GLvoid Pipe::draw(){
//	glShadeModel(GL_SMOOTH);
	glPushMatrix();
	glTranslatef(0, 0, -z);
	for (int i = 0; i < 6; ++i) {
		glRotatef(60, 0, 0, 1);

		glPushMatrix();

		glTranslatef(-0.5, -1, 0);
		glBegin(GL_QUADS);
		glColor3f(color.x, color.y, color.z);
		glVertex3f(0, 0, 0);
		glVertex3f(1, 0, 0);
		glVertex3f(1, 0, 0.95);
		glVertex3f(0, 0, 0.95);
		glEnd();

		if (B[i].set) 
			B[i].draw(color);
		

		glPopMatrix();


	}
		//	glShadeModel(GL_FLAT);
	glPopMatrix();
}

GLvoid Pipe::update(float t, Vertex3 colortype) {
	z -= t/1000000 +0.1;
	if (z < -1) {
		z += 10;
		b= rand() % 12;
		for (int i = 0; i < 6; ++i) {
			
				B[i].set = false;
		}
		if (b < 6)
			B[b].set = true;
	}

	color.x = colortype.x - z / 10;
	color.y = colortype.y - z / 10;

	color.z = colortype.z - z / 10;


}
