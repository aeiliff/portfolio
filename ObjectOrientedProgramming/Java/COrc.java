// Filename: COrc.java
// Description: Class to encapsulate the properties of an Orc
// Author: Abigail Iliff
// Date Modified: 12/14/2022

public class COrc extends CHorde {
    // Constructors
    public COrc() {
        System.out.println("Orc created");
    }

    public void abilities() {
        ability[0] = "Warrior";
        ability[1] = "Hunter";
        ability[2] = "Rogue";
        ability[3] = "DeathKnight";
        ability[4] = "Shaman";
        ability[5] = "Warlock";

        System.out.println("Orc abilities: ");
        for (int i = 0; i < 6; i++) {
            System.out.println(ability[i]);
        }
    }
}