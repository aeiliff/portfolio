// Filename: CScienceFoundation.h
// Description: An abstract class to encapsulate CScienceFoundation properties 
// Author: Abigail Iliff
// Date Modified: 10/28/2022

#include "CFoundation.h"

#pragma once
#if !defined(_CScienceFoundation_H_)
#define _CScienceFoundation_H_

class CScienceFoundation : public CFoundation
{
public:
    // Default constructor
    CScienceFoundation(void);
    // Default destructor
    ~CScienceFoundation(void);
public:
    // To determine if a core requirement has been completed 
    bool requirementComplete();
private:
    string courseName = "Investigating Nature";
};
#endif // _CScienceFoundation_H_