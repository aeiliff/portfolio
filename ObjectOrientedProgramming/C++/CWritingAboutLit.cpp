// Filename: CWritingAboutLit.cpp
// Description: See header file for structural information
// Author: Abigail Iliff
// Date Modified: 10/28/2022

#include "CWritingAboutLit.h"

CWritingAboutLit::CWritingAboutLit(void)
{
    #ifdef _DEBUG
    cout << "WritingAboutLit class created!" << endl;
    #endif
}

CWritingAboutLit::~CWritingAboutLit(void)
{
    #ifdef _DEBUG
    cout << "WritingAboutLit class destroyed!" << endl;
    #endif
}

bool CWritingAboutLit::requirementComplete()
{
    cout << "Writing About Literature requirement incomplete!" << endl;
    return false;
}