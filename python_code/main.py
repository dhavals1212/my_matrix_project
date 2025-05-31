from matrix_ops import scalar_multiplication, print_matrix, matrix_add, matrix_subtract

if __name__ == "__main__":
    my_matrix = [
        [1, 2, 3],
        [4, 5, 6],
        [7, 8, 9]
    ]
    my_scalar = 2

    print("Original Matrix:")
    print_matrix(my_matrix)

    result_matrix = scalar_multiplication(my_matrix, my_scalar)

    print("\nMatrix after scalar multiplication by", my_scalar, ":")
    print_matrix(result_matrix)

    print("\n--- Matrix Addition ---")
    matrix_a = [[1, 0], [0, 1]]
    matrix_b = [[5, 2], [3, 8]]

    print("Matrix A:")
    print_matrix(matrix_a)
    print("\nMatrix B:")
    print_matrix(matrix_b)

    try:
        sum_matrix = matrix_add(matrix_a, matrix_b)
        print("\nSum of A + B:")
        print_matrix(sum_matrix)
    except ValueError as e:
        print(f"Error: {e}")

    try:
        sub_matrix = matrix_subtract(matrix_a, matrix_b)
        print("\nSubtraction of A - B:")
        print_matrix(sub_matrix)
    except ValueError as e:
        print(f"Error: {e}")
