#pragma once
class Barrier
{
public:
	bool set;
	Barrier();
	~Barrier();

	GLvoid draw(Vertex3 color);
};

