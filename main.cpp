/*-----------------------------------------------------------------------------------
Filename       : main.cpp
Authors        : Maëlle Vogel and Tobie Praz
Creation date  : 01.12.2020
Description    : The program tests each functions created in library.cpp
                  - display a vector
                  - display a matrix
                  - check if a matrix is a square
                  - check if a matrix is regular
                  - return the size of the longest vector
                  - return a vector containing the sum of each vector
                  - return the vector with the smallest sum
                  - shuffle the vector order in the matrix
                  - sort the matrix by the biggest number in a vector
                  - sum the right to left diagonal /
                  - sum the left to right diagonal \
Compiler       : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------*/

#include <cstdlib>
#include <iostream>
#include <limits>
#include <iomanip>
#include "library.h"

using namespace std;

#define EMPTY_BUFFER cin.ignore(numeric_limits<streamsize>::max(), '\n');

int main() {

    //INIT MATRIX
    IntMatrix matrix1 = {{12, 2, 43},
                         {32, 2, 21}};
    IntMatrix matrix2 = {{1, 25, 2},
                         {3, 38, 1},
                         {4, 23, 1}};
    IntMatrix matrix3 = {{16, 2,  2},
                         {3,  34, 17, 5},
                         {4,  43, 1}};

    cout << boolalpha;
    cout << "-------------------------SQUARE-------------------------------------------------------" << endl;
    cout << matrix1 << " is square: " << isSquare(matrix1) << endl;
    cout << matrix2 << " is square: " << isSquare(matrix2) << endl;

    cout << "-------------------------REGULAR------------------------------------------------------" << endl;
    cout << matrix1 << " is regular: " << isRegular(matrix1) << endl;
    cout << matrix2 << " is regular: " << isRegular(matrix2) << endl;
    cout << matrix3 << " is regular: " << isRegular(matrix3) << endl;

    cout << "-------------------------LONGEST VECTOR-----------------------------------------------" << endl;
    cout << matrix2 << " max vector size: " << maxCol(matrix2) << endl;
    cout << matrix3 << " max vector size: " << maxCol(matrix3) << endl;

    cout << "-------------------------SUM-OF-EACH-VECTOR-------------------------------------------" << endl;
    cout << matrix2 << " line sum: " << lineSum(matrix2) << endl;
    cout << matrix3 << " line sum: " << lineSum(matrix3) << endl;

    cout << "-------------------------SMALLEST-VECTOR-SUM------------------------------------------" << endl;
    cout << matrix2 << " vector with min line sum: " << vectMinSum(matrix2) << endl;
    cout << matrix3 << " vector with min line sum: " << vectMinSum(matrix3) << endl;

    cout << "-------------------------SHUFFLE-A-MATRIX---------------------------------------------" << endl;
    cout << matrix1 << " before shuffle" << endl;
    shuffleMatrix(matrix1);
    cout << matrix1 << " after shuffle" << endl;
    cout << matrix2 << " before shuffle" << endl;
    shuffleMatrix(matrix2);
    cout << matrix2 << " after shuffle" << endl;

    cout << "-------------------------SORT-BY-BIGGEST-NUMBER-IN-VECTOR-----------------------------" << endl;
    cout << matrix1 << " before sort" << endl;
    sortMatrix(matrix1);
    cout << matrix1 << " after sort" << endl;

    cout << "-------------------------DIAGONAL-----------------------------------------------------" << endl;
    int resultLR1;
    cout << matrix2 << " diagonal left to right exist: " << diagLRSum(matrix2, resultLR1)
         << ", result " << resultLR1 << endl;

    int resultRL1;
    cout << matrix2 << " diagonal right to left exist: " << diagRLSum(matrix2, resultRL1)
         << ", result " << resultRL1 << endl;

    int resultLR2;
    cout << matrix1 << " diagonal left to right exist: " << diagLRSum(matrix1, resultLR2)
         << ", result " << resultLR2 << endl;
    cout << endl;

    cout << "ENTER FOR EXIT";
    EMPTY_BUFFER
    return EXIT_SUCCESS;
}