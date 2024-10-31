// Filename: GLUtilities.h
// Description: Custom utilities for openGL
// Author: Abigail Iliff
// Date Modified: 11/17/2022

#include <iostream>
using namespace std;
// Used to run program on various computer types
#if defined__APPLE__          
    #include <GLUT/glut.h>
#elif defined _WIN32 || defined _WIN64
    #include <GL/glut.h>
#elif __linux__
    #include <GL/freeglut.h>
#endif

// Function prototypes
void drawScene();
void drawParapets();
void drawScene();
