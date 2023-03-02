n = int(input("Enter the size of the list: "))
lst = []
for i in range(n):
    element = int(input("Enter element {}: ".format(i+1)))
    lst.append(element)
largest = max(lst)
print("The largest number in the list is:", largest)
