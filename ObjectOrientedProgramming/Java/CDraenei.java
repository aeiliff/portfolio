// Filename: CDraenei.java
// Description: Class to encapsulate the properties of a Draenei
// Author: Abigail Iliff
// Date Modified: 12/14/2022

public class CDraenei extends CAlliance {
    // Constructors
    public CDraenei() {
        System.out.println("Draenei created");
    }

    public void abilities() {
        ability[0] = "Warrior";
        ability[1] = "Hunter";
        ability[2] = "Rouge";
        ability[3] = "Priest";
        ability[4] = "DeathKnight";
        ability[5] = "Druid";

        System.out.println("Draeni Abilities: ");
        for (int i = 0; i < 6; i++) {
            System.out.println(ability[i]);
        }
    }
}