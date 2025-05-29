from matrix_ops import scalar_multiplication, print_matrix

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
