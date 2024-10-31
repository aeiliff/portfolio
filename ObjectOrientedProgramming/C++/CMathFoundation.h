// Filename: CMathFoundation.h
// Description: An abstract class to encapsulate CMathFoundation properties 
// Author: Abigail Iliff
// Date Modified: 10/28/2022

#include "CFoundation.h"

#pragma once
#if !defined(_CMathFoundation_H_)
#define _CMathFoundation_H_

class CMathFoundation : public CFoundation
{
public:
    // Default constructor
    CMathFoundation(void);
    // Default destructor
    ~CMathFoundation(void);
public:
    // To determine if a core requirement has been completed 
    bool requirementComplete();
private:
    string courseName = "Calculus I";
};
#endif // _CMathFoundation_H_