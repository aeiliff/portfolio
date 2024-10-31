// Filename: CTauren.java
// Description: Class to encapsulate the properties of a Tauren
// Author: Abigail Iliff
// Date Modified: 12/14/2022

public class CTauren extends CHorde {
    // Constructors
    public CTauren() {
        System.out.println("Tauren created");
    }

    public void abilities() {
        ability[0] = "Warrior";
        ability[1] = "Hunter";
        ability[2] = "DeathKnight";
        ability[3] = "Shaman";
        ability[4] = "Druid";

        System.out.println("Tauren abilities: ");
        for (int i = 0; i < 5; i++) {
            System.out.println(ability[i]);
        }
    }
}