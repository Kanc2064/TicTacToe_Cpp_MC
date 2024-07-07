#ifndef Board_H
#define Board_H
#include <iostream>
#include <vector>

using namespace std;

class Board
{
private:
    // vector<vector<char>> playingBoard(3, vector<char>(3, ' '));
    char playingBoard[3][3];

public:
    Board()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                playingBoard[i][j] = '-';
            }
        }
    }

    bool ifCellEmpty(int row, int col)
    {
        if (playingBoard[row][col] == '-')
        {
            return true;
        }
        return false;
    }
    void insert(int row, int col, char sign)
    {
        playingBoard[row][col] = sign;
    }
    void printBoard()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << playingBoard[i][j];
            }
            cout << endl;
        }
    }

    bool ifRowWiseSame(int row, char sign)
    {
        int signCount = 0;
        for (int i = 0; i < 3; i++)
        {
            if (playingBoard[row][i] == sign)
            {
                signCount++;
            }
        }
        if (signCount == 3)
        {
            return true;
        }
        return false;
    }
    bool ifColWiseSame(int col, char sign)
    {
        int signCount = 0;
        for (int i = 0; i < 3; i++)
        {
            if (playingBoard[i][col] == sign)
            {
                signCount++;
            }
        }
        if (signCount == 3)
        {
            return true;
        }
        return false;
    }
    bool ifDiagonalWiseSame(char sign)
    {
        int signCount = 0;
        for (int i = 0; i < 3; i++)
        {
            if (playingBoard[i][i] == sign)
            {
                signCount++;
            }
        }
        if (signCount == 3)
        {
            return true;
        }
        signCount = 0;
        for (int i = 0; i < 3; i++)
        {
            if (playingBoard[i][2 - i] == sign)
            {
                signCount++;
            }
        }
        if (signCount == 3)
        {
            return true;
        }
        return false;
    }
};
#endif