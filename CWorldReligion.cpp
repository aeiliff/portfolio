// Filename: CWorldReligion.cpp
// Description: See header file for structural information
// Author: Abigail Iliff
// Date Modified: 10/28/2022

#include "CWorldReligion.h"

CWorldReligion::CWorldReligion(void)
{
    #ifdef _DEBUG
    cout << "WorldReligion class created!" << endl;
    #endif
}

CWorldReligion::~CWorldReligion(void)
{
    #ifdef _DEBUG
    cout << "WorldReligion class destroyed!" << endl;
    #endif
}

bool CWorldReligion::requirementComplete()
{
    cout << "World Religion requirement in progress with " << courseName << "!" << endl;
    return false;
}