// Filename: CHistory.h
// Description: An abstract class to encapsulate CHistory properties 
// Author: Abigail Iliff
// Date Modified: 10/28/2022

#include "CKnowledgeAndValue.h"

#pragma once
#if !defined(_CHistory_H_)
#define _CHistory_H_

class CHistory : public CKnowledgeAndValue
{
public:
    // Default constructor
    CHistory(void);
    // Default destructor
    ~CHistory(void);
protected:
};
#endif // _CHistory_H_