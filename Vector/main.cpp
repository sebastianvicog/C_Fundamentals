//
// Created by sebav on 10/12/2023.
//
#include <iostream>
#include "Vector.h"

using namespace std;

int main (){

// [1.] Adds the elements of a vector
/*
    Vector<double> vector1 (5);
    double sumVectorElements;

    vector1.fillVectorByUser();
    vector1.printVector();

    sumVectorElements = vector1.addElements();
    cout << "\nVector elements sum: " << sumVectorElements;
*/


// [2.] Make vector's elements product
/*
    Vector<int> vector2(10);
    int productory;

    vector2.fillVectorByUser();
    vector2.printVector();

    productory = vector2.vectorElementsProduct();
    cout << "\nVector's elements product: " << productory;
*/


// [3.] Show vector's elements with their associated indexes
/*
    Vector<char> vector3(5);
    vector3.fillVectorByUser();
    vector3.showAssociatedIndex();
*/


// [4.] Print vector in reverse order
/*
    Vector<int> vector4(10);
    vector4.fillVectorByUser();
    vector4.printReverseOrder();
*/


// [5.] Print vector's biggest element
/*
    Vector<int> vector5(5);
    int biggest;

    vector5.fillVectorByUser();
    vector5.printVector();

    biggest = vector5.biggestElement();
    cout << "\nVector's biggest element: " << biggest << endl;
*/


// [6.] Determine if a number in a vector is equal to the sum of the rest of the elements contained in the vector
/*
    Vector<int> vector6(5);
    bool flag = false;

    vector6.fillVectorByUser();
    cout << "\nVector: ";
    vector6.printVector();

    flag = vector6.numberEqualSum();

    if (flag == true){
        cout << "\nYes. Exists a number that is equal to vector's sum" << endl;
    } else {
        cout << "\nNo. There is not number that is equal to vector's sum" << endl;
    }
*/

    return 0;
}
