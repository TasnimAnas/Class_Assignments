import numpy as np

arr = np.array(
    input("Enter the array values separated by space: ").split(), dtype=int)
num = int(input("Enter the specified number: "))
less_than_num = arr[arr < num]
greater_than_num = arr[arr > num]

# print the extracted numbers
print(f"Numbers less than {num}: {less_than_num}")
print(f"Numbers greater than {num}: {greater_than_num}")
