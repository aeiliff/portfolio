//Program: Battleship
//Purpose: To simulate a game of battleship
//Author: Abigail Iliff
//Date: 12/07/2021

#include <iostream>
#include <fstream>
using namespace std;

const int rows=15; //set rows and columns
const int cols=15;
char correctBoard[rows][cols]; //Premade board with ships
char playerBoard[rows][cols]; //Board that is displayed to the player

ifstream correct;
ifstream player;

void shipSunk(char board[][cols]){ //Function that determines which ship the player has sunk
    if(board[3][1]=='H' && board[3][2]=='H' && board[3][3]=='H'){
        cout<<"You sunk my destroyer!\n\n";
        board[3][1]='S';
        board[3][2]='S';
        board[3][3]='S';
    }
    if(board[3][13]=='H' && board[2][13]=='H'){
        cout<<"You sunk my Tender!!\n\n";
        board[3][13]='S';
        board[2][13]='S';
    }
    if(board[8][8]=='H' && board[9][8]=='H' && board[10][8]=='H' && board[11][8]=='H'){
        cout<<"You sunk my Carrier!!!\n\n";
        board[8][8]='S';
        board[9][8]='S';
        board[10][8]='S';
        board[11][8]='S';
    }
    if(board[12][4]=='H' && board[12][5]=='H'){
        cout<<"You sunk my Frigate!!!!\n\n";
        board[12][4]='S';
        board[12][5]='S';
    }
    if(board[14][12]=='H' && board[14][11]=='H' && board[14][10]=='H'){
        cout<<"You sunk my Cruiser!!!!!\n\n";
        board[14][12]='S';
        board[14][11]='S';
        board[14][10]='S';
    }
    
}
bool usedUp (char board[][cols]){ //Determines how many turns the player has taken
    int t=0;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++)
        if(board[i][j]!='~')
        t++;
        if(t>60)return true;
        }
    return false;
}
void displayBoard(char board[][cols]){ //Displays the players board
    cout<<"    ABCDEFGHIJKLMNO";
    cout<<endl;
    for(int i=0; i<rows; i++){
        if(i<9){
        cout<<" "<<i+1<<". ";
        }
        else
        cout<<i+1<<". ";
        for(int j=0; j<cols; j++)
        cout<<board[i][j];
        cout<<endl;
    }
}
bool checkForWinner(char pBoard [][cols]){ //Checks to see if the player has sunk all of the ships
    int t=0;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++)
        if(pBoard[i][j]=='S')
        t++;
        if(t==14)return true;
        }
    return false;
}
void playerTurn(char pBoard[][cols], char cBoard[][cols]){ //Is called to loop the players turn
    displayBoard(playerBoard);
    do{
    int x,y;
    char ch;
    cout<<"Pick a coordinate:\n";
    cout<<"Enter Row: ";
    cin>>y;
    cout<<"Enter Column: ";
    cin>>ch;
    x=(int)(ch-65);
            if(cBoard[y-1][x]=='~'){
            cout<<"You miss!!!!!\n";
            pBoard[y-1][x]='M';
            displayBoard(pBoard);
            }
            else if(pBoard[y-1][x]=='H'){
                cout<<"You have already chosen this spot! It's still a hit.\n\n";
            }
            else if(pBoard[y-1][x]=='M') {
                cout<<"You have already chosen this spot! It's still a miss.\n\n";
            }
            else if(cBoard[y-1][x]=='#'){
                cout<<"It's a hit :)\n";
            pBoard[y-1][x]='H';
            shipSunk(pBoard);
            displayBoard(pBoard);
            }
            else{
                cout<<"This is an invalid choice\n\n";
            }
    }
    while(checkForWinner(pBoard)==false && usedUp(pBoard)==false);{ //This loop continues until the player wins or exceeds 60 turns
        if(usedUp(pBoard)){
            cout<<"You have reached 60 turns, and failed to sink my battleships\n";
            cout<<"You lose!!!"<<endl;
        }
        else{
            cout<<"Congratulations you've sunk all of my ships!!!!!\n\n";
            cout<<"You Win!!!!\n\n";
        }
    }
}
int main(){
    player.open("playerBoard.txt"); //Opens the file containing the players board
    if(!player){
        cout<<"Could not open!"<<endl;
        return 0;
    }
    correct.open("correctBoard.txt"); //Opens the file containing the set board
    if(!correct){
        cout<<"Could not open!"<<endl;
        return 0;
    }
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
        correct>>correctBoard[i][j];
        player>>playerBoard[i][j];
        }
    }
    player.close();
    correct.close();
    playerTurn(playerBoard, correctBoard); //The players board and set board are passed to the players turn

    return 0;
}