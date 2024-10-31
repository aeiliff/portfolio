// Filename: CCreativeArt.h
// Description: An abstract class to encapsulate CCreativeArt properties 
// Author: Abigail Iliff
// Date Modified: 10/28/2022

#include "CKnowledgeAndValue.h"

#pragma once
#if !defined(_CCreativeArt_H_)
#define _CCreativeArt_H_

class CCreativeArt : public CKnowledgeAndValue
{
public:
    // Default constructor
    CCreativeArt(void);
    // Default destructor
    ~CCreativeArt(void);
public:
    // To determine if a core requirement has been completed 
    bool requirementComplete();
private:
    string courseName = "Youth Latin America/Spanish Film";
};
#endif // _CCreativeArt_H_