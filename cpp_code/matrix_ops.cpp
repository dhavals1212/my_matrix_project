#include "matrix_ops.h" //include your own header first
#include <stdexcept> //for std::invalid argument

//function definition for scalarMultiply
std::vector<std::vector<int>> scalarMultiply(const std::vector<std::vector<int>>& matrix, int scalar) {
  if (matrix.empty()) {
    return {};
  }

  int rows = matrix.size();
  int cols = matrix[0].size();

  std::vector<std::vector<int>> result(rows, std::vector<int>(cols));

  for (int r=0; r<rows; ++r) {
    for (int c=0; c<cols; ++c) {
      result[r][c] = matrix[r][c] * scalar;
    }
  }
  return result;
}


//function definition for printmatrix
void printMatrix(const std::vector<std::vector<int>>& matrix) {
  for (const auto& row : matrix) {
    for (int val : row) {
      std::cout << val << "\t"; //use tab for better spacing
    }
    std::cout << std::endl;
  }
}

//function definition for matrix_add
std::vector<std::vector<int>> matrix_add(const std::vector<std::vector<int>>& matrix_a, const std::vector<std::vector<int>>&  matrix_b) {
  if (matrix_a.empty() || matrix_a[0].empty() || matrix_b.empty() || matrix_b[0].empty()) {
    throw std::invalid_argument("Input matrices for addition cannot be empty.");
  }
  if (matrix_a.size() != matrix_b.size() || matrix_a[0].size() != matrix_b[0].size()) {
    throw std::invalid_argument("Matrices for addition must have the same dimensions.");
  }
  

  int rows = matrix_a.size();
  int cols = matrix_a[0].size();

  std::vector<std::vector<int>> result(rows, std::vector<int>(cols));

  for (int r=0; r<rows; ++r) {
    for (int c=0; c<cols; ++c) {
      result[r][c] = matrix_a[r][c] + matrix_b[r][c];
    }
  }
  return result;
}

//function definition for matrix_subtract
std::vector<std::vector<int>> matrix_subtract(const std::vector<std::vector<int>>& matrix_a, const std::vector<std::vector<int>>&  matrix_b) {
  if (matrix_a.empty() || matrix_a[0].empty() || matrix_b.empty() || matrix_b[0].empty()) {
    throw std::invalid_argument("Input matrices for subtraction cannot be empty.");
  }
  if (matrix_a.size() != matrix_b.size() || matrix_a[0].size() != matrix_b[0].size()) {
    throw std::invalid_argument("Matrices for subtraction must have the same dimensions.");
  }
  

  int rows = matrix_a.size();
  int cols = matrix_a[0].size();

  std::vector<std::vector<int>> result(rows, std::vector<int>(cols));

  for (int r=0; r<rows; ++r) {
    for (int c=0; c<cols; ++c) {
      result[r][c] = matrix_a[r][c] - matrix_b[r][c];
    }
  }
  return result;
}

//function definition for matrix_multiplication
std::vector<std::vector<int>> matrix_multiplication(const std::vector<std::vector<int>>& matrix_a, const std::vector<std::vector<int>>&  matrix_b) {
  if (matrix_a.empty() || matrix_a[0].empty() || matrix_b.empty() || matrix_b[0].empty()) {
    throw std::invalid_argument("Input matrices for multiplication cannot be empty.");
  }
  if (matrix_a[0].size() != matrix_b.size()) {
    throw std::invalid_argument("Matrices for multiplication must have the same dimension for column of first matrix and row of second matrix.");
  }
  

  int rows_a = matrix_a.size();
  int cols_a = matrix_a[0].size();
  int rows_b = matrix_b.size();
  int cols_b = matrix_b[0].size();

  std::vector<std::vector<int>> result(rows_a, std::vector<int>(cols_b, 0));

  for (int r=0; r<rows_a; ++r) {
    for (int c=0; c<cols_b; ++c) {
      for (int k=0; k<cols_a; ++k) {
	result[r][c] += matrix_a[r][k] * matrix_b[k][c];
      }
    }
  }
  return result;
}

//function definition for transpose matrix
std::vector<std::vector<int>> tran(const std::vector<std::vector<int>>& matrix) {
  if (matrix.empty()) {
    throw std::invalid_argument("Input matrix cannot be empty.");
  }

  int rows = matrix.size();
  int cols = matrix[0].size();

  std::vector<std::vector<int>> result(rows, std::vector<int>(cols));

  for (int r=0; r<rows; r++) {
    for (int c=0; c<cols; c++) {
      result[r][c] = matrix[c][r];
    }
  }

  return result;
}
