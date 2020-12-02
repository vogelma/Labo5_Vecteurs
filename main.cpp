/*-----------------------------------------------------------------------------------
Nom du fichier : main.cpp
Auteur(s)      : Maëlle Vogel et Tobie Praz
Date creation  : 01.12.2020
Description    : <à compléter>
Remarque(s)    : <à compléter>
Compilateur    : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------*/
#include <cstdlib>
#include <iostream>
#include <limits>
#include <iomanip>
#include "library.h"

#define EMPTY_BUFFER cin.ignore(numeric_limits<streamsize>::max(), '\n');
using namespace std;
int main() {

    IntMatrix matrix1 = {{12,2,43}, {32,2,21}};
    IntMatrix matrix2 = {{1,25,2}, {3,38,1}, {4,23,1}};
    IntMatrix matrix3 = {{16,2,2}, {3,34,17,5}, {4,43,1}};

    cout << boolalpha << matrix1 << " is square: " << isSquare(matrix1) << endl;
    cout << matrix2 << " is square: " << isSquare(matrix2) << endl;
    cout << "-------------------------------------" << endl;
    cout << matrix1 << " is regular: " << isRegular(matrix1) << endl;
    cout << matrix2 << " is regular: " << isRegular(matrix2) << endl;
    cout << matrix3 << " is regular: " << isRegular(matrix3) << endl;
    cout << "-------------------------------------" << endl;
    cout << matrix2 << " max vector size: " << maxCol(matrix2) << endl;
    cout << matrix3 << " max vector size: " << maxCol(matrix3) << endl;
    cout << "-------------------------------------" << endl;
    cout << matrix2 << " line sum: " << lineSum(matrix2) << endl;
    cout << matrix3 << " line sum: " << lineSum(matrix3) << endl;
    cout << "-------------------------------------" << endl;
    cout << matrix2 << " vector with min line sum: " << vectMinSum(matrix2) << endl;
    cout << matrix3 << " vector with min line sum: " << vectMinSum(matrix3) << endl;
    cout << "-------------------------------------" << endl;
    cout << matrix1 << endl;
    cout << matrix2 << endl;
    shuffleMatrix(matrix1);
    shuffleMatrix(matrix2);
    cout << matrix1 << endl;
    cout << matrix2 << endl;
    cout << "-------------------------------------" << endl;
    cout << matrix1 << endl;
    sortMatrix(matrix1);
    cout << matrix1 << endl;

    cout << "-------------------------------------" << endl;
    int result;
    cout << matrix2 << " diagonale left to right exist: " << diagLRSum(matrix2, result)  << " result " << result  << endl;
    cout << matrix2 << " diagonale right to left exist: " << diagRLSum(matrix2, result)  << " result " << result  << endl;
    cout << matrix1 << " diagonale left to right exist: " << diagLRSum(matrix1, result)  << " result " << result  << endl;
    cout << "Presser ENTER pour quitter";
    EMPTY_BUFFER
    return EXIT_SUCCESS;
}