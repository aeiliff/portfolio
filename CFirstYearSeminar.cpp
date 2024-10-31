// Filename: CFirstYearSeminar.cpp
// Description: See header file for structural information
// Author: Abigail Iliff
// Date Modified: 10/28/2022

#include "CFirstYearSeminar.h"

CFirstYearSeminar::CFirstYearSeminar(void)
{
    #ifdef _DEBUG
    cout << "FirstYearSeminar class created!" << endl;
    #endif
}

CFirstYearSeminar::~CFirstYearSeminar(void)
{
    #ifdef _DEBUG
    cout << "FirstYearSeminar class destroyed!" << endl;
    #endif
}

bool CFirstYearSeminar::requirementComplete()
{
    cout << "First Year Seminar requirement complete with " << courseName << "!" << endl;
    return true;
}