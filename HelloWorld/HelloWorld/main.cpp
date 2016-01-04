#include <iostream>
#include <string>
#include "GL\glew.h"
#include "GL\freeglut.h"

using namespace std;

void display() {};

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(300, 300);
	glutInitWindowPosition(500, 500);
	glutCreateWindow("Hello World");
	glutDisplayFunc(display);
	glutMainLoop();
	cout << "Hello World" << endl;
	cout << "Enter to exit..." << endl;
	string crap;
	getline(cin, crap);
	return 0;
}