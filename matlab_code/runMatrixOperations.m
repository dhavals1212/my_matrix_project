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
