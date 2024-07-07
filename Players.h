#ifndef Players_H
#define Players_H
#include <iostream>
#include <unordered_map>

class Players
{
private:
    unordered_map<string, char> player;
    unordered_map<int, string> playerPosition;

public:
    void setPlayerSign(string playerName, char sign)
    {
        player[playerName] = sign;
    }
    char fetchPlayerSign(string playerName)
    {
        return player[playerName];
    }
    void setPlayerPosition(int position, string playerName)
    {
        playerPosition[position] = playerName;
    }
    string getPlayerName(int position)
    {
        return playerPosition[position];
    }
};
#endif