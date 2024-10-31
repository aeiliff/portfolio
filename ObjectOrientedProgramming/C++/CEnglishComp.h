// Filename: CEnglishComp.h
// Description: An abstract class to encapsulate CEnglishComp properties 
// Author: Abigail Iliff
// Date Modified: 10/28/2022

#include "CFoundation.h"

#pragma once
#if !defined(_CEnglishComp_H_)
#define _CEnglishComp_H_

class CEnglishComp : public CFoundation
{
public:
    // Default constructor
    CEnglishComp(void);
    // Default destructor
    ~CEnglishComp(void);
public:
    // To determine if a core requirement has been completed 
    bool requirementComplete();
private:
    string courseName = "Critical Reading/Writing";
};
#endif // _CEnglishComp_H_