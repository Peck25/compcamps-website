import random

print("Guess the Number Game")

MAX = 1000000
number = random.randint(1, MAX)
guess = 0
tries = 0

while guess != number:
    tries = tries + 1
    try:
        guess = int(input("Number: "))
    except ValueError:
        print ("That isn't a number!")

    if guess < number:
        print("Too Low, Try Again")

    elif guess > number:
        print("Too High, Try Again")

    elif guess == number:
        print("You Won! Congratulations!")
        if tries == 1:
            print("How on earth did you get on your first try. I bet you won't get it again, but if you want to, go for it!")
        else:
            print("It took you",tries,"tries")
