//
// Created by Maëlle on 01.12.2020.
//

#ifndef LABO5_VECTEURS_LIBRARY_H
#define LABO5_VECTEURS_LIBRARY_H

#include <string>
#include <vector>

using namespace std;

using VecteurVector = vector<int>;
using MatriceVector = vector<VecteurVector>;

ostream& operator << (ostream& os, const VecteurVector& v);
ostream& operator << (ostream& os, const MatriceVector& m);


#endif //LABO5_VECTEURS_LIBRARY_H
