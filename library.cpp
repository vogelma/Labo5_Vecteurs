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
#include <vector>
#include <algorithm>

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


