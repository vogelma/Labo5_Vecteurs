/*-----------------------------------------------------------------------------------
Nom du fichier : main.cpp
Auteur(s)      : Maëlle Vogel et Tobie Praz
Date creation  : 01.12.2020
Description    : <à compléter>
Remarque(s)    : <à compléter>
Compilateur    : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------*/
#include "library.h"

#include <iostream>
#include <string>
#include <limits>
#include <ctime>
#include <cctype>
#include <cassert>
#include <algorithm>
#include <numeric>
#include <chrono>
#include <random>

using namespace std;


//-------------------------------------------------------------------
//    VECTOR 1D or 2D
//-------------------------------------------------------------------
ostream& operator << (ostream &os, const IntVector &v) {
    cout << "(";
    for (size_t i=0; i < v.size(); ++i) {
        if (i)
            os << ", ";
        os << v[i];
    }
    cout << ")";
    return os;
}

//-------------------------------------------------------------------
ostream& operator << (ostream &os, const IntMatrix &m) {
    cout << "[";
    for (size_t i=0; i < m.size(); ++i) {
        if (i)
            os << ", ";
        os << m[i];
    }
    cout << "]";
    return os;
}
//----------------------------------------------------------------

bool isSquare(const IntMatrix &matrix){

}

bool isRegular(const IntMatrix &matrix){

}

//------------------------------------------------------------------
int vecSize(const IntVector &v) {
    return size(v);
}

int maxCol(const IntMatrix &matrix){
    IntVector result;
    transform(matrix.begin(), matrix.end(), result.begin(), vecSize);

    return *min_element(result.begin(), result.end());
}


int sum(const IntVector &v) {
    return accumulate(v.begin(), v.end(), 0);
}

IntVector lineSum(const IntMatrix &matrix) {
    IntVector result;
    transform(matrix.begin(), matrix.end(), result.begin(), sum);

    return result;
}

IntVector vectMinSum(const IntMatrix &matrix){

    IntVector sum = lineSum(matrix);
    int i = min_element(sum.begin(), sum.end()) - sum.begin();

    return matrix[i];

}

//----------------------------------------------------
void shuffleMatrix(IntMatrix &matrix){
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    shuffle (matrix.begin(), matrix.end(), default_random_engine(seed));
}


bool comparator(IntVector a, IntVector b) {
    return max_element(a.begin(), a.end()) < max_element(b.begin(), b.end());
}

void sortMatrix(IntMatrix &matrix){
    sort(matrix.begin(), matrix.end(), comparator);
}

//----------------------------------------------------------------
//Left to right
bool diagLRSum(const IntMatrix &matrix, int &result){
    if(isSquare(matrix)) {
        for (size_t i = 0; i < matrix.size(); ++i) {
            result += matrix[i][matrix.size() - i - 1];
        }

        return true;
    }
    return false;
}

//Right to left
bool diagRLSum(const IntMatrix &matrix, int &result){
    if(isSquare(matrix)) {
        for (size_t i = 0; i < matrix.size(); ++i) {
            result += matrix[i][i];
        }

        return true;
    }
    return false;
}


