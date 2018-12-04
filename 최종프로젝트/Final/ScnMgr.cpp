#include "stdafx.h"
#include "ScnMgr.h"
#include "Global.h"


Plane m_plane;

ScnMgr::ScnMgr(int windowSizeX, int windowSizeY)
{
	Initialize(windowSizeX, windowSizeY);
	drawscene();

}


ScnMgr::~ScnMgr()
{
	
}


GLvoid ScnMgr::drawscene()
{

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);


	glPushMatrix();
	//카메라 행렬 적용
	//

	//배경

	//장애물

	//주인공 

	m_plane.draw();

	glPopMatrix();


	glutSwapBuffers();
	return GLvoid();
}




void ScnMgr::Initialize(int windowSizeX, int windowSizeY)
{
	//Set window size
	m_WindowSizeX = windowSizeX;
	m_WindowSizeY = windowSizeY;

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // 디스플레이 모드 설정 
	glutInitWindowPosition(0, 0); // 윈도우의 위치 지정
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glutInitWindowSize(m_WindowSizeX, m_WindowSizeY); // 윈도우의 크기 지정 
	glutCreateWindow("666"); // 윈도우 생성 (윈도우 이름) 

	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LESS);
	glEnable(GL_CULL_FACE);
	glCullFace(GL_BACK);
	glFrontFace(GL_CCW);
	glShadeModel(GL_SMOOTH);
	glutDisplayFunc(drawscene);

}

bool ScnMgr::IsInitialized()
{
	return m_Initialized;
}
