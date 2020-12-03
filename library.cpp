/*-----------------------------------------------------------------------------------
Filename       : main.cpp
Authors        : Maëlle Vogel and Tobie Praz
Creation date  : 01.12.2020
Description    : This library provides functions to:
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
#include "library.h"

#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <numeric>
#include <chrono>
#include <random>

using namespace std;


//-------------------------------------------------------------------
//    VECTOR 1D or 2D
//-------------------------------------------------------------------
string commaJoin_int(const string &a, int b) {
    return a + ", " + to_string(b);
}

string commaJoin_string(const string &a, const string &b) {
    return a + ", " + b;
}

string vecToString(const IntVector &v) {
    string vec;
    if(!v.empty()) vec = accumulate(next(v.begin()), v.end(), to_string(v[0]), commaJoin_int);
    return "(" + vec + ")";
}

ostream &operator<<(ostream &os, const IntVector &v) {
    cout << vecToString(v);
    return os;
}

ostream &operator<<(ostream &os, const IntMatrix &m) {
    vector<string> strings(m.size());
    transform(m.begin(), m.end(), strings.begin(), vecToString);
    string mat;
    if(!strings.empty()) mat = accumulate(next(strings.begin()), strings.end(), strings[0], commaJoin_string);

    cout << "[" << mat << "]";
    return os;
}

//----------------------------------------------------------------
int vecSize(const IntVector &v) {
    return v.size();
}

bool isRegular(const IntMatrix &matrix) {
    auto size = matrix.size();
    if(size) {
        IntVector sizes(size);
        transform(matrix.begin(), matrix.end(), sizes.begin(), vecSize);

        return count(sizes.begin(), sizes.end(), sizes[0]) == size;
    }

    return true;
}

bool isSquare(const IntMatrix &matrix) {
    return matrix.empty() || isRegular(matrix) && matrix[0].size() == matrix.size();
}

//------------------------------------------------------------------
int maxCol(const IntMatrix &matrix) {
    IntVector sizes(matrix.size());
    transform(matrix.begin(), matrix.end(), sizes.begin(), vecSize);

    return *max_element(sizes.begin(), sizes.end());
}

//-----------------------------------------------------------------
int sum(const IntVector &v) {
    return accumulate(v.begin(), v.end(), 0);
}

IntVector lineSum(const IntMatrix &matrix) {
    IntVector result(matrix.size());
    transform(matrix.begin(), matrix.end(), result.begin(), sum);

    return result;
}

IntVector vectMinSum(const IntMatrix &matrix) {
    IntVector sum = lineSum(matrix);
    int i = min_element(sum.begin(), sum.end()) - sum.begin();

    return matrix[i];
}

//----------------------------------------------------
void shuffleMatrix(IntMatrix &matrix) {
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    shuffle(matrix.begin(), matrix.end(), default_random_engine(seed));
}


bool comparator(IntVector a, IntVector b) {
    return max_element(a.begin(), a.end()) > max_element(b.begin(), b.end());
}

void sortMatrix(IntMatrix &matrix) {
    sort(matrix.begin(), matrix.end(), comparator);
}

//----------------------------------------------------------------
bool diagRLSum(const IntMatrix &matrix, int &result) {
    result = 0;
    if (isSquare(matrix)) {
        for (size_t i = 0; i < matrix.size(); ++i) {
            result += matrix[i][matrix.size() - i - 1];
        }
        return true;
    }
    return false;
}


bool diagLRSum(const IntMatrix &matrix, int &result) {
    result = 0;
    if (isSquare(matrix)) {
        for (size_t i = 0; i < matrix.size(); ++i) {
            result += matrix[i][i];
        }
        return true;
    }
    return false;
}


