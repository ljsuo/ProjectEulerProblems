//
//  main.cpp
//  projeuler13
//
//  Created by Lester Suo on 8/23/17.
//  Copyright © 2017 Lester Suo. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;
int main() {
    // insert code here...
    ifstream in_file;
    in_file.open("/Users/lestersuo/Documents/c++practice/projeuler13/projeuler13/num_input.txt");
    if(!in_file){
        cout << "File cannot be opened" << endl;
        exit(1);
    }
    else{
        //cout << "Read in File" << endl;
        double sum = 0;
        for(int i = 0; i < 100; i++){
            double num;
            in_file >> num;
            sum += num;
            cout << sum << endl;
        }
        string answer;
        answer = to_string(sum);
        for(int i = 0; i < 10; i++){
            cout << answer[i];
        }
        cout << endl;
        //cout << answer << endl;
    }
    
    return 0;
}
