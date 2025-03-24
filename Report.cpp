#include <GL/glut.h>

// 1. »ï°¢Çü°ú »ç°¢Çü ÇÕÄ§
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

// 2. »ï°¢Çü, »ç°¢Çü, »ï°¢Çü(»ç°¢Çü ¹Ø¿¡)
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

// 3. »ç°¢ »ï°¢ »ç°¢(»ï°¢ ¹Ø) »ï°¢(»ç°¢ ¹Ø)
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

// 4. ¿Àµî¼º
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