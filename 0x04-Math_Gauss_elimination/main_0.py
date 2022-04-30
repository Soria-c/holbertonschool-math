#!/usr/bin/python3

import numpy as np
gaussian_elimination = __import__('0-gaussian_elimination').gaussian_elimination

if __name__ == "__main__":
  np.random.seed(0)
  A= np.random.rand(4, 4)
  np.random.seed(0)
  b= np.random.rand(4)
  print("The matrix A:\n",A)
  print("The vector b:\n",b)
  print("The solution of the linear system using Gauss eluimination algorithm\n",gaussian_elimination(A,b))

  np.random.seed(0)
  A= np.random.rand(3, 3)
  np.random.seed(0)
  b= np.random.rand(3)
  print("The matrix A:\n",A)
  print("The vector b:\n",b)
  print("The solution of the linear system using Gauss eluimination algorithm\n",gaussian_elimination(A,b))

  A=[[1, 1, 1], [1, 2, 3], [2, 3, 4]]
  b=[-2, 5, 1]
  print("The matrix A:\n",A)
  print("The vector b:\n",b)
  print("The solution of the linear system using Gauss eluimination algorithm\n",gaussian_elimination(A,b))