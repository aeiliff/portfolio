// Filename: CWorldReligion.h
// Description: An abstract class to encapsulate CWorldReligion properties 
// Author: Abigail Iliff
// Date Modified: 10/28/2022

#include "CReligion.h"

#pragma once
#if !defined(_CWorldReligion_H_)
#define _CWorldReligion_H_

class CWorldReligion : public CReligion
{
public:
    // Default constructor
    CWorldReligion(void);
    // Default destructor
    ~CWorldReligion(void);
public:
    // To determine if a core requirement has been completed 
    bool requirementComplete();
private:
    string courseName = "Women in World Religions";
};
#endif // _CWorldReligion_H_