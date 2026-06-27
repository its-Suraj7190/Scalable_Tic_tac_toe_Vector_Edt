#include"Tic_tac_toe.h"

int main()
{
    int N;

    cout << "Welcome to Tic-Tac-Toe\n";
    cout << "Enter board size (>=3): ";
    cin >> N;

    Tic_tac_toe Game(N);
    Game.Start_Game();
    return 0;
}