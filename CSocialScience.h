// Filename: CSocialScience.h
// Description: An abstract class to encapsulate CSocialScience properties 
// Author: Abigail Iliff
// Date Modified: 10/28/2022

#include "CKnowledgeAndValue.h"

#pragma once
#if !defined(_CSocialScience_H_)
#define _CSocialScience_H_

class CSocialScience : public CKnowledgeAndValue
{
public:
    // Default constructor
    CSocialScience(void);
    // Default destructor
    ~CSocialScience(void);
public:
    // To determine if a core requirement has been completed 
    bool requirementComplete();
private:
    string courseName = "Race and Mass Incarceration";
};
#endif // _CSocialScience_H_