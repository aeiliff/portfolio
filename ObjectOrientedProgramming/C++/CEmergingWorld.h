// Filename: CEmergingWorld.h
// Description: An abstract class to encapsulate CEmergingWorld properties 
// Author: Abigail Iliff
// Date Modified: 10/28/2022

#include "CHistory.h"

#pragma once
#if !defined(_CEmergingWorld_H_)
#define _CEmergingWorld_H_

class CEmergingWorld : public CHistory
{
public:
    // Default constructor
    CEmergingWorld(void);
    // Default destructor
    ~CEmergingWorld(void);
public:
    // To determine if a core requirement has been completed 
    bool requirementComplete();
private:
    string courseName = "Global History II";
};
#endif // _CEmergingWorld_H_