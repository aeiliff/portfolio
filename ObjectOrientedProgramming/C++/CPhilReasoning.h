// Filename: CPhilReasoning.h
// Description: An abstract class to encapsulate CPhilReasoning properties 
// Author: Abigail Iliff
// Date Modified: 10/28/2022

#include "CPhilosophy.h"

#pragma once
#if !defined(_CPhilReasoning_H_)
#define _CPhilReasoning_H_

class CPhilReasoning : public CPhilosophy
{
public:
    // Default constructor
    CPhilReasoning(void);
    // Default destructor
    ~CPhilReasoning(void);
public:
    // To determine if a core requirement has been completed 
    bool requirementComplete();
private:
    string courseName = "Philosophy of the Human Person";
};
#endif // _CPhilReasoning_H_