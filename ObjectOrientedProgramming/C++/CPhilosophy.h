// Filename: CPhilosophy.h
// Description: An abstract class to encapsulate CPhilosophy properties 
// Author: Abigail Iliff
// Date Modified: 10/28/2022

#include "CKnowledgeAndValue.h"

#pragma once
#if !defined(_CPhilosophy_H_)
#define _CPhilosophy_H_

class CPhilosophy : public CKnowledgeAndValue
{
public:
    // Default constructor
    CPhilosophy(void);
    // Default destructor
    ~CPhilosophy(void);
protected:
};
#endif // _CPhilosophy_H_