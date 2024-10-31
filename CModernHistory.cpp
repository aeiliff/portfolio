// Filename: CModernHistory.cpp
// Description: See header file for structural information
// Author: Abigail Iliff
// Date Modified: 10/28/2022

#include "CModernHistory.h"

CModernHistory::CModernHistory(void)
{
    #ifdef _DEBUG
    cout << "ModernHistory class created!" << endl;
    #endif
}

CModernHistory::~CModernHistory(void)
{
    #ifdef _DEBUG
    cout << "ModernHistory class destroyed!" << endl;
    #endif
}

bool CModernHistory::requirementComplete()
{
    cout << "Modern History requirement in progress with " << courseName << "!" << endl;
    return false;
}