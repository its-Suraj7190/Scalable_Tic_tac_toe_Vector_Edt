#include "board.h"

Board::Board(int size) {
    game_rows = size;
    grid.assign(game_rows, vector<int>(game_rows, 0));
}
