#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

/// Global Variables
char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';
/// Global Variables

void resetBoard();
void printBoard();
int checkFreeSpace();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);

int main()
{
    char winner = ' ';
    resetBoard();
    return 0;
}

// Resetting Board
void resetBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}

// printing board
void printBoard()
{
}

// checking for free space
int checkFreeSpace()
{
}

// player move
void playerMove()
{
}

// computer move
void computerMove()
{
}

// checking winner
char checkWinner()
{
}

// printing Winner
void printWinner(char winner)
{
}
