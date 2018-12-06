#include "stdafx.h"
#include "ScnMgr.h"
#include "Global.h"
#include "math.h"


ScnMgr::ScnMgr(int windowSizeX, int windowSizeY)
{
	Initialize(windowSizeX, windowSizeY);
	drawscene();



}


ScnMgr::~ScnMgr()
{
	
}
//��ü����
Plane player;
MyCamera m_Cam;
Pipe pipes[MAX_PIPE] = { 0,1,2,3,4,5,6,7,8,9 };
Vertex3 maincolor(1,1,1);


GLfloat current_time;
GLint current_frame = 0;
GLfloat Prevtime = 0;

GLvoid ScnMgr::drawscene()
{

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	glLoadIdentity();
	glMatrixMode(GL_PROJECTION);
	
	gluPerspective(60.f, 1, 0.1, 10);
	glTranslatef(0, 0,-2);
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);


	glPushMatrix();	
	
	//ī�޶� ��� ����
	//
	m_Cam.draw();
	

	//���
	for (int i = 0; i < MAX_PIPE; ++i) {
		pipes[i].draw();
	}

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
		player.setAngle(10);
		player.setAction(-45);
		break;
	case 'a':
	case 'A':
		player.setAngle(-10);
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
	glViewport(0, 0, 1, 1);

	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LESS);
//	glEnable(GL_CULL_FACE);
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
	//Į�� ������Ʈ
	//float t = eTime/5000;
	//float col1 = sin(t)/2;
	//float col2 = sin(t*t)/2;
	//float col3 = sin(t*t*t)/2;
	float t = eTime / 1000;
	float col1 = sin(t) / 3;
	float col2 = cos(2*t) / 3;
	float col3 = sin(t*col1) / 3;

	maincolor.set(0.7 + col1, 0.7 + col2, 0.7 + col3);

//	m_Cam.update(eTime);

	for (int i = 0; i < MAX_PIPE; ++i) {
		pipes[i].update(eTime, maincolor);
	}

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
