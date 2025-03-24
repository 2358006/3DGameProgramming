#include <GL/glut.h>

// 1. �ﰢ���� �簢�� ��ħ
void DisplayTriRect() {
	glClear(GL_COLOR_BUFFER_BIT);
	
	glBegin(GL_POLYGON);
	glVertex3f(0.0, -0.25, 0.0);
	glVertex3f(0.5, -0.25, 0.0);
	glVertex3f(0.25, 0.25, 0.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex3f(0.0, -0.25, 0.0);
	glVertex3f(0.0, 0.25, 0.0);
	glVertex3f(-0.5, 0.25, 0.0);
	glVertex3f(-0.5, -0.25, 0.0);
	glEnd();
	
	glFlush();
}

// 2. �ﰢ��, �簢��, �ﰢ��(�簢�� �ؿ�)
void DisplayTri2Rect() {
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_POLYGON);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.5, 0.0, 0.0);
	glVertex3f(0.25, 0.5, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.5, 0.0);
	glVertex3f(-0.5, 0.5, 0.0);
	glVertex3f(-0.5, 0.0, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-0.25, 0, 0.0);
	glVertex3f(0.0, -0.5, 0.0);
	glVertex3f(-0.5, -0.5, 0.0);
	glEnd();

	glFlush();
}

// 3. �簢 �ﰢ �簢(�ﰢ ��) �ﰢ(�簢 ��)
void DisplayTri2Rect2() {
	glClear(GL_COLOR_BUFFER_BIT);
	
	glBegin(GL_POLYGON);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.5, 0.0, 0.0);
	glVertex3f(0.25, 0.5, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.5, 0.0);
	glVertex3f(-0.5, 0.5, 0.0);
	glVertex3f(-0.5, 0.0, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-0.25, 0, 0.0);
	glVertex3f(0.0, -0.5, 0.0);
	glVertex3f(-0.5, -0.5, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, -0.5, 0.0);
	glVertex3f(0.5, -0.5, 0.0);
	glVertex3f(0.5, 0.0, 0.0);
	glEnd();

	glFlush();
}

// 4. ���
void DisplayStar() {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	
	glVertex3f(0.15, 0.2, 0.0);
	glVertex3f(0.5, 0.2, 0.0);
	glVertex3f(0.25, -0.05, 0.0);
	glVertex3f(0.4, -0.5, 0.0);
	glVertex3f(0.0, -0.2, 0.0);
	glVertex3f(-0.4, -0.5, 0.0);
	glVertex3f(-0.25, -0.05, 0.0);
	glVertex3f(-0.5, 0.2, 0.0);
	glVertex3f(-0.15, 0.2, 0.0);
	glVertex3f(0.0, 0.5, 0.0);

	glEnd();
	glFlush();
}


int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutCreateWindow("Test");

	// glutDisplayFunc(DisplayTriRect);
	// glutDisplayFunc(DisplayTri2Rect);
	// glutDisplayFunc(DisplayTri2Rect2);
	// glutDisplayFunc(DisplayStar);
	glutMainLoop();
	return 0;
}