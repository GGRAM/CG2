
#include "stdafx.h"

#include <GL/freeglut.h>
#include <time.h>
#include <stdlib.h>
#include "ScnMgr.h"

ScnMgr *g_ScnMgr = NULL;


int main(int argc, char** argv) // 윈도우 출력하고 출력함수 설정 
{ // 초기화 함수들 

	glutInit(&argc, argv); // glut 초기화 

	srand(time(NULL));

	g_ScnMgr = new ScnMgr(800,800);

	glutMainLoop();

	delete g_ScnMgr;

	return 0;
}