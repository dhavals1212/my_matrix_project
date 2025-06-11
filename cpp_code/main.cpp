#include "matrix_ops.h" //include your custom matrix operations header
#include <iostream>
#include <vector> //already included but good to have

int main() {
  std::vector<std::vector<int>> myMatrix = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };
  int myScalar = 2;

  std::cout << "Original Matrix:" << std::endl;
  printMatrix(myMatrix);

  std::vector<std::vector<int>> resultMatrix = scalarMultiply(myMatrix, myScalar);

  std::cout << "Matrix after multiplication by " << myScalar << ":" << std::endl;
  printMatrix(resultMatrix);

  std::vector<std::vector<int>> myMatrixA = {
    {2, 3, 4},
    {4, 5, 6},
    {6, 7, 8}
  };
  std::cout << "1st matrix for addition: " << std::endl;
  printMatrix(myMatrixA);

  std::vector<std::vector<int>> myMatrixB = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };
  std::cout << "2nd matrix for addition: " << std::endl;
  printMatrix(myMatrixB);

  std::vector<std::vector<int>> myMatrixC = {
    {1, 7, 11},
    {11, 15, 19},
    {19, 23, 27}
  };
  std::cout << "1st matrix for subtraction: " << std::endl;
  printMatrix(myMatrixC);

  std::vector<std::vector<int>> myMatrixD = {
    {1, 2, 4},
    {4, 5, 7},
    {7, 8, 10}
  };
  std::cout << "2nd matrix for subtraction: " << std::endl;
  printMatrix(myMatrixD);

  try {
    std::vector<std::vector<int>> resultMatrixadd = matrix_add(myMatrixA, myMatrixB);
    std::cout << "\nResult of matrix addition A + B:" << std::endl;
    printMatrix(resultMatrixadd);

    //Example of additional error handling
    //std::vector<std::vector<int>> matrixC = {{1}};
    //std::cout << "\nAttempting to add incompatible matrices:" << std::endl;
    //std::vector<std::vector<int>> incompatibleResult = matrix_add(myMatrixA, matrixC);
    
  } catch (const std::invalid_argument& e) {
    std::cerr << "Error during matrix addition: " << e.what() << std::endl;
  }

  try {
    std::vector<std::vector<int>> resultMatrixsubtract = matrix_subtract(myMatrixC, myMatrixD);
    std::cout << "\nResult of matrix subtraction C - D:" << std::endl;
    printMatrix(resultMatrixsubtract);

    //Example of additional error handling
    //std::vector<std::vector<int>> matrixC = {{1}};
    //std::cout << "\nAttempting to subtract incompatible matrices:" << std::endl;
    //std::vector<std::vector<int>> incompatibleResult = matrix_subtract(myMatrixC, matrixD);
    
  } catch (const std::invalid_argument& e) {
    std::cerr << "Error during matrix subtraction: " << e.what() << std::endl;
  }
  
  try {
    std::vector<std::vector<int>> resultMatrixmulti = matrix_multiplication(myMatrixA, myMatrixC);
    std::cout << "\nResult of matrix multiplication A * C:" << std::endl;
    printMatrix(resultMatrixmulti);

    //Example of additional error handling
    //std::vector<std::vector<int>> matrixC = {{1}};
    //std::cout << "\nAttempting to multiply incompatible matrices:" << std::endl;
    //std::vector<std::vector<int>> incompatibleResult = matrix_multiplication(myMatrixA, matrixC);
    
  } catch (const std::invalid_argument& e) {
    std::cerr << "Error during matrix multiplicaction: " << e.what() << std::endl;
  }

  try {
    std::vector<std::vector<int>> resultingTranspose = tran(myMatrix);
    std::cout << "\nTranspose of a matrix:" << std::endl;
    printMatrix(resultingTranspose);
  } catch (const std::invalid_argument& e) {
    std::cerr << "Error during transposing of matrix: " << e.what() << std::endl;
  }
  return 0;
}
