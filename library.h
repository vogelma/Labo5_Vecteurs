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
 * @return bool
 *         true if the matrix is a square
 *         false if not
 */
bool isSquare(const IntMatrix &matrix);

/**
 * Is the matrix regular ? (All lines same size)
 * @param matrix
 * @return bool
 *         true if the matrix is regular
 *         false if not
 */
bool isRegular(const IntMatrix &matrix);

/**
 * Return the size of the longest vector of a matrix
 * @param matrix
 * @return int: Longest line size
 */
int maxCol(const IntMatrix &matrix);

/**
 * Returns a vector containing the sum of the values of each lines.
 * @param IntMatrix: matrix containing the vectors to sum
 * @return IntVector: Vector of all line sums
 */
IntVector lineSum(const IntMatrix &matrix);

/**
 * Returns the vector of a matrix with the lowest sum of values.
 * If several vectors have the same sum, the function returns the one with the lowest index
 * @param IntMatrix: the matrix to analyse
 * @return IntVector: Line with smallest sum
 */
IntVector vectMinSum(const IntMatrix &matrix);

/**
 * Shuffle the vectors of a matrix without changing the vectors
 * @param IntMatrix: the matrix to shuffle
 */
void shuffleMatrix(IntMatrix &matrix);

/**
 * Sort a matrix (reverse order of the biggest line element)
 * @param IntMatrix: the matrix to sort
 */
void sortMatrix(IntMatrix &matrix);

/**
 * Compute the left to right diagonal sum and return true if the matrix is valid (is square)
 * @param IntMatrix: the matrix to sum the diagonal
 * @param int: result where left to right diagonal sum will be stored
 * @return bool
 *         true if the diagonal exists
 *         false if not
 */
bool diagLRSum(const IntMatrix &matrix, int &result);

/**
 * Compute the right to left diagonal sum and return true if the matrix is valid (is square)
 * @param IntMatrix: the matrix to sum the diagonal
 * @param int: result where right to left diagonal sum will be stored
 * @return bool
 *         true if the diagonal exists
 *         false if not
 */
bool diagRLSum(const IntMatrix &matrix, int &result);

#endif //LABO5_VECTEURS_LIBRARY_H
