import random

lower_limit = int(input("Enter the lower limit: "))
upper_limit = int(input("Enter the upper limit: "))
while True:
    number = random.randint(lower_limit, upper_limit)
    chances = 5
    while chances > 0:
        guess = int(input("Guess the number: "))
        if guess == number:
            print("Congratulations! You guessed the number!")
            break
        elif guess < number:
            print("Too low. Guess again.")
        else:
            print("Too high. Guess again.")
        chances -= 1
    if chances == 0:
        print("Sorry, you ran out of chances. The number was", number)
    print("------------------------\n")
