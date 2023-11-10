% Input matrices A and B
A = input('Enter matrix A (e.g. [1 2; 3 4];): ');
B = input('Enter matrix B (e.g. [5 6; 7 8];): ');


    % Find the maximum value in matrix A
    maxA = max(A(:));

    fprintf('Matrix A:\n');
    disp(A);

    fprintf('Matrix B:\n');
    disp(B);
    % Maximum value of A
    fprintf('Maximum value in matrix A: %f\n', maxA);
[Ar, Ac]=size(A);
[Br, Bc] =size(B);
if (Ac ~= Br)
    fprintf('Matrix multiplication is not possible. The number of columns in A must be equal to the number of rows in B.\n');
else
    result = A * B;

    fprintf('Matrix A * B:\n');
    disp(result);
end

