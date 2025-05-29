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
