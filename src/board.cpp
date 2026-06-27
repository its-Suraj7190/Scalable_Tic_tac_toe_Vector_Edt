#include "board.h"

Board::Board(int rows){
    game_rows = rows;
    grid.assign(game_rows, vector<int>(game_rows, 0));
}

void Board::Update_Board(const vector<pair<int,int>>& Player_1, const vector<pair<int,int>>& Player_2){
    grid.assign(game_rows, vector<int>(game_rows, 0));

    for(const auto& p : Player_1)
      grid[p.first][p.second] = 1;

    for(const auto& p : Player_2)
      grid[p.first][p.second] = 2;
}

void Board::Display_Board() const {
    cout << "\nCurrent Board:\n\n";

    for (int i = 0; i < game_rows; i++){
        for (int j = 0; j < game_rows; j++){

            if (grid[i][j] == 1) cout << "X\t";
            else if (grid[i][j] == 2) cout << "O\t";
            else cout << (i * game_rows) + j + 1 << "\t";
        }
        cout << '\n';
    }
}