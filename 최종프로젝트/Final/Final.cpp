﻿// Final.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <GL/freeglut.h>
GLvoid drawScene (GLvoid);
GLvoid Reshape (int w, int h);

void main(int argc, char *argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	// 디스플레이 모드 설정 
	glutInitWindowPosition ( 100, 100 );
	// 윈도우의 위치지정 
	glutInitWindowSize ( 250, 250 );
	// 윈도우의 크기 지정 
	glutCreateWindow ( "Example2" );
	// 윈도우 생성 (윈도우 이름) 
	glutDisplayFunc (drawScene); 
	// 출력 함수의 지정 
	glutReshapeFunc (Reshape);
	glutMainLoop();
} // 윈도우 출력 함수 

GLvoid drawScene(GLvoid) {
	glClearColor(0.0f, 0.0f, 1.0f, 1.0f); // 바탕색을 'blue' 로 지정 
	glClear(GL_COLOR_BUFFER_BIT); // 설정된 색으로 전체를 칠하기
	glColor4f(0.0f, 1.0f, 0.0f, 1.0f); // 그리기 색을 'green' 으로 지정 
	glRectf(-0.5f, -0.5f, 0.5f, 0.5f); // 사각형 그리기 
	glFlush(); // 화면에 출력하기 
}

GLvoid Reshape(int w, int h)
{
	glViewport(0, 0, w, h);
}