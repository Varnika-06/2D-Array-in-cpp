# 2D-Array-in-Cpp
****************************************************
Name: Varnika Maurya
PRN: 24070123160
Experiment No: 8
Name: 2D Arrays in C++
****************************************************

Program 1: Input and Display Two Matrices
-----------------------------------------
**Theory**:
This program takes input for two matrices and displays them. It demonstrates the basic structure of 2D arrays and nested loops for input/output operations.

**Procedure**:
1. Take user input for rows and columns of both matrices.
2. Declare two 2D arrays.
3. Take input elements for both matrices.
4. Display both matrices using nested loops.

**Algorithm**:
1. Start
2. Input r1, c1, r2, c2
3. Declare matrices a[r1][c1], b[r2][c2]
4. Loop to input elements of matrix a
5. Loop to input elements of matrix b
6. Loop to display matrix a
7. Loop to display matrix b
8. End

----------------------------------------------------

Program 2: Matrix Addition
--------------------------
**Theory**:
Matrix addition is performed by adding corresponding elements of two matrices of the same order.

**Procedure**:
1. Input dimensions of both matrices (should be equal).
2. Input elements of both matrices.
3. Add corresponding elements and display the result.

**Algorithm**:
1. Start
2. Input r1, c1 (and ensure r2=r1, c2=c1)
3. Input matrix A and B
4. For each element, sum[i][j] = A[i][j] + B[i][j]
5. Display result
6. End

----------------------------------------------------

Program 3: Matrix Multiplication
--------------------------------
**Theory**:
Matrix multiplication is only possible if the number of columns in the first matrix is equal to the number of rows in the second matrix.

**Procedure**:
1. Input dimensions and check multiplication condition (c1 == r2).
2. Input matrices A and B.
3. Multiply using triple nested loops and store in result matrix.
4. Display the result matrix.

**Algorithm**:
1. Start
2. Input r1, c1, r2, c2
3. If c1 != r2, display "Not possible" and stop
4. Input matrices A[r1][c1] and B[r2][c2]
5. Initialize result[r1][c2] to 0
6. For i=0 to r1:
      For j=0 to c2:
          For k=0 to c1:
              result[i][j] += A[i][k] * B[k][j]
7. Display result
8. End

----------------------------------------------------

Program 4: Sum of Diagonal Elements
-----------------------------------
**Theory**:
Diagonal elements in a square matrix are those where row index equals column index (i==j). This program sums those elements.

**Procedure**:
1. Input dimensions (should be a square matrix).
2. Input elements.
3. Loop to check if i==j and sum the elements.
4. Display result.

**Algorithm**:
1. Start
2. Input r and c
3. Input matrix A[r][c]
4. Initialize sum = 0
5. For i = 0 to r:
     For j = 0 to c:
         If i==j, sum += A[i][j]
6. Display sum
7. End

----------------------------------------------------

Program 5: Transpose of a Matrix
--------------------------------
**Theory**:
Transpose of a matrix is formed by interchanging rows and columns. i.e., transpose[j][i] = original[i][j]

**Procedure**:
1. Input matrix dimensions.
2. Input elements.
3. Use nested loop to assign transpose[j][i] = original[i][j]
4. Display transposed matrix.

**Algorithm:**
1. Start
2. Input r and c
3. Input matrix A[r][c]
4. Declare matrix B[c][r]
5. For i = 0 to r:
     For j = 0 to c:
         B[j][i] = A[i][j]
6. Display B
7. End

----------------------------------------------------
**Conclusion**:
This experiment demonstrates basic operations on matrices including display, addition, multiplication, diagonal sum, and transpose using C++ arrays and loops.

****************************************************
