// Filename: CHuman.java
// Description: Class to encapsulate the properties of a Human
// Author: Abigail Iliff
// Date Modified: 12/14/2022

public class CHuman extends CAlliance {
    // Constructors
    public CHuman() {
        System.out.println("Human created");
    }

    public void abilities() {
        ability[0] = "Warrior";
        ability[1] = "Paladin";
        ability[2] = "Rogue";
        ability[3] = "Priest";
        ability[4] = "DeathKnight";
        ability[5] = "Mage";
        ability[6] = "Warlock";

        System.out.println("Human abilities: ");
        for (int i = 0; i < 7; i++) {
            System.out.println(ability[i]);
        }
    }
}