// Filename: CPhilReasoning.cpp
// Description: See header file for structural information
// Author: Abigail Iliff
// Date Modified: 10/28/2022

#include "CPhilReasoning.h"

CPhilReasoning::CPhilReasoning(void)
{
    #ifdef _DEBUG
    cout << "PhilReasoning class created!" << endl;
    #endif
}

CPhilReasoning::~CPhilReasoning(void)
{
    #ifdef _DEBUG
    cout << "PhilReasoning class destroyed!" << endl;
    #endif
}

bool CPhilReasoning::requirementComplete()
{
    cout << "Philosophical Reasoning requirement complete with " << courseName << "!" << endl;
    return true;
}