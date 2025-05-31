% runMatrixOperations.m
% This script demonstrates scalar multiplication using a custom function.

% Define your matrix
myMatrix = [
	    1, 2, 3;
	    4, 5, 6;
	    7, 8, 9;
];

% Define your scalar
myScalar = 2;

disp('Original Matrix:');
disp(myMatrix);

%Call the custom function
resultMatrix = scalarMultiplyMatrix(myMatrix, myScalar);

disp(['Matrix after scalar multiplication by ', num2str(myScalar), ':']);
disp(resultMatrix);

myMatrix2 = [
	     2, 4, 6;
	     6, 8, 10;
	     10, 12, 14;
];

disp('The addition between two matrices will be');
resultMatrix2 = matrixAddition(myMatrix, myMatrix2);

disp(resultMatrix2);

disp('The subtraction between two matrices will be');
resultMatrix3 = matrixSubtraction(myMatrix, myMatrix2);

disp(resultMatrix3);

disp('The multiplication between two matrices will be');
resultMatrix4 = matrixMultiplication(myMatrix, myMatrix2);

disp(resultMatrix4);
