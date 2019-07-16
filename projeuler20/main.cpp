//
//  main.cpp
//  projeuler20
//
//  Created by Lester on 6/5/19.
//  Copyright © 2019 Lester. All rights reserved.
//

#include <iostream>
#include <string>
#include <array>
using namespace std;

int multiply(int x, int num[], int size) {
    int carry = 0;
    // Multiply by each digit
    for(int i = 0; i < size; i++){
        int prod = num[i] * x + carry;
        // Store last digit of product in num
        num[i] = prod % 10;
        // Store rest in carry
        carry = prod / 10;
    }
    while(carry){
        num[size] = carry % 10;
        carry /= 10;
        size++;
    }
    return size;
}

// Find factorial and return sum of digits
int add_digits(int n) {
    int num[1000];
    num[0] = 1;
    int size = 1;
    for(int i = 2; i <= n; i++){
        size = multiply(i, num, size);
    }
    int sum = 0;
    for(int i = size - 1; i >= 0; i--){
        sum += num[i];
    }
    return sum;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << add_digits(100);
    return 0;
}
