// Filename: CKnowledgeAndMorality.cpp
// Description: See header file for structural information
// Author: Abigail Iliff
// Date Modified: 10/28/2022

#include "CKnowledgeAndMorality.h"

CKnowledgeAndMorality::CKnowledgeAndMorality(void)
{
    #ifdef _DEBUG
    cout << "KnowledgeAndMorality class created!" << endl;
    #endif
}

CKnowledgeAndMorality::~CKnowledgeAndMorality(void)
{
    #ifdef _DEBUG
    cout << "KnowledgeAndMorality class destroyed!" << endl;
    #endif
}

bool CKnowledgeAndMorality::requirementComplete()
{
    cout << "Knowledge And Morality requirement in progress with " << courseName << "!" << endl;
    return false;
}