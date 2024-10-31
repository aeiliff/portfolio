// Filename: CNightElf.java
// Description: Class to encapsulate the properties of a NightElf
// Author: Abigail Iliff
// Date Modified: 12/14/2022

public class CNightElf extends CAlliance {
    // Constructors
    public CNightElf() {
        System.out.println("Night Elf created");
    }

    public void abilities() {
        ability[0] = "Warrior";
        ability[1] = "Hunter";
        ability[2] = "Rogue";
        ability[3] = "Priest";
        ability[4] = "DeathKnight";
        ability[5] = "Druid";

        System.out.println("Night Elf abilities: ");
        for (int i = 0; i < 6; i++) {
            System.out.println(ability[i]);
        }
    }
}