// Filename: CFirstYearSeminar.h
// Description: An abstract class to encapsulate CFirstYearSeminar properties 
// Author: Abigail Iliff
// Date Modified: 10/28/2022

#include "CFoundation.h"

#pragma once
#if !defined(_CFirstYearSeminar_H_)
#define _CFirstYearSeminar_H_

class CFirstYearSeminar : public CFoundation
{
public:
    // Default constructor
    CFirstYearSeminar(void);
    // Default destructor
    ~CFirstYearSeminar(void);
public:
    // To determine if a core requirement has been completed 
    bool requirementComplete();
private:
    string courseName = "Liberal Education As Basis of Culture";
};
#endif // _CFirstYearSeminar_H_