# Plays the guessing game higher or lower 
# This is a modified version of the original from Wikibooks per exercise in Using Modules section
# This should actually be something that is semi random like the
# last digits of the time or something else, but that will have to
# wait till a later chapter.  (Extra Credit, modify it to be random
# after the Modules chapter)
from random import randint
number = randint(0, 100)
guess = -1

print("Guess the number!")
while guess != number:
    guess = int(input("Is it... "))

    if guess == number:
        print("Hooray! You guessed it right!")
    elif guess < number:
        print("It's bigger...")
    elif guess > number:
        print("It's not so big.")
