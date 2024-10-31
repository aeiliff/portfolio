// Filename: CReligion.h
// Description: An abstract class to encapsulate CReligion properties 
// Author: Abigail Iliff
// Date Modified: 10/28/2022

#include "CKnowledgeAndValue.h"

#pragma once
#if !defined(_CReligion_H_)
#define _CReligion_H_

class CReligion : public CKnowledgeAndValue
{
public:
    // Default constructor
    CReligion(void);
    // Default destructor
    ~CReligion(void);
protected:
};
#endif // _CReligion_H_