// Filename: Iliff_WowCharacter.java
// Description: Main access point to all of the classes
// Author: Abigail Iliff
// Date Modified: 12/05/2022

public class Iliff_WowCharacter {
    public static void main(String args[]) {
        CDraenei myCharacter1 = new CDraenei();
        myCharacter1.abilities();
        CDwarf myCharacter2 = new CDwarf();
        myCharacter2.abilities();
        CGnome myCharacter3 = new CGnome();
        myCharacter3.abilities();
        CHuman myCharacter4 = new CHuman();
        myCharacter4.abilities();
        CNightElf myCharacter5 = new CNightElf();
        myCharacter5.abilities();
        CBloodElf myCharacter6 = new CBloodElf();
        myCharacter6.abilities();
        COrc myCharacter7 = new COrc();
        myCharacter7.abilities();
        CTauren myCharacter8 = new CTauren();
        myCharacter8.abilities();
        CTroll myCharacter9 = new CTroll();
        myCharacter9.abilities();
        CUndead myCharacter10 = new CUndead();
        myCharacter10.abilities();
    }
}