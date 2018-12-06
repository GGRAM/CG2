#pragma once
class Vertex3
{
public:
	float x, y, z;


	Vertex3();
	Vertex3(float a, float b, float c);
	void set(float a, float b, float c);
	void set(Vertex3 V3);
	~Vertex3();
};

