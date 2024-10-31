// Filename: CSocialScience.cpp
// Description: See header file for structural information
// Author: Abigail Iliff
// Date Modified: 10/28/2022

#include "CSocialScience.h"

CSocialScience::CSocialScience(void)
{
    #ifdef _DEBUG
    cout << "SocialScience class created!" << endl;
    #endif
}

CSocialScience::~CSocialScience(void)
{
    #ifdef _DEBUG
    cout << "SocialScience class destroyed!" << endl;
    #endif
}

bool CSocialScience::requirementComplete()
{
    cout << "Social Science requirement complete with " << courseName << "!" << endl;
    return true;
}