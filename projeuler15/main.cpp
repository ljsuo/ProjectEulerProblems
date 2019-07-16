//
//  main.cpp
//  projeuler15
//
//  Created by Lester Suo on 9/4/17.
//  Copyright © 2017 Lester Suo. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

double find_paths(){
    int x_grid = 20;
    int y_grid = 20;
    //first is spot in grid, from 0 to 20^2 - 1
    //second is the number of paths to reach that spot
    vector<pair<int, double>> grid;
    grid.reserve(x_grid * y_grid);
    for(int i = 0; i < x_grid * y_grid; i++){
        pair<int, double> info;
        info.first = i;
        if(info.first == 0){
            info.second = 2;
        }
        else if(info.first > 0 && info.first < x_grid){
            info.second = grid[i-1].second + 1;
        }
        else if(info.first != 0 && info.first % y_grid == 0){
            info.second = grid[i-y_grid].second + 1;
        }
        else{
            info.second = grid[i-1].second + grid[i-y_grid].second;
        }
        grid.push_back(info);
    }
    return grid.back().second;
}

int main() {
    //fixed gives exact number, rather than scientific notation
    cout << std::fixed;
    cout << find_paths() << endl;
    return 0;
}
