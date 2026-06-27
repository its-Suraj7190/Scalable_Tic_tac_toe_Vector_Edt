#ifndef BOARD_H
#define BOARD_H
#include <iostream>
#include <vector>

using namespace std;

class Board {
private:
    int game_rows;
    vector<vector<int>> grid;

public:
    Board(int rows);

    void Update_Board(const vector<pair<int,int>>& Player_1, const vector<pair<int,int>>& Player_2);
    void Display_Board() const;
};

#endif