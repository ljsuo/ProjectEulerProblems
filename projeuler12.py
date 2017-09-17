#Project Euler Problem 12
import math

def divisor_count(num):
    count = 0
    num_sqrt = int(math.sqrt(num))
    for i in range(1, num_sqrt):
        if num % i == 0:
            count += 2
    if num_sqrt ** 2 == num:
        count -= 1
    return count

num = 1
n = 1
while(True):
    n += 1
    num = num + n
    if divisor_count(num) > 500:
        print(num)
        break
    
