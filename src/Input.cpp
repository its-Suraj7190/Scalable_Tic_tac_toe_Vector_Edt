#include "Input.h"

int Input::Read_Move(int total_size) 
{
    int value;
 
   while(true) {

        cin >> value;

        if (cin.fail()){
            cout << "Invalid input! Please enter an integer.\n";
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }
        if (value < 1 || value > total_size){
            cout << "Enter a value between 1 and "
                 << total_size << ".\n";
                 continue;
        }
        return value;
    }
}

bool Input::Used_Cell(const vector<pair<int,int>>& Total_moves,
                      const pair<int,int>& Cell){

    for (const auto& move : Total_moves){
        if (move == Cell)
            return true;
    }
    return false;
}