// Filename: Iliff_LoynoCoreCourse
// Description: Main entry point to the LoynoCoreCourse classes
// Author: Abigail Iliff
// Date Modified: 10/28/2022

#include "CWorldReligion.h"
#include "CChristianTradition.h"
#include "CKnowledgeAndMorality.h"
#include "CPhilReasoning.h"
#include "CModernHistory.h"
#include "CEmergingWorld.h"
#include "CScienceInContext.h"
#include "CWritingAboutLit.h"
#include "CCreativeArt.h"
#include "CSocialScience.h"
#include "CScienceFoundation.h"
#include "CMathFoundation.h"
#include "CFirstYearSeminar.h"
#include "CEnglishComp.h"
int main()
{
    cout << "Welcome to LoynoCoreCourse CPP!!!!" << endl;
    CLoynoCoreCourse *courses[14];

    courses[0] = new CScienceFoundation();
    ((CScienceFoundation*)courses[0])->requirementComplete();
    courses[1] = new CMathFoundation();
    ((CMathFoundation*)courses[1])->requirementComplete();
    courses[2] = new CFirstYearSeminar();
    ((CFirstYearSeminar*)courses[2])->requirementComplete();
    courses[3] = new CEnglishComp();
    ((CEnglishComp*)courses[3])->requirementComplete();
    courses[4] = new CChristianTradition();
    ((CChristianTradition*)courses[4])->requirementComplete();
    courses[5] = new CWorldReligion();
    ((CWorldReligion*)courses[5])->requirementComplete();
    courses[6] = new CPhilReasoning();
    ((CPhilReasoning*)courses[6])->requirementComplete();
    courses[7] = new CKnowledgeAndMorality();
    ((CKnowledgeAndMorality*)courses[7])->requirementComplete();
    courses[8] = new CEmergingWorld();
    ((CEmergingWorld*)courses[8])->requirementComplete();
    courses[9] = new CModernHistory();
    ((CModernHistory*)courses[9])->requirementComplete();
    courses[10] = new CScienceInContext();
    ((CScienceInContext*)courses[10])->requirementComplete();
    courses[11] = new CWritingAboutLit();
    ((CWritingAboutLit*)courses[11])->requirementComplete();
    courses[12] = new CCreativeArt();
    ((CCreativeArt*)courses[12])->requirementComplete();
    courses[13] = new CSocialScience();
    ((CSocialScience*)courses[13])->requirementComplete();

    cout << "Still running LoynoCoreCourse CPP!!!" << endl;
    return 0;
}