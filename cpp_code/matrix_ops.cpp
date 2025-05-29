#include "matrix_ops.h" //include your own header first

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
