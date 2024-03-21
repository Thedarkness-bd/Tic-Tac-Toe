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
    printBoard();
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
    printf(" %c | %c | %c", board[0][0], board[0][1], board[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c", board[1][0], board[1][1], board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c", board[2][0], board[2][1], board[2][2]);
    printf("\n");
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
