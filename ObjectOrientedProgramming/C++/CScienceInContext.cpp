// Filename: CScienceInContext.cpp
// Description: See header file for structural information
// Author: Abigail Iliff
// Date Modified: 10/28/2022

#include "CScienceInContext.h"

CScienceInContext::CScienceInContext(void)
{
    #ifdef _DEBUG
    cout << "ScienceInContext class created!" << endl;
    #endif
}

CScienceInContext::~CScienceInContext(void)
{
    #ifdef _DEBUG
    cout << "ScienceInContext class destroyed!" << endl;
    #endif
}

bool CScienceInContext::requirementComplete()
{
    cout << "Science In Context requirement not required!" << endl;
    return true;
}