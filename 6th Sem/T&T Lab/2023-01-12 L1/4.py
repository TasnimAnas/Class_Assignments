num = int(input("Enter number: "))
numStr = str(num)
digits = len(numStr)
sum = 0
for i in numStr:
    sum += int(i) ** digits
if sum == num:
    print(num, "is an armstrong number")
else:
    print(num, "is not an armstrong number")
