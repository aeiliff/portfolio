// Filename: CModernHistory.h
// Description: An abstract class to encapsulate CModernHistory properties 
// Author: Abigail Iliff
// Date Modified: 10/28/2022

#include "CHistory.h"

#pragma once
#if !defined(_CModernHistory_H_)
#define _CModernHistory_H_

class CModernHistory : public CHistory
{
public:
    // Default constructor
    CModernHistory(void);
    // Default destructor
    ~CModernHistory(void);
public:
    // To determine if a core requirement has been completed 
    bool requirementComplete();
private:
    string courseName = "Ideologies and Economies";
};
#endif // _CModernHistory_H_