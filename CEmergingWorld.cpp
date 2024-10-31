// Filename: CEmergingWorld.cpp
// Description: See header file for structural information
// Author: Abigail Iliff
// Date Modified: 10/28/2022

#include "CEmergingWorld.h"

CEmergingWorld::CEmergingWorld(void)
{
    #ifdef _DEBUG
    cout << "EmergingWorld class created!" << endl;
    #endif
}

CEmergingWorld::~CEmergingWorld(void)
{
    #ifdef _DEBUG
    cout << "EmergingWorld class destroyed!" << endl;
    #endif
}

bool CEmergingWorld::requirementComplete()
{
    cout << "Emerging World requirement complete with " << courseName << "!" << endl;
    return true;
}