// Filename: GLUtilities.cpp
// Description: See header file
// Author: Abigail Iliff
// Date Modified: 11/17/2022

#include "GLUtilities.h"

GLfloat groundSize = 1000.0f;
GLfloat groundHeight = -15.0f;

void drawCastle()
{
    glPushMatrix();
    glColor3f(0.160, 0.160, 0.160);
    glTranslatef(11.0f, groundHeight + 1.0f, 50.0f);
    glScalef(2.0f, 2.0f, 6.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.128, 0.128, 0.128);
    glTranslatef(8.5f, groundHeight + 1.0f, 50.0f);
    glScalef(3.0f, 2.0f, 6.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.128, 0.128, 0.128);
    glTranslatef(10.5f, groundHeight + 3.0f, 50.0f);
    glScalef(3.0f, 2.0f, 6.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.160, 0.160, 0.160);
    glTranslatef(8.0f, groundHeight + 3.0f, 50.0f);
    glScalef(2.0f, 2.0f, 6.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.16, 0.16, 0.16);
    glTranslatef(9.5f, groundHeight + 5.0f, 50.0f);
    glScalef(5.0f, 2.0f, 6.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.160, 0.160, 0.160);
    glTranslatef(11.0f, groundHeight + 7.0f, 50.0f);
    glScalef(2.0f, 2.0f, 6.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.128, 0.128, 0.128);
    glTranslatef(8.5f, groundHeight + 7.0f, 50.0f);
    glScalef(3.0f, 2.0f, 6.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.128, 0.128, 0.128);
    glTranslatef(10.5f, groundHeight + 9.0f, 50.0f);
    glScalef(3.0f, 2.0f, 6.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.160, 0.160, 0.160);
    glTranslatef(8.0f, groundHeight + 9.0f, 50.0f);
    glScalef(2.0f, 2.0f, 6.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.16, 0.16, 0.16);
    glTranslatef(9.5f, groundHeight + 11.0f, 50.0f);
    glScalef(5.0f, 2.0f, 6.0f);
    glutSolidCube(1.0f);
    glPopMatrix();
}

void drawParapets() 
{
    glPushMatrix();
    glColor3f(0.16, 0.16, 0.16);
    glTranslatef(14.5f, groundHeight + 24.5f, 49.0f);
    glScalef(5.0f, 1.0f, 6.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.16, 0.16, 0.16);
    glTranslatef(16.5f, groundHeight + 25.5f, 46.5f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.16, 0.16, 0.16);
    glTranslatef(14.5f, groundHeight + 25.5f, 46.5f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.16, 0.16, 0.16);
    glTranslatef(12.5f, groundHeight + 25.5f, 46.5f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.16, 0.16, 0.16);
    glTranslatef(16.5f, groundHeight + 25.5f, 51.5f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.16, 0.16, 0.16);
    glTranslatef(14.5f, groundHeight + 25.5f, 51.5f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.16, 0.16, 0.16);
    glTranslatef(12.5f, groundHeight + 25.5f, 51.5f);
    glutSolidCube(1.0f);
    glPopMatrix();
}

void drawScene() {
    // Draw Ground
    glPushMatrix();
    glColor3f(0.0, 0.051, 0.0);
    glTranslatef(0.0f, groundHeight, 0.0f);
    glScalef(groundSize, 0.1f, groundSize);
    glutSolidCube(1.0f);
    glPopMatrix();

    // Draw Sky
    glPushMatrix();
    glColor3f(0.0, 0.128, 0.255);
    glTranslatef(0.0f, 0.0f, 1000.0f);
    glScalef(groundSize, groundSize, -groundSize - 50.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    // Floor
    glPushMatrix();
    glColor3f(0.128f, 0.128f, 0.128f);
    glTranslatef(1.0f, groundHeight, 85.0f);
    glScalef(22.0f, 0.5f, 65.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    // Ceiling 


    // Road
    glPushMatrix();
    glColor3f(0.139f, 0.069f, 0.019f);
    glTranslatef(1.0f, groundHeight, -199.0f);
    glScalef(11.0f, 0.5f, 500.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    // Wagon
    glPushMatrix();
    glColor3f(0.205f, 0.133f, 0.063f);
    glTranslatef(-15.0f, groundHeight + 4.0f, 40.0f);
    glRotatef(330.0f, 0.0f, 0.0f, 1.0f);
    glScalef(10.0f, 1.0f, 5.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.139f, 0.069f, 0.019f);
    glTranslatef(-17.5f, groundHeight + 3.0f, 42.5f);
    glScalef(1.0f, 1.0f, 0.0f);
    glutSolidSphere(2.5f, 15, 10);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.139f, 0.069f, 0.019f);
    glTranslatef(-17.5f, groundHeight + 3.0f, 37.25f);
    glScalef(1.0f, 1.0f, 0.0f);
    glutSolidSphere(2.5f, 15, 10);
    glPopMatrix();

    // Tree
    glPushMatrix();
    glColor3f(0.139f, 0.069f, 0.019f);
    glTranslatef(15.0f, groundHeight + 0.5f, 40.0f);
    glScalef(1.0f, 10.0f, 1.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.085f, 0.107f, 0.047);
    glTranslatef(15.0f, groundHeight + 5.5f, 39.0f);
    glutSolidCube(2.0f);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.085f, 0.107f, 0.047);
    glTranslatef(15.0f, groundHeight + 5.5f, 41.0f);
    glutSolidCube(2.0f);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.085f, 0.107f, 0.047);
    glTranslatef(14.0f, groundHeight + 5.5f, 41.0f);
    glutSolidCube(2.0f);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.085f, 0.107f, 0.047);
    glTranslatef(14.0f, groundHeight + 5.5f, 41.0f);
    glutSolidCube(2.0f);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.085f, 0.107f, 0.047);
    glTranslatef(16.0f, groundHeight + 5.5f, 40.0f);
    glutSolidCube(2.0f);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.085f, 0.107f, 0.047f);
    glTranslatef(15.0f, groundHeight + 7.5f, 40.0f);
    glutSolidCube(2.0f);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.255f, 0.0f, 0.0f);
    glTranslatef(15.0f, groundHeight + 7.5f, 39.0f);
    glutSolidSphere(0.5f, 10, 5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.255f, 0.0f, 0.0f);
    glTranslatef(14.0f, groundHeight + 7.5f, 41.0f);
    glutSolidSphere(0.5f, 10, 5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.255f, 0.0f, 0.0f);
    glTranslatef(15.0f, groundHeight + 5.5f, 38.0f);
    glutSolidSphere(0.5f, 10, 5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.255f, 0.0f, 0.0f);
    glTranslatef(13.0f, groundHeight + 5.5f, 40.0f);
    glutSolidSphere(0.5f, 10, 5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.255f, 0.0f, 0.0f);
    glTranslatef(17.0f, groundHeight + 5.5f, 40.0f);
    glutSolidSphere(0.5f, 10, 5);
    glPopMatrix();

    // Torches
    glPushMatrix();
    glColor3f(0.0f, 0.0f, 0.0f);
    glTranslatef(8.0f, -5.0f, 47.0f);
    glRotatef(-20.0f, 1.0f, 0.0f, 0.0f);
    glScalef(0.25f, 4.0f, 0.10f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.255f, 0.069f, 0.0);
    glTranslatef(8.0f, -3.25f, 46.25f);
    glScalef(0.5f, 0.75f, 0.25f);
    glutSolidTetrahedron();
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0f, 0.0f, 0.0f);
    glTranslatef(-6.0f, -5.0f, 47.0f);
    glRotatef(-20.0f, 1.0f, 0.0f, 0.0f);
    glScalef(0.25f, 4.0f, 0.10f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.255f, 0.069f, 0.0);
    glTranslatef(-6.0f, -3.25f, 46.25f);
    glScalef(0.5f, 0.75f, 0.25f);
    glutSolidTetrahedron();
    glPopMatrix();

    // Draw Parapets 
    glPushMatrix();
    drawParapets();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-27.0f, 0.0f, 0.0f);
    drawParapets();
    glPopMatrix();

    glPushMatrix();;
    glTranslatef(-21.0f, -7.0f, 1.0f);
    drawParapets();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-16.0f, -7.0f, 1.0f);
    drawParapets();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-11.0f, -7.0f, 1.0f);
    drawParapets();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-6.0f, -7.0f, 1.0f);
    drawParapets();
    glPopMatrix();

    // Left Front
    glPushMatrix();
    drawCastle();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-3.0f, -10.0f, 0.0f);
    glRotatef(90.0f, 0.0f, 0.0f, 1.0f);
    drawCastle();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5.0f, 0.0f, -1.0f);
    drawCastle();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5.0f, 12.0f, -1.0f);
    drawCastle();
    glPopMatrix();

    // Left Side
    glPushMatrix();
    glTranslatef(5.0f, 0.0f, 5.0f);
    drawCastle();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5.0f, 0.0f, 10.0f);
    drawCastle();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5.0f, 0.0f, 15.0f);
    drawCastle();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5.0f, 0.0f, 20.0f);
    drawCastle();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5.0f, 0.0f, 25.0f);
    drawCastle();
    glPopMatrix();

    // Right Front 
    glPushMatrix();
    glTranslatef(-17.0f, 0.0f, 0.0f);
    drawCastle();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(3.0f, 9.0f, 0.0f);
    glRotatef(-90.0f, 0.0f, 0.0f, 1.0f);
    drawCastle();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-22.0f, 0.0f, -1.0f);
    drawCastle();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-22.0f, 12.0f, -1.0f);
    drawCastle();
    glPopMatrix();

    // Right Side
    glPushMatrix();
    glTranslatef(-22.0f, 0.0f, 5.0f);
    drawCastle();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-22.0f, 0.0f, 10.0f);
    drawCastle();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-22.0f, 0.0f, 15.0f);
    drawCastle();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-22.0f, 0.0f, 20.0f);
    drawCastle();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-22.0f, 0.0f, 25.0f);
    drawCastle();
    glPopMatrix();

    // Back
    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 30.0f);
    drawCastle();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5.0f, 0.0f, 30.0f);
    drawCastle();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-17.0f, 0.0f, 30.0f);
    drawCastle();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-22.0f, 0.0f, 30.0f);
    drawCastle();
    glPopMatrix();

    // Draw Back of Castle
    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 35.0f);
    drawCastle();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 40.0f);
    drawCastle();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 45.0f);
    drawCastle();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 50.0f);
    drawCastle();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 55.0f);
    drawCastle();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 60.0f);
    drawCastle();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-17.0f, 0.0f, 35.0f);
    drawCastle();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-17.0f, 0.0f, 40.0f);
    drawCastle();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-17.0f, 0.0f, 45.0f);
    drawCastle();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-17.0f, 0.0f, 50.0f);
    drawCastle();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-17.0f, 0.0f, 55.0f);
    drawCastle();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-17.0f, 0.0f, 60.0f);
    drawCastle();
    glPopMatrix();

    // Back courtyard 
}

