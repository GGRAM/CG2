#pragma once
#include "Barrier.h"
class Pipe
{
	float z;
	Vertex3 color;
	Barrier a;



public:
	Pipe(int );
	~Pipe();
	GLvoid draw();
	GLvoid update(float t, Vertex3 colortype);
};

