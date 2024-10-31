// Author: Abigail Iliff
// Filename: Iliff_cryptographyCiphers.cpp
// Purpose: Encrypt text with the Affine Cipher and decrypt text with the Affine and Vigenere Cipher
// Date Modified: 09/28/2023


#include <iostream>
using namespace std;

void affineCipherDecrypt(string txt, int a, int b);
void affineCipherEncrypt(string txt, int a, int b);
void vigenereCipherDecrypt(string txt, int a, int b, int c);

int main() {
    string cipherText;
    string plainText;
    int cipher;
    int choice;
    string keepGoing;
    int a[12] = {1, 3, 5, 7, 9, 11, 15, 17, 19, 21, 23, 25};
    int b[26] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};

    cout << "Press 1 for Affine Cipher, press 2 for Vigenere Cipher (Decryption): ";
    cin >> cipher;
    cout << endl;


    if (cipher == 1) {
        cout << "Press 1 to encrypt, press 2 to decrypt";
        cin >> choice;
        if (choice == 1) {
            cout << "Enter Plaintext All Uppercase And Without Spaces Or Non-Letters: " << endl;
            cin >> plainText;
            for (int i = 0; i < 25; i++)                    // Loops through every value of a and b
                for (int j = 0; j < 12; j++)
                    affineCipherEncrypt(plainText, a[j], b[i]);      // Calls function to test each value of a and b for the given text
        }
        if (choice == 2) {
            cout << "Enter Ciphertext All Uppercase And Without Spaces Or Non-Letters: " << endl;
            cin >> cipherText;
            for (int i = 1; i < 25; i++)                    // Loops through every value of a and b
                for (int j = 0; j < 12; j++)
                    affineCipherDecrypt(cipherText, a[j], b[i]);      // Calls function to test each value of a and b for the given text
        }
    }
    if (cipher == 2) {
        cout << "Enter Plaintext All Uppercase And Without Spaces Or Non-Letters: " << endl;
        cin >> plainText;

        for (int x = 0; x < 26; x++) {
            for (int y = 0; y < 26; y++)
                for (int z = 0; z < 26; z++)
                    vigenereCipherDecrypt(plainText, x, y, z);

            cout << "Would you like to keep going? Enter 'YES' or 'NO'" << endl;
            cin >> keepGoing;

            if (keepGoing == "NO")
                x = 26;
        }
    }
    return 0;
}

void affineCipherDecrypt(string txt, int a, int b) {
    string plainText;
    int x = 0;

    for (int i = 0; i < txt.length(); i++) {            // Loops through text one character at a time until end of string
        x = (a*((txt[i] - 65) - b)) % 26;               // x holds value of the affine formula w/out +65
        if (x < 0) {                                     // Deals with negatives
            plainText[i] = (x + 26) + 65;               // Uses affine decryption formula (+ 26 to deal with negative)
            cout << plainText[i];                       // Prints each character 
        }
        else {
            plainText[i] = x + 65;                      // Uses affine decryption formula (w/out +26, not negative)
            cout << plainText[i];
        }
    }
    cout << " :" << a << ", " << b << endl;             // Prints a and b used 
}

void affineCipherEncrypt(string txt, int a, int b) {
    string cipherText;

    for (int i = 0; i < txt.length(); i++) {             // Loops through text one character at a time until end of string
        cipherText[i] = ((a*(txt[i] - 65)+ b) % 26) + 65;               // Encrypts with affine formula
        cout << cipherText[i];
    }
    cout << " :" << a << ", " << b << endl;             // Prints a and b used 
}

void vigenereCipherDecrypt(string txt, int a, int b, int c) {
    string plainText;
    int x = 0;
    int y = 0;
    int z = 0;
    for (int i = 0; i < txt.length(); i += 3) {
        x = txt[i] - a;
        y = txt[i + 1] - b;
        z = txt[i + 2] - c;
        
        plainText[i] = x;
        plainText[i + 1] = y;
        plainText[i + 2] = z;
        if (x < 65) {
            plainText[i] += 26;
            cout << plainText[i]; 
        }
        else
            cout << plainText[i];
        if (y < 65) {
            plainText[i + 1] += 26;
            cout << plainText[i + 1];
        }
        else
            cout << plainText[i + 1];
        if (z < 65) {
            plainText[i + 2] += 26;
            cout << plainText[i + 2];
        }
        else
            cout << plainText[i + 2];
    }
    cout << " :" << a << ", " << b << ", " << c << endl << endl;
}

