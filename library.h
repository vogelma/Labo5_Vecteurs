//
// Created by Maëlle on 01.12.2020.
//

#ifndef LABO5_VECTEURS_LIBRARY_H
#define LABO5_VECTEURS_LIBRARY_H
#include <string>
#include <vector>

using namespace std;

using IntVector = vector<int>;
using IntMatrix = vector<IntVector>;

ostream& operator << (ostream &os, const IntVector &v);
ostream& operator << (ostream &os, const IntMatrix &m);

bool isSquare(const IntMatrix &matrix);

bool isRegular(const IntMatrix &matrix);

int maxCol(const IntMatrix &matrix);

IntVector lineSum(const IntMatrix &matrix);

IntVector vectMinSum(const IntMatrix &matrix);

void shuffleMatrix(IntMatrix &matrix);

void sortMatrix(IntMatrix &matrix);

//Left to right
bool diagLRSum(const IntMatrix &matrix, int &result);

//Right to left
bool diagRLSum(const IntMatrix &matrix, int &result);

#endif //LABO5_VECTEURS_LIBRARY_H
