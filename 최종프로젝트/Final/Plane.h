#pragma once
class Plane
{
private:
	Location plane_pos;
	float pos_angle;
	float action_angle;
public:

	Plane();
	Location set_pos(int x, int y, int z)
	{
		plane_pos.x = x;
		plane_pos.z = z;
		plane_pos.y = y;
	}
	float getAngle() {
		return pos_angle;
	}
	float setAction(float s)
	{
		action_angle = s;
		return action_angle;
	}
	float setAngle(float a) {
		pos_angle += a;
		return pos_angle;
	}

	~Plane();

	GLvoid draw();
};

