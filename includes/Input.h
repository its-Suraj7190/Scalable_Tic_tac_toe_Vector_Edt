#ifndef INPUT_H
#define INPUT_H

#include <iostream>
#include <vector>
using namespace std;

class Input{

 public:
   static int Read_Move(int total_size);
   static bool Used_Cell(const vector<pair<int,int>>& Total_moves,const pair<int,int>& Cell);
};
#endif