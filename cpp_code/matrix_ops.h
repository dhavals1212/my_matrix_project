#ifndef MATRIX_OPS_H
#define MATRIX_OPS_H

#include <vector>
#include <iostream>

//function to multiply matrix by a scalar
std::vector<std::vector<int>> scalarMultiply(const std::vector<std::vector<int>>& matrix, int scalar);

//function to print a matrix
void printMatrix(const std::vector<std::vector<int>>& matrix);

//function to add two matrices
std::vector<std::vector<int>> matrix_add(const std::vector<std::vector<int>>& matrix_a, const std::vector<std::vector<int>>& matrix_b);

//function to subtract two matrices
std::vector<std::vector<int>> matrix_subtract(const std::vector<std::vector<int>>& matrix_a, const std::vector<std::vector<int>>& matrix_b);

//function to do matrix multiplication
std::vector<std::vector<int>> matrix_multiplication(const std::vector<std::vector<int>>& matrix_a, const std::vector<std::vector<int>>& matrix_b);

//function to find transpose of a matrix
std::vector<std::vector<int>> tran(const std::vector<std::vector<int>>& matrix);

#endif // MATRIX_OPS_H
