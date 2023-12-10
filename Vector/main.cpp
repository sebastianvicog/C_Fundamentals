//
// Created by sebav on 10/12/2023.
//
#include <iostream>
#include "Vector.h"

using namespace std;

int main (){

// [1.] Adds the elements of a vector
    Vector<double> vector1 (5);
    double sumVectorElements = 0;

    vector1.fillVectorByUser();
    vector1.printVector();

    sumVectorElements = vector1.addElements();
    cout << "\nVector elements sum: " << sumVectorElements;

    return 0;
}
