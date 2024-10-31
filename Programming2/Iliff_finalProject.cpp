// File Name: Iliff_finalProject.cpp
// Program: Word Finding Game
// Author: Abigail Iliff
// Date Last Modifide: 5/08/2022

#include <iostream>
#include <fstream>
#include <cstring>
#include <cctype>
using namespace std;

// Function prototypes 
void displayBoard(char **array, int dim);
void displayRules();
void displayWinner(string player1, string player2, int correct1, int correct2);
int displayMenu();
int playerTurn(char **array, string player, int dim);
bool legitWord(string word, int dim);
 
int main()
{
    string player1;
    string player2;
    string playAgain;

    displayRules();

    cout << "Please enter the name for player 1: "; // Player names inputted 
    cin >> player1;
    cout << "Please enter the name for player 2: ";
    cin >> player2;

    int choice = displayMenu(); // Gets choice of board size
    char **board = new char*[choice]; // Creates pointer to 2D array, initializes # of rows

    for (int i=0; i<choice; i++) // Initializes # of columns 
        board[i] = new char[i];

    if (choice != 1) 
    {        
        int count1 = playerTurn(board, player1, choice); // Calls functions to run game, and display winner
        int count2 = playerTurn(board, player2, choice);
        displayWinner(player1, player2, count1, count2);

        cout << "Would you like to play again? Type YES or NO: " << endl;
        cin >> playAgain;

        if (playAgain == "YES")
        {
            int choice = displayMenu(); // Gets choice of board size
            char **board = new char*[choice]; // Creates pointer to 2D array, initializes # of rows

            for (int i=0; i<choice; i++) // Initializes # of columns 
                board[i] = new char[i];
            if (choice != 1)
            {
                int count1 = playerTurn(board, player1, choice); // Calls functions to run game, and display winner
                int count2 = playerTurn(board, player2, choice);
                displayWinner(player1, player2, count1, count2);

                cout << "Would you like to play again? Type YES or NO: " << endl;
                cin >> playAgain;
            }
        }
        else if (playAgain == "NO")
            cout << "Thanks for playing Word Finder!" << endl;
        else
        {
            cout << "That is an invalid choice. Please type YES or NO: " << endl;
            cin >> playAgain;
        }

        delete [] board;
        board = nullptr;
    }
    return 0;
}

void displayRules()
{
    cout << "Welcome to Word Finder!" << endl << endl;
    cout << "Rules of the game:" << endl;
    cout << "Words can be found diagonally, left to right, right to left, and up and down." << endl;
    cout << "Words may be backwords." << endl;
    cout << "If you type a word that is not in the game board, or that doesn't exist it will count as incorrect." << endl;
    cout << "Any words that are typed that are on the game board, but aren't in a valid position will also be false." << endl;
    cout << "Once you type three invalid words, or find all of the correct words your turn will be over." << endl;
    cout << "The player with the most correct words wins." << endl;
    cout << "Good Luck!" << endl;
}

int displayMenu()
{
    int choice;

    cout << "What size game board would you like to play with?" << endl;
    cout << "Press 4 for size 4x4" << endl;
    cout << "Press 5 for size 5x5" << endl;
    cout << "Press 6 for size 6x6" << endl;
    cout << "Press 1 to quit game" << endl;
    cin >> choice;

    if (choice != 4 && choice != 5 && choice != 6 && choice != 1)
    {
        cout << "Please enter a valid choice. Try again." << endl;
        cin >> choice;
    }
    return choice;
}

void displayBoard(char **array, int dim) // Opens board file that corresponds to dimensions, displays board
{
    ifstream inBoard;

    if (dim == 4)
        inBoard.open("4x4.txt");
    if (dim == 5)
        inBoard.open("5x5.txt");
    if (dim == 6)
        inBoard.open("6x6.txt");
    if (!inBoard)
        cout << "Error opening file.";

    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            inBoard >> *(*(array+i)+j);
            cout << " " << *(*(array+i)+j) << " ";
        }
        cout << endl;
    }
    inBoard.close();
}

void displayWinner(string player1, string player2, int correct1, int correct2)
{
    ifstream playerWords1;
    ifstream playerWords2;
    string word;

    playerWords1.open(player1);
    playerWords2.open(player2);

    cout << "Player 1 words: " << endl;
    while (playerWords1.good())
    {
        getline(playerWords1, word, '\n');
         cout << word << endl;
    }
    cout << "Player 2 words: " << endl;
    while (playerWords2.good())
    {
        getline(playerWords2, word, '\n');
        cout << word << endl;
    }

    cout << player1 << " got " << correct1 << " words." << endl;
    cout << player2 << " got " << correct2 << " words." << endl;

    if (correct1 > correct2)
        cout << player1 << " wins!" << endl;
    if (correct2 > correct1)
        cout << player2 << " wins!" << endl;
    if (correct2 == correct1)
        cout << "You tied!" << endl;

    playerWords1.close();
    playerWords2.close();
}

bool legitWord(string word, int dim) // Checks to make sure word exists and is on the board
{
    ifstream inAnsBoard;
    string str;

    if (dim == 4)
        inAnsBoard.open("answers4x4.txt");
    if (dim == 5)
        inAnsBoard.open("answers5x5.txt");
    if (dim == 6)
        inAnsBoard.open("answers6x6.txt");
    if (!inAnsBoard)
        cout << "Error opening file." << endl;

    while(inAnsBoard.good())
    {
        getline(inAnsBoard,str,'\n');
        if (str == word)
        {
            return true;
        }
    }

    return false;
    inAnsBoard.close();
}

int playerTurn(char **array, string player, int dim)
{
    ofstream playerWords;
    string word;
    int correct = 0;
    int incorrect = 0;

    playerWords.open(player);
    if (!playerWords)
        cout << "Error opening board" << endl;

    cout << player << "'s turn!" << endl;
    displayBoard(array, dim);

    if (dim == 4)
    {
        while (correct < 14 && incorrect < 3)
        {
            cin >> word;
            for (int i=0; i < word.size(); i++) // Changes lowercase to uppercase to check for correct word
                word[i] = toupper(word[i]);
            if (legitWord(word, dim))
            {
                correct++;
                playerWords << word << endl;
            }
            if (!(legitWord(word, dim)))
            {
                incorrect++;
                cout << "That is an invalid word!" << endl;
            }
        }
    }

    if (dim == 5)
    {
        while (correct < 23 && incorrect < 3)
        {
            cin >> word;
            for (int i=0; i < word.size(); i++)
                word[i] = toupper(word[i]);
            if (legitWord(word, dim))
            {
                correct++;
                playerWords << word << endl;
            }

            if (!(legitWord(word, dim)))
            {
                incorrect++;
                cout << "That is an invalid word!" << endl;
            }
        }
    }

    if (dim == 6)
    {
        while (correct < 17 && incorrect < 3)
        {
            cin >> word;
            for (int i=0; i < word.size(); i++)
                word[i] = toupper(word[i]);
            if (legitWord(word, dim))
            {
                correct++;
                playerWords << word << endl;
            }

            if (!(legitWord(word, dim)))
            {
                incorrect++;
                cout << "That is an invalid word!" << endl;
            }
        }
    }

    cout << "Your turn is over!" << endl << endl;
    return correct;
    playerWords.close();
}
