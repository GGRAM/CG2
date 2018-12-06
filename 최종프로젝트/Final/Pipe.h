#pragma once
class Pipe
{
	float z;
	Vertex3 color;


public:
	Pipe(int );
	~Pipe();
	GLvoid draw();
	GLvoid update(float t, Vertex3 colortype);
};

