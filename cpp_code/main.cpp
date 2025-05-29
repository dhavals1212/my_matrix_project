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

  return 0;
}
