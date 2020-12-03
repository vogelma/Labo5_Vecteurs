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
 * @param matrix: the matrix to analyse
 * @return True if the matrix is a square,
 *         false if not
 */
bool isSquare(const IntMatrix &matrix);

/**
 * Is the matrix regular ? (All lines same size)
 * @param matrix: the matrix to check
 * @return True if the matrix is regular,
 *         false if not
 */
bool isRegular(const IntMatrix &matrix);

/**
 * Returns the size of the longest vector of a matrix
 * @param matrix: the matrix to analyse
 * @return Longest line size
 */
int maxCol(const IntMatrix &matrix);

/**
 * Returns a vector containing the sum of the values of each lines.
 * @param matrix: the matrix containing the vectors to sum
 * @return Vector of all line sums
 */
IntVector lineSum(const IntMatrix &matrix);

/**
 * Returns the vector of a matrix with the lowest sum of values.
 * If several vectors have the same sum, the function returns the one with the lowest index
 * @param matrix: the matrix to analyse
 * @return Line with smallest sum
 */
IntVector vectMinSum(const IntMatrix &matrix);

/**
 * Shuffles the vectors of a matrix without changing the vectors
 * @param matrix: the matrix to shuffle
 */
void shuffleMatrix(IntMatrix &matrix);

/**
 * Sorts a matrix (reverse order of the biggest line element)
 * @param matrix: the matrix to sort
 */
void sortMatrix(IntMatrix &matrix);

/**
 * Computes the left to right diagonal sum and returns true if the matrix is valid (is square)
 * @param matrix: the matrix to sum the diagonal
 * @param result: where left to right diagonal sum will be stored
 * @return True if the diagonal exists,
 *         false if not
 */
bool diagLRSum(const IntMatrix &matrix, int &result);

/**
 * Computes the right to left diagonal sum and returns true if the matrix is valid (is square)
 * @param matrix: the matrix to sum the diagonal
 * @param result: where right to left diagonal sum will be stored
 * @return True if the diagonal exists,
 *         false if not
 */
bool diagRLSum(const IntMatrix &matrix, int &result);

#endif //LABO5_VECTEURS_LIBRARY_H
