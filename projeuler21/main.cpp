//
//  main.cpp
//  projeuler21
//
//  Created by Lester on 6/9/19.
//  Copyright © 2019 Lester. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

// Sum of the divisors of num
int div_sum(int n) {
    // Sum starts at 1 since all
    // ints are divisible by 1
    int sum = 1;
    for(int i = 2; i < sqrt(n); i++){
        if(n % i == 0){
            int div = n/i;
            sum += i;
            if(i != div){
                sum += div;
            }
        }
    }
    return sum;
}
int ami_pair_sum(int low, int high) {
    int i = low;
    int sum = 0;
    while(i <= high) {
        int j = div_sum(i);
        if(j > i && div_sum(j) == i){
            sum += (i + j);
        }
        i++;
    }
    return sum;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << ami_pair_sum(1, 10000);
    return 0;
}
