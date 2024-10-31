// Filename: CDwarf.java
// Description: Class to encapsulate the properties of a Dwarf
// Author: Abigail Iliff
// Date Modified: 12/14/2022

public class CDwarf extends CAlliance {
    // Constructors
    public CDwarf() {
        System.out.println("Dwarf created");
    }

    public void abilities() {
        ability[0] = "Warrior";
        ability[1] = "Paladin";
        ability[2] = "Hunter";
        ability[3] = "Rogue";
        ability[4] = "Priest";
        ability[5] = "DeathKnight";

        System.out.println("Dwarf abilities: ");
        for (int i = 0; i < 6; i++) {
            System.out.println(ability[i]);
        }
    }
}