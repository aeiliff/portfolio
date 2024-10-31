// Filename: CTroll.java
// Description: Class to encapsulate the properties of a Troll
// Author: Abigail Iliff
// Date Modified: 12/14/2022

public class CTroll extends CHorde {
    // Constructors
    public CTroll() {
        System.out.println("Troll created");
    }

    public void abilities() {
        ability[0] = "Warrior";
        ability[1] = "Hunter";
        ability[2] = "Rogue";
        ability[3] = "Priest";
        ability[4] = "DeathKnight";
        ability[5] = "Shaman";
        ability[6] = "Mage";

        System.out.println("Troll abilities: ");
        for (int i = 0; i < 7; i++) {
            System.out.println(ability[i]);
        }
    }
}