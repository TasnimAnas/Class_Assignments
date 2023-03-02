str = input("Enter a string: ")
total = 0
for c in str:
    total += (ord(c) * 10) + 2

print("The sum of 10 times the ASCII value of each character plus 2 is:", total)
