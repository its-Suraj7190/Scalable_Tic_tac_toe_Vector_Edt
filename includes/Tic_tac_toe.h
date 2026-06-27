#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
#include <iostream>
#include <vector>
#include <cstddef>
#include "Board.h"
#include "Input.h"
using namespace std;

class Tic_tac_toe {
private:
    int game_rows; 
    size_t total_size;

    vector<pair<int,int>> Total_moves, Player_1, Player_2;
    vector<vector<pair<int,int>>> Winning_lines;

    Board Game_board;

private:
    void Winning_Lines();
    bool Check_Points(const vector<pair<int,int>>& moves, const vector<pair<int,int>>& line) const;
    bool Check_Winner() const;

public:

    Tic_tac_toe(int rows);

    void User_Input();
    void Start_Game();
};
#endif

