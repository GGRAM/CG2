#pragma once

#include "Global.h"
#include "Plane.h"
#include "Pipe.h"
#include "Barrier.h"
#include "MyCamera.h"


class ScnMgr
{	unsigned int m_WindowSizeX = 0;
	unsigned int m_WindowSizeY = 0;

	Plane m_Plane;
	Pipe *m_Pipe[MAX_PIPE];
	Barrier *m_Barrier[MAX_BARRIER];


	void Initialize(int windowSizeX, int windowSizeY);


public:
	ScnMgr(int windowSizeX, int windowSizeY);
	~ScnMgr();

	static GLvoid drawscene();
	static GLvoid KeyDowninput(unsigned char key, int x, int y);
	static GLvoid KeyUpinput(unsigned char key, int x, int y);
	bool IsInitialized();
	bool m_Initialized = false;

	static GLvoid Update(float eTime);
	static GLvoid Idle();
};

