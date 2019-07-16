//
//  main.cpp
//  projeuler10
//
//  Created by Lester Suo on 7/16/17.
//  Copyright © 2017 Lester Suo. All rights reserved.
//

#include <iostream>
#include <cmath>

//Using long instead of int, since after a certain point,
//int loses precision and we get a wrong answer

bool is_prime(long num){
    
    //int highest = floor(sqrt(num));
    for (int i = 2; i <= sqrt(num); i++){
        if (num % i == 0){
            return false;
        }
    }
    return true;
}

long add_primes(long limit){
    unsigned long long sum = 0;
    for (long i = 2; i < limit; i++){
        if (is_prime(i)){
            sum += i;
        }
    }
    return sum;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    long answer = add_primes(2000000);
    std::cout << answer;
    return 0;
}
