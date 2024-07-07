#include <iostream>
#include <string>
#include <vector>
#include "Board.h"
#include "Players.h"
#include "Game.h"

using namespace std;

int main()
{
    Board *board = new Board();
    Players *players = new Players();
    Game *game = new Game();

    char sign;
    string playerName;

    for (int i = 0; i < 2; i++)
    {
        cin >> sign;
        cin >> playerName;
        players->setPlayerSign(playerName, sign);
        players->setPlayerPosition(i, playerName);
    }

    game->playGame(board, players);

    return 0;
}