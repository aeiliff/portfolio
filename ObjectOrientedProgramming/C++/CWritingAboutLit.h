// Filename: CWritingAboutLit.h
// Description: An abstract class to encapsulate CWritingAboutLit properties 
// Author: Abigail Iliff
// Date Modified: 10/28/2022

#include "CKnowledgeAndValue.h"

#pragma once
#if !defined(_CWritingAboutLit_H_)
#define _CWritingAboutLit_H_

class CWritingAboutLit : public CKnowledgeAndValue
{
public:
    // Default constructor
    CWritingAboutLit(void);
    // Default destructor
    ~CWritingAboutLit(void);
public:
    // To determine if a core requirement has been completed 
    bool requirementComplete();
private:
    string courseName;
};
#endif // _CWritingAboutLit_H_