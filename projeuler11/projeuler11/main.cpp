//
//  main.cpp
//  projeuler11
//
//  Created by Lester Suo on 8/5/17.
//  Copyright © 2017 Lester Suo. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
/*
void find_horiz(int grid[][20], int &curr_max);
void find_vert(int grid[][20], int &curr_max);
void find_diag_right(int grid[][20], int &curr_max);
void find_diag_left(int grid[][20], int &curr_max);
int find_max(int grid[][20]);
*/

const int n = 20;

void find_horiz(int grid[][n], int &curr_max){
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 17; j++){
            int prod = grid[i][j] * grid[i][j+1] * grid[i][j+2] * grid[i][j+3];
            if(prod > curr_max){
                curr_max = prod;
            }
        }
    }
}

void find_vert(int grid[][n], int &curr_max){
    for(int i = 0; i < 17; i++){
        for(int j = 0; j < 20; j++){
            int prod = grid[i][j] * grid[i+1][j] * grid[i+2][j] * grid[i+3][j];
            if(prod > curr_max){
                curr_max = prod;
            }
        }
    }
}

void find_diag_right(int grid[][n], int &curr_max){
    for(int i = 0; i < 17; i++){
        for(int j = 0; j < 17; j++){
            int prod = grid[i][j] * grid[i+1][j+1] * grid[i+2][j+2] * grid[i+3][j+3];
            if(prod > curr_max){
                curr_max = prod;
            }
        }
    }
}

void find_diag_left(int grid[][n], int &curr_max){
    for(int i = 0; i < 17; i++){
        for(int j = 20; j > 2; j--){
            int prod = grid[i][j] * grid[i+1][j-1] * grid[i+2][j-2] * grid[i+3][j-3];
            if(prod > curr_max){
                curr_max = prod;
            }
        }
    }
}

int find_max(int grid[][n]){
    int curr_max = 0;
    find_horiz(grid, curr_max);
    find_vert(grid, curr_max);
    find_diag_right(grid, curr_max);
    find_diag_left(grid, curr_max);
    return curr_max;
}


int main() {
    //int num;
    //string line;
    ifstream in_file;
    in_file.open("/Users/lestersuo/Documents/c++practice/projeuler11/projeuler11/input.txt");
    if(!in_file){
        cout << "File cannot be opened" << endl;
        exit(1);
    }
    int grid_x = 20;
    int grid_y = 20;
    int grid[n][n] = {0};
    
    for(int i = 0; i < grid_x; i++){
        for(int j = 0; j < grid_y; j++){
            in_file >> grid[i][j];
        }
    }
    
    
    for(int i = 0; i < grid_x; i++){
        for(int j = 0; j < grid_y; j++){
            cout << grid[i][j] << ' ';
        }
        cout << endl;
    }
    int answer = find_max(grid);
    
    cout << answer << endl;
    
    
    in_file.close();
   
    return 0;
}
