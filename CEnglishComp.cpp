// Filename: CEnglishComp.cpp
// Description: See header file for structural information
// Author: Abigail Iliff
// Date Modified: 10/28/2022

#include "CEnglishComp.h"

CEnglishComp::CEnglishComp(void)
{
    #ifdef _DEBUG
    cout << "EnglishComp class created!" << endl;
    #endif
}

CEnglishComp::~CEnglishComp(void)
{
    #ifdef _DEBUG
    cout << "EnglishComp class destroyed!" << endl;
    #endif
}

bool CEnglishComp::requirementComplete()
{
    cout << "English Composition requirement complete with " << courseName << "!" << endl;
    return true;
}