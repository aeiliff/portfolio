// Filename: CBloodElf.java
// Description: Class to encapsulate the properties of a Blood Elf
// Author: Abigail Iliff
// Date Modified: 12/14/2022

public class CBloodElf extends CHorde {
    // Constructors
    public CBloodElf() {
        System.out.println("Blood Elf created");
    }
    
    public void abilities() {
        ability[0] = "Paladin";
        ability[1] = "Hunter";
        ability[2] = "Rogue";
        ability[3] = "Priest";
        ability[4] = "DeathKnight";
        ability[5] = "Mage";
        ability[6] = "Warlock";

        System.out.println("Blood Elf abilities: ");
        for (int i = 0; i < 7; i++) {
            System.out.println(ability[i]);
        }
    }
}