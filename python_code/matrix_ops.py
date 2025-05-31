def scalar_multiplication(matrix, scalar):
    """
    Multiply elements of a scalar.
    It assumes matrix is a list of lists.
    """
    if not matrix:
        return []

    rows = len(matrix)
    cols = len(matrix[0])

    result = []
    for r in range(rows):
        new_row = []
        for c in range(cols):
            new_row.append(matrix[r][c] * scalar)
        result.append(new_row)
    return result

def print_matrix(matrix):
    """Prints a matrix in a readable format."""
    for row in matrix:
        print(row)

def matrix_add(matrix1, matrix2):
    """Adds two matrices, assumes they have the same dimensions."""
    if not matrix1 or not matrix2 or len(matrix1) != len(matrix2) or len(matrix1[0]) != len(matrix2[0]):
        raise ValueError("Matrices must be non-empty and have the same dimensions for addition.")

    rows = len(matrix1)
    cols = len(matrix1[0])
    result = []
    for r in range(rows):
        new_row = []
        for c in range(cols):
            new_row.append(matrix1[r][c] + matrix2[r][c])
        result.append(new_row)
    return result

def matrix_subtract(matrix1, matrix2):
    """Subtracts two matrices, assumes they have the same dimensions."""
    if not matrix1 or not matrix2 or len(matrix1) != len(matrix2) or len(matrix1[0]) != len(matrix2[0]):
        raise ValueError("Matrices must be non-empty and have the same dimensions for subtraction.")

    rows = len(matrix1)
    cols = len(matrix1[0])
    result = []
    for r in range(rows):
        new_row = []
        for c in range(cols):
            new_row.append(matrix1[r][c] - matrix2[r][c])
        result.append(new_row)
    return result
