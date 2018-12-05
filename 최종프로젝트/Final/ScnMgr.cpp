#include "stdafx.h"
#include "ScnMgr.h"
#include "Global.h"

ScnMgr::ScnMgr(int windowSizeX, int windowSizeY)
{
	Initialize(windowSizeX, windowSizeY);
	drawscene();

}


ScnMgr::~ScnMgr()
{
	
}
Plane player;
GLfloat current_time;
GLint current_frame = 0;
GLfloat Prevtime = 0;

GLvoid ScnMgr::drawscene()
{

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glPushMatrix();
	//ī�޶� ��� ����
	//

	//���

	//��ֹ�

	//���ΰ� 
	player.draw();
	glPopMatrix();
	glutSwapBuffers();
	return GLvoid();
}

GLvoid ScnMgr::KeyDowninput(unsigned char key, int x, int y)
{
	
	switch (key)
	{
	case 'd':
	case 'D':
		player.setAngle(5);
		player.setAction(-45);
		break;
	case 'a':
	case 'A':
		player.setAngle(-5);
		player.setAction(45);
		break;
	default:
		break;
	}
	return GLvoid();
	
}

GLvoid ScnMgr::KeyUpinput(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 'd':
	case 'D':
		player.setAction(0);
		break;
	case 'a':
	case 'A':
		player.setAction(0);
		break;
	default:
		break;
	}

	return GLvoid();
}




void ScnMgr::Initialize(int windowSizeX, int windowSizeY)
{
	//Set window size
	m_WindowSizeX = windowSizeX;
	m_WindowSizeY = windowSizeY;

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // ���÷��� ��� ���� 
	glutInitWindowPosition(0, 0); // �������� ��ġ ����
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glutInitWindowSize(m_WindowSizeX, m_WindowSizeY); // �������� ũ�� ���� 
	glutCreateWindow("666"); // ������ ���� (������ �̸�) 

	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LESS);
	glEnable(GL_CULL_FACE);
	glCullFace(GL_BACK);
	glFrontFace(GL_CCW);
	glShadeModel(GL_SMOOTH);
	glutDisplayFunc(drawscene);
	glutKeyboardFunc(KeyDowninput);
	glutKeyboardUpFunc(KeyUpinput);
	glutIdleFunc(Idle);
}

bool ScnMgr::IsInitialized()
{
	return m_Initialized;
}

GLvoid ScnMgr::Update(float eTime)
{

	glutPostRedisplay();
	return GLvoid();
}

GLvoid ScnMgr::Idle()
{
	//
	current_time = glutGet(GLUT_ELAPSED_TIME);
	current_frame++;
	if (current_time - Prevtime > 1000 / FPS_TIME) {



		Prevtime = current_time;
		current_frame = 0;
	}
	Update(current_time);
	return GLvoid();
}
