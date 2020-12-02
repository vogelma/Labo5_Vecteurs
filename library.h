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

ostream &operator<<(ostream &os, const IntVector &v);
ostream &operator<<(ostream &os, const IntMatrix &m);

/**
 * Is the matrix a square ? (N x N)
 * @param matrix
 * @return
 */
bool isSquare(const IntMatrix &matrix);

/**
 * Is the matrix regular ? (All lines same size)
 * @param matrix
 * @return
 */
bool isRegular(const IntMatrix &matrix);

/**
 * @param matrix
 * @return Longest line size
 */
int maxCol(const IntMatrix &matrix);

/**
 *
 * @param matrix
 * @return Vector of all line sums
 */
IntVector lineSum(const IntMatrix &matrix);

/**
 *
 * @param matrix
 * @return Line with smallest sum
 */
IntVector vectMinSum(const IntMatrix &matrix);

/**
 * Shuffle a matrix
 * @param matrix
 */
void shuffleMatrix(IntMatrix &matrix);

/**
 * Sort a matrix (reverse order of the biggest line element)
 * @param matrix
 */
void sortMatrix(IntMatrix &matrix);

/**
 * Compute the left to right diagonal sum and return true if the matrix is valid (is square)
 * @param matrix
 * @param result Left to right diagonal sum
 * @return Is valid
 */
bool diagLRSum(const IntMatrix &matrix, int &result);

/**
 * Compute the right to left diagonal sum and return true if the matrix is valid (is square)
 * @param matrix
 * @param result Right to left diagonal sum
 * @return Is valid
 */
bool diagRLSum(const IntMatrix &matrix, int &result);

#endif //LABO5_VECTEURS_LIBRARY_H
