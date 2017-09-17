#Project Euler Problem 14

import math
import time

start_time = time.time()
curr_max = 10
max_num = 13
#keeps track of the numbers where we already know
#the sequence lengths, so it doesn't have to be
#recalculated each time
known = {1:1}

for i in range(13, 1000000):
    count = 1
    num = i
    while num != 1:
        if num % 2 == 0:
            if num in known:
                count += known[num] - 1
                break
            else:
                num = num/2
                count += 1
                
        else:
            if num in known:
                count += known[num] - 1
                break
            else:
                num = 3 * num + 1
                count += 1
                
    
    known[i] = count
    
    if count > curr_max:
        curr_max = count
        max_num = i
    

print(curr_max)
print(max_num)
print(time.time()- start_time, "seconds")
