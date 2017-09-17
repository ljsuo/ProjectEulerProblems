#finds nth prime number
import math
def is_prime(n):
    x = math.floor(math.sqrt(n))
    if n == 2:
        return True
    while x > 1:
        if n % x != 0:
            x = x - 1
        else:
            return False
    return True
def nth_prime(nth):
    count = 1
    num = 2
    while count < nth:
        num = num + 1
        if is_prime(num) == True:
            count = count + 1
    return num

def main():
    answer = nth_prime(10001)
    print(answer)

main()
