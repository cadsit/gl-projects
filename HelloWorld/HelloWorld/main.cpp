#include <string>
#include "GL\glew.h"
#include "GL\freeglut.h"

#define WIDTH 310
#define HEIGHT 230

using namespace std;

void init(void) {
	glOrtho(0, WIDTH, 0, HEIGHT, -1, 1);
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glShadeModel(GL_FLAT);
}

void draw_h(float left_x, float top_y) {
	float right_x = left_x + 50.0f;
	float bottom_y = top_y - 100.0f;
	float mid_y = (top_y + bottom_y) / 2;

	glBegin(GL_LINES);
		glVertex2f(left_x, top_y);
		glVertex2f(left_x, bottom_y);

		glVertex2f(right_x, top_y);
		glVertex2f(right_x, bottom_y);

		glVertex2f(left_x, mid_y);
		glVertex2f(right_x, mid_y);
	glEnd();
}

void draw_e(float left_x, float top_y) {
	float right_x = left_x + 50;
	float bottom_y = top_y - 100;
	float mid_y = (top_y + bottom_y) / 2;
	float mid_x = (left_x + right_x) / 2 + 10.0f;

	glBegin(GL_LINES);
		glVertex2f(left_x, top_y);
		glVertex2f(right_x, top_y);

		glVertex2f(left_x, mid_y);
		glVertex2f(mid_x, mid_y);

		glVertex2f(left_x, bottom_y);
		glVertex2f(right_x, bottom_y);

		glVertex2f(left_x, top_y);
		glVertex2f(left_x, bottom_y);

	glEnd();
}

void draw_l(float left_x, float top_y) {
	float bottom_y = top_y - 100;
	float right_x = left_x + 50;

	glBegin(GL_LINES);
		glVertex2f(left_x, top_y);
		glVertex2f(left_x, bottom_y);

		glVertex2f(left_x, bottom_y);
		glVertex2f(right_x, bottom_y);
	glEnd();
}

void draw_o(float left_x, float top_y) {
	float right_x = left_x + 50;
	float bottom_y = top_y - 100;

	glBegin(GL_LINES);
		glVertex2f(left_x, top_y);
		glVertex2f(left_x, bottom_y);

		glVertex2f(left_x, top_y);
		glVertex2f(right_x, top_y);

		glVertex2f(right_x, top_y);
		glVertex2f(right_x, bottom_y);

		glVertex2f(left_x, bottom_y);
		glVertex2f(right_x, bottom_y);
	glEnd();
}

void draw_w(float left_x, float top_y) {
	float right_x = left_x + 50;
	float mid_x = (left_x + right_x ) / 2;
	float bottom_y = top_y - 100;
	float mid_y = (top_y + bottom_y) / 2;

	glBegin(GL_LINES);
		glVertex2f(left_x, top_y);
		glVertex2f(left_x, bottom_y);

		glVertex2f(left_x, bottom_y);
		glVertex2f(mid_x, mid_y);

		glVertex2f(mid_x, mid_y);
		glVertex2f(right_x, bottom_y);

		glVertex2f(right_x, top_y);
		glVertex2f(right_x, bottom_y);
	glEnd();
}

void draw_r(float left_x, float top_y) {
	float right_x = left_x + 50;
	float mid_x = (left_x + right_x ) / 2;
	float bottom_y = top_y - 100;
	float mid_y = (top_y + bottom_y) / 2;
	
	glBegin(GL_LINES);
		glVertex2f(left_x, top_y);
		glVertex2f(left_x, bottom_y);

		glVertex2f(left_x, top_y);
		glVertex2f(right_x, top_y);

		glVertex2f(right_x, top_y);
		glVertex2f(right_x, mid_y);

		glVertex2f(right_x, mid_y);
		glVertex2f(left_x, mid_y);

		glVertex2f(left_x, mid_y);
		glVertex2f(right_x, bottom_y);
	glEnd();
}

void draw_d(float left_x, float top_y) {
	float right_x = left_x + 50;
	float mid_x = (left_x + right_x ) / 2;
	float bottom_y = top_y - 100;
	float mid_y = (top_y + bottom_y) / 2;

	glBegin(GL_LINES);
		glVertex2f(left_x, top_y);
		glVertex2f(mid_x, top_y);

		glVertex2f(mid_x, top_y);
		glVertex2f(right_x, mid_y);

		glVertex2f(right_x, mid_y);
		glVertex2f(mid_x, bottom_y);

		glVertex2f(mid_x, bottom_y);
		glVertex2f(left_x, bottom_y);

		glVertex2f(left_x, bottom_y);
		glVertex2f(left_x, top_y);
	glEnd();
}

void display(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0f, 0.0f, 0.0f);
	draw_h(10.0f, 220.0f);
	draw_e(70.0f, 220.0f);
	draw_l(130.0f, 220.0f);
	draw_l(190.0f, 220.0f);
	draw_o(250.0f, 220.0f);

	glColor3f(1.0f, 1.0f, 0.0f);
	draw_w(10.0f, 110.0f);
	draw_o(70.0f, 110.0f);
	draw_r(130.0f, 110.0f);
	draw_l(190.0f, 110.0f);
	draw_d(250.0f, 110.0f);
	glFlush();
};

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(WIDTH, HEIGHT);
	glutInitWindowPosition(120, 120);
	glutCreateWindow(argv[0]);
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}