// Filename: CKnowledgeAndMorality.h
// Description: An abstract class to encapsulate CKnowledgeAndMorality properties 
// Author: Abigail Iliff
// Date Modified: 10/28/2022

#include "CPhilosophy.h"

#pragma once
#if !defined(_CKnowledgeAndMorality_H_)
#define _CKnowledgeAndMorality_H_

class CKnowledgeAndMorality : public CPhilosophy
{
public:
    // Default constructor
    CKnowledgeAndMorality(void);
    // Default destructor
    ~CKnowledgeAndMorality(void);
public:
    // To determine if a core requirement has been completed 
    bool requirementComplete();
private:
    string courseName = "Aesthetics";
};
#endif // _CKnowledgeAndMorality_H_