
#include "stdafx.h"

#include <GL/freeglut.h>
#include <time.h>
#include <stdlib.h>
#include "ScnMgr.h"

ScnMgr *g_ScnMgr = NULL;


int main(int argc, char** argv) // ������ ����ϰ� ����Լ� ���� 
{ // �ʱ�ȭ �Լ��� 

	glutInit(&argc, argv); // glut �ʱ�ȭ 

	srand(time(NULL));

	g_ScnMgr = new ScnMgr(800,800);

	glutMainLoop();

	delete g_ScnMgr;

	return 0;
}