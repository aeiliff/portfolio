// Filename: CUndead.java
// Description: Class to encapsulate the properties of an Undead
// Author: Abigail Iliff
// Date Modified: 12/14/2022

public class CUndead extends CHorde {
    // Constructors
    public CUndead() {
        System.out.println("Undead created");
    }

    public void abilities() {
        ability[0] = "Warrior";
        ability[1] = "Rogue";
        ability[2] = "Priest";
        ability[3] = "DeathKnight";
        ability[4] = "Mage";
        ability[5] = "Warlock";

        System.out.println("Undead abilities: ");
        for (int i = 0; i < 6; i++) {
            System.out.println(ability[i]);
        }
    }
}