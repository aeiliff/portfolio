// Filename: CLoynoCoreCourse.h
// Description: An abstract class to encapsulate the LoynoCoreCourse properties
// Author: Abigail Iliff
// Date Modified: 10/28/2022

#include "LoynoCoreCourseGlobals.h"
#pragma once
#if !defined(_CLoynoCoreCourse_H_)
#define _CLoynoCoreCourse_H_

class CLoynoCoreCourse
{
public:
    // Default constructor
    CLoynoCoreCourse(void);
    // Default destructor
    ~CLoynoCoreCourse(void);
public:
    // To determine if a core requirement has been completed 
    virtual bool requirementComplete() = 0;
protected:
};
#endif // _CLoynoCoreCourse_H_