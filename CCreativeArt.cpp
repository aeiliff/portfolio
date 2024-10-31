// Filename: CCreativeArt.cpp
// Description: See header file for structural information
// Author: Abigail Iliff
// Date Modified: 10/28/2022

#include "CCreativeArt.h"

CCreativeArt::CCreativeArt(void)
{
    #ifdef _DEBUG
    cout << "CreativeArt class created!" << endl;
    #endif
}

CCreativeArt::~CCreativeArt(void)
{
    #ifdef _DEBUG
    cout << "CreativeArt class destroyed!" << endl;
    #endif
}

bool CCreativeArt::requirementComplete()
{
    cout << "Creative Arts and Cultures requirement complete with " << courseName << "!" << endl;
    return true;
}