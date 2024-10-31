// Filename: CMathFoundation.cpp
// Description: See header file for structural information
// Author: Abigail Iliff
// Date Modified: 10/28/2022

#include "CMathFoundation.h"

CMathFoundation::CMathFoundation(void)
{
    #ifdef _DEBUG
    cout << "MathFoundation class created!" << endl;
    #endif
}

CMathFoundation::~CMathFoundation(void)
{
    #ifdef _DEBUG
    cout << "MathFoundation class destroyed!" << endl;
    #endif
}

bool CMathFoundation::requirementComplete()
{
    cout << "Math Foundation requirement complete with " << courseName << "!" << endl;
    return true;
}