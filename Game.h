#ifndef Game_H
#define Game_H
#include <iostream>
#include "Board.h"
#include "Players.h"

class Game
{
public:
    void playGame(Board *board, Players *players)
    {
        int playerPosition = 0;
        int noOfFilledCells = 0;
        int GameEnd = false;
        while (GameEnd == false)
        {
            string playerName = players->getPlayerName(playerPosition);
            char sign = players->fetchPlayerSign(playerName);
            int row, col;
            cin >> row;
            cin >> col;
            row = row - 1;
            col = col - 1;
            if (board->ifCellEmpty(row, col) == true)
            {
                board->insert(row, col, sign);
                noOfFilledCells++;
                board->printBoard();

                if (board->ifRowWiseSame(row, sign) == true)
                {
                    cout << playerName << " is winner";
                    return;
                }
                if (board->ifColWiseSame(col, sign) == true)
                {
                    cout << playerName << " is winner";
                    return;
                }
                if (board->ifDiagonalWiseSame(sign) == true)
                {
                    cout << playerName << " is winner";
                    return;
                }
                playerPosition = (playerPosition + 1) % 2;
            }
            else
            {
                cout << "Invalid Move" << endl;
                // return;
            }
            if (noOfFilledCells == 9)
            {
                cout << "Game Over";
                return;
            }
                }
        return;
    }
};
#endif