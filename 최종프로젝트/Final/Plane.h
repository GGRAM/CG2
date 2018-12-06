#pragma once
class Plane
{
private:
	Location plane_pos;
	float pos_angle;
	float action_angle;
	int dir;
	bool dir_move;
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
	void setAngle(int a) {
		dir = a;
		//printf("%d \n", dir);
		if (a != 0)
		{
			dir_move = true;
		}
		else
		{
			dir_move = false;
		}
	}
	void updateAngle()
	{
		if (dir_move)
		{
			if (dir == 1)
			{
				pos_angle += 5;
				if (pos_angle >= 360)
				{
					pos_angle = 0;
				}
			}
			if (dir == -1)
			{
				pos_angle -= 5;
				if (pos_angle <= 0)
				{
					pos_angle = 360;
				}
			}
		}
	}

	void check_out()
	{

	}

	void reset_plane()
	{
		plane_pos.x = 0;
		plane_pos.z = -0.5;
		plane_pos.y = -0.7;
		pos_angle = 0;
		dir = 0;
	}


	~Plane();

	GLvoid draw();
};

