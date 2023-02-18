#include "Cola.h"
#define ANGULO 20

Cola::Cola(){}

void Cola::DibujarCola(int n, float x, float y, float z) {
	glPushMatrix();
		glTranslatef(x, y, z);
		
		// Aqui usamos codigo de http://www.glprogramming.com/red/chapter03.html
		glPushMatrix();
		glTranslatef(-0.08, 0.0, 0.0);
		glRotatef(ANGULO, 0.0, 0.0, 1.0);
		glTranslatef(0.08, 0.0, 0.0);
		glPushMatrix();
		glScalef(0.2, 0.15, 0.15);
		glutSolidCube(1.0);
		glPopMatrix();

		for (int i = 0; i < n; i++) {

			if (i + 1 == n) {
				glTranslatef(0.08, 0.0, 0.0);
				//glRotatef(ANGULO, 0.0, 0.0, 0.0);
				//glTranslatef(0.08, 0.0, 0.0);
				glPushMatrix();
					glScalef(0.2, 0.15, 0.15);
					glBegin(GL_TRIANGLES);
						glVertex3f(0, -0.6, 0);
						glVertex3f(1, 0, 0);
						glVertex3f(0, 0.6, 0);
					glEnd();
				glPopMatrix();
			}
			else {
				glTranslatef(0.08, 0.0, 0.0);
				glRotatef(ANGULO, 0.0, 0.0, 1.0);
				glTranslatef(0.08, 0.0, 0.0);
				glPushMatrix();
					glScalef(0.2, 0.15, 0.15);
					glutSolidCube(1.0);
				glPopMatrix();
			}
		}
		glPopMatrix();

	glPopMatrix();
}
