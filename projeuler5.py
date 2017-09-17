#2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.#What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
#!/usr/bin/python

def find_num(num):
    works = False
    while works != True:
        num += 2
        div = 3
        while num % div == 0:
            div += 1
            if div == 21:
                works = True
                break
    print(num)

find_num(num = 2520)
