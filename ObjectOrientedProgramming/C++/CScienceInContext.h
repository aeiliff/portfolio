// Filename: CScienceInContext.h
// Description: An abstract class to encapsulate CScienceInContext properties 
// Author: Abigail Iliff
// Date Modified: 10/28/2022

#include "CKnowledgeAndValue.h"

#pragma once
#if !defined(_CScienceInContext_H_)
#define _CScienceInContext_H_

class CScienceInContext : public CKnowledgeAndValue
{
public:
    // Default constructor
    CScienceInContext(void);
    // Default destructor
    ~CScienceInContext(void);
public:
    // To determine if a core requirement has been completed 
    bool requirementComplete();
private:
};
#endif // _CScienceInContext_H_