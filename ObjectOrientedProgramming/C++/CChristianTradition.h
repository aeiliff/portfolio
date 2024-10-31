// Filename: CChristianTradition.h
// Description: An abstract class to encapsulate CChristianTradition properties 
// Author: Abigail Iliff
// Date Modified: 10/28/2022

#include "CReligion.h"

#pragma once
#if !defined(_CChristianTradition_H_)
#define _CChristianTradition_H_

class CChristianTradition : public CReligion
{
public:
    // Default constructor
    CChristianTradition(void);
    // Default destructor
    ~CChristianTradition(void);
public:
    // To determine if a core requirement has been completed 
    bool requirementComplete();
private:
    string courseName = "Heresies and Heretics";
};
#endif // _CChristianTradition_H_