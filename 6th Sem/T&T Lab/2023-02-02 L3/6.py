import numpy as np

mat = np.zeros((5, 5))
np.fill_diagonal(mat, [1, 2, 3, 4, 5])
print("5x5 zero matrix with elements on the main diagonal equal to 1, 2, 3, 4, 5:")
print(mat)
