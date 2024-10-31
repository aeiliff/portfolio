// Filename: CGnome.java
// Description: Class to encapsulate the properties of a Gnome
// Author: Abigail Iliff
// Date Modified: 12/14/2022

public class CGnome extends CAlliance {
    // Constructors
    public CGnome() {
        System.out.println("Gnome created");
    }

    public void abilities() {
        ability[0] = "Warrior";
        ability[1] = "Rogue";
        ability[2] = "Warlock";
        ability[3] = "Mage";
        ability[4] = "DeathKnight";

        System.out.println("Gnome abilities: ");
        for (int i = 0; i < 5; i++) {
            System.out.println(ability[i]);
        }
    }
}