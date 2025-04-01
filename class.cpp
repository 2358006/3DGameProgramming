#include <GL/glut.h>

void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT); // ȭ�� Ŭ����
	glBegin(GL_POLYGON); // �׷��� ������Ʈ�� ����
	glVertex3f(-0.5, -0.5, 0.0); // 3����(x��, y��, z��) �� ����
	glVertex3f(-0.5, 0.5, 0.0); // 3����(x��, y��, z��) �� ����
	glVertex3f(0.5, 0.5, 0.0); // 3����(x��, y��, z��) �� ����
	glVertex3f(0.5, -0.5, 0.0); // 3����(x��, y��, z��) �� ����

	glEnd(); // �׷��� ������Ʈ ���� ������
	glFlush(); // ���ۿ� �ִ� ������ �׸��� ��

	/* GLUT �𵨸�
	1. ������ü 
		void glutSolidCube(GLdouble size); 
		void glutWireCube(GLdouble size);

	2. ��
		void glutSolidSphere(GLdouble radius, GLint slices, GLint stacks);
		void glutWireSphere(GLdouble radius, GLint slices, GLint stacks);

	3. ��ȯü (����)
		void glutSolidSphere(GLdouble innerRadius, GLdouble outerRadius, GLint nsides, GLint rings);
		void glutWireSphere(GLdouble innerRadius, GLdouble outerRadius, GLint nsides, GLint rings);
	
	4. ����
		void glutSolidCone(GLdouble base, GLdouble height, GLint slices, GLint stacks);
		void glutWireCone(GLdouble base, GLdouble height, GLint slices, GLint stacks);
	
	5. �����ü
		void glutSolidTetrahedron();
		void glutWireTetrahedron();
	
	6. ���̽ʺ�ü
		void glutSolidIcosahedron();
		void glutWireIcosahedron();
	
	7. �������� 
		void glutSolidTeapot(GLdouble size);
		void glutWireTeapot(GLdouble size);
	*/
}

int main(int argc, char* argv[]) 
{
	glutInit(&argc, argv); // GLUT ���̺귯�� �ʱ�ȭ
	glutCreateWindow("My Display"); // Window ����
	glutDisplayFunc(MyDisplay); // Display ����
	glutMainLoop(); // ���� ���� ����
	return 0; // ���� ������ ���� ���� ���� ����
}