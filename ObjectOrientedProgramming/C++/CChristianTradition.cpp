// Filename: CChristianTradition.cpp
// Description: See header file for structural information
// Author: Abigail Iliff
// Date Modified: 10/28/2022

#include "CChristianTradition.h"

CChristianTradition::CChristianTradition(void)
{
    #ifdef _DEBUG
    cout << "ChristianTradition class created!" << endl;
    #endif
}

CChristianTradition::~CChristianTradition(void)
{
    #ifdef _DEBUG
    cout << "ChristianTradition class destroyed!" << endl;
    #endif
}

bool CChristianTradition::requirementComplete()
{
    cout << "Christian Tradition requirement complete with " << courseName << "!" << endl;
    return true;
}