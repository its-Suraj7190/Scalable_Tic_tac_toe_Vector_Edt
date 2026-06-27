#include "Tic_tac_toe.h"

Tic_tac_toe :: Tic_tac_toe(int rows)
    : game_rows(rows),
      total_size(static_cast<size_t>(rows * rows)),
      Game_board(rows){
    Winning_Lines();
}

void Tic_tac_toe :: Start_Game(){
    Game_board.Display_Board();
    User_Input();
}

void Tic_tac_toe :: Winning_Lines(){

    Winning_lines.clear();
    vector<pair<int,int>> D1, D2;

    for (int t = 0; t < game_rows; t++){

        vector<pair<int,int>> Row, Column;
        for (int k = 0; k < game_rows; k++){
            Row.push_back({t, k});
            Column.push_back({k, t});
        }
        Winning_lines.push_back(Row);
        Winning_lines.push_back(Column);
        D1.push_back({t, t});
        D2.push_back({game_rows - t - 1, t});
    }
    Winning_lines.push_back(D1);
    Winning_lines.push_back(D2);
}

bool Tic_tac_toe :: Check_Points(
        const vector<pair<int,int>>& Moves, const vector<pair<int,int>>& Line) const {
    for (const auto& Cell : Line) {
        bool Found = false;
        for (const auto& Move : Moves){
            if (Move == Cell){
                Found = true;
                break;
            } }
        if (!Found) return false; 
      }
    return true;
}

void Tic_tac_toe::User_Input(){

    while (Total_moves.size() < total_size){

        cout << "\nPlayer "
             << ((Total_moves.size() % 2 == 0) ? 1 : 2)
             << ", Enter move (1-" << total_size << "): ";

        int value = Input::Read_Move(total_size);
        int x = (value - 1) / game_rows;
        int y = (value - 1) % game_rows;

        pair<int,int> Cell = {x, y};

        if(Input::Used_Cell(Total_moves, Cell)){
            cout << "Cell already filled!\n";
            continue;
        }
        if (Total_moves.size() % 2 == 0)
            Player_1.push_back(Cell);
        else
            Player_2.push_back(Cell);

        Total_moves.push_back(Cell);
        Game_board.Update_Board(Player_1, Player_2);
        Game_board.Display_Board();

        if (Check_Winner()) break;
    }
}

bool Tic_tac_toe::Check_Winner() const {
    for (const auto& Line : Winning_lines) {
        if (Check_Points(Player_1, Line)){
            cout << "\nPlayer 1 Wins!\n";
            return true;
        }
    }

    for (const auto& Line : Winning_lines){
        if (Check_Points(Player_2, Line)){
            cout << "\nPlayer 2 Wins!\n";
            return true;
        }
    }

    if (Total_moves.size() == total_size){
        cout << "\nGame Draw!\n";
        return true;
    }
    return false;
}