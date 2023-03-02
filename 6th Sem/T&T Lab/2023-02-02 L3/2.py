import numpy as np

n = int(input("Enter the size of the array: "))
arr = np.empty(n, dtype=int)
for i in range(n):
    element = int(input())
    arr[i] = element
if np.any(arr != 0):
    print("At least one element in the array is non-zero")
else:
    print("All elements in the array are zero")
