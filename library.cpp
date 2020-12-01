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

int maxCol(const IntMatrix &matrix){

}

IntVector lineSum(const IntMatrix &matrix){
IntVector vRes;

}

IntVector vectMinSum(const IntMatrix &matrix){

}

//----------------------------------------------------
void shuffleMatrix(IntMatrix &matrix){
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    shuffle (matrix.begin(), matrix.end(), default_random_engine(seed));
}

//----------------------------------------------------------------
//Left to right
bool diagLRSum(const IntMatrix &matrix, int &result){
    for (size_t i=0; i < matrix.size(); ++i) {
        result += matrix[i][matrix.size() - i - 1];
    }
    return true;
}

//Right to left
bool diagRLSum(const IntMatrix &matrix, int &result){
    for (size_t i=0; i < matrix.size(); ++i) {
        result += matrix[i][i];
    }
    return true;
}


