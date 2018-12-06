#include "Vertex3.h"



Vertex3::Vertex3()
{
}

Vertex3::Vertex3(float a, float b, float c)
{
	x = a;
	y = b;
	z = c;
}


void Vertex3::set(float a, float b, float c)
{
	x = a;
	y = b;
	z = c;
}
void Vertex3::set(Vertex3 V3)
{
	x = V3.x;
	y = V3.y;
	z = V3.z;
}

Vertex3::~Vertex3()
{
}
