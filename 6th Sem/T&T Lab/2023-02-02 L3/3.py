import numpy as np

n = int(input("Enter the size of the array: "))
arr = np.empty(n, dtype=int)
for i in range(n):
    element = int(input())
    arr[i] = element
is_complex = np.iscomplex(arr)
print("Is each element of the array complex?", is_complex)
is_real = np.isreal(arr)
print("Is each element of the array real?", is_real)
num = np.array(float(input("Enter a number to test for scalar type: ")))
is_scalar = np.isscalar(num)
print("Is the given number a scalar type?", is_scalar)
