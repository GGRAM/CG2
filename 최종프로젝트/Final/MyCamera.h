#pragma once
class MyCamera
{
public:
	float x, y, z;
	float C_angle;
	float C_speed;
	int clock;

	MyCamera();
	~MyCamera();

	GLvoid update(float t);
	GLvoid draw();
};

