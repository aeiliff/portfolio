// Filename: CScienceFoundation.cpp
// Description: See header file for structural information
// Author: Abigail Iliff
// Date Modified: 10/28/2022

#include "CScienceFoundation.h"

CScienceFoundation::CScienceFoundation(void)
{
    #ifdef _DEBUG
    cout << "ScienceFoundation class created!" << endl;
    #endif
}

CScienceFoundation::~CScienceFoundation(void)
{
    #ifdef _DEBUG
    cout << "ScienceFoundation class destroyed!" << endl;
    #endif
}

bool CScienceFoundation::requirementComplete()
{
    cout << "Science Foundation requirement complete with " << courseName << "!" << endl;
    return true;
}