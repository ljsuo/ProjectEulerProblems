#Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
def diff(num):
    sum_first = 0
    sq_first = 0
    index1 = 1
    sum_first = index1 + num
    sum_first *= num
    sum_first = sum_first / 2
    while index1 <= num:
        sq_first += index1**2
        index1 += 1
    sum_first = sum_first**2
    print(sum_first - sq_first)

diff(100)
