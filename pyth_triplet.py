#Finds the product Pythagorean triplet where a + b + c = 1000

def find_triplet(the_sum):
    
    #a cannot be greater than or equal to a third of the total sum
    for x in range(1, the_sum/3):
        a = x
        #b cannot be greater than or equal to half the sum
        for y in range(a + 1, the_sum/2):
            b = y
            c = the_sum - a - b
            if a**2 + b**2 == c**2:
                print(a*b*c)

def main():
    find_triplet(1000)

main()
