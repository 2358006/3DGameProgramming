#include <GL/glut.h>

void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT); // 화면 클리어
	glBegin(GL_POLYGON); // 그래픽 오브젝트를 선언
	glVertex3f(-0.5, -0.5, 0.0); // 3차원(x축, y축, z축) 점 지정
	glVertex3f(-0.5, 0.5, 0.0); // 3차원(x축, y축, z축) 점 지정
	glVertex3f(0.5, 0.5, 0.0); // 3차원(x축, y축, z축) 점 지정
	glVertex3f(0.5, -0.5, 0.0); // 3차원(x축, y축, z축) 점 지정

	glEnd(); // 그래픽 오브젝트 내용 마무리
	glFlush(); // 버퍼에 있는 내용을 그리게 함

	/* GLUT 모델링
	1. 정육면체 
		void glutSolidCube(GLdouble size); 
		void glutWireCube(GLdouble size);

	2. 구
		void glutSolidSphere(GLdouble radius, GLint slices, GLint stacks);
		void glutWireSphere(GLdouble radius, GLint slices, GLint stacks);

	3. 원환체 (도넛)
		void glutSolidSphere(GLdouble innerRadius, GLdouble outerRadius, GLint nsides, GLint rings);
		void glutWireSphere(GLdouble innerRadius, GLdouble outerRadius, GLint nsides, GLint rings);
	
	4. 원뿔
		void glutSolidCone(GLdouble base, GLdouble height, GLint slices, GLint stacks);
		void glutWireCone(GLdouble base, GLdouble height, GLint slices, GLint stacks);
	
	5. 정사면체
		void glutSolidTetrahedron();
		void glutWireTetrahedron();
	
	6. 정이십변체
		void glutSolidIcosahedron();
		void glutWireIcosahedron();
	
	7. 차주전자 
		void glutSolidTeapot(GLdouble size);
		void glutWireTeapot(GLdouble size);
	*/
}

int main(int argc, char* argv[]) 
{
	glutInit(&argc, argv); // GLUT 라이브러리 초기화
	glutCreateWindow("My Display"); // Window 생성
	glutDisplayFunc(MyDisplay); // Display 생성
	glutMainLoop(); // 메인 루프 진입
	return 0; // 루프 끝날때 까지 실행 되지 않음
}