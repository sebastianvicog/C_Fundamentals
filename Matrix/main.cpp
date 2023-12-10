#include <iostream>
#include "Matrix.h"

using namespace std;



int main() {

    try {


// [1.] Fill a matrix by asking the user for the number of rows and columns. Subsequently, display the matrix on the screen.
/*
        int x1,y1;
        cout << "Insert rows and columns number: " << endl;
        cin >> x1 >> y1;

        Matrix<int> myMatrix1(x1,y1);
        myMatrix1.printMatrix();
        myMatrix1.fillMatrixByUser();
        myMatrix1.printMatrix();
*/

//[2.] Define a 3x3 matrix and show its main diagonal
/*
        Matrix<int> myMatrix2(3,3);
        myMatrix2.fillMatrixByUser();

        cout << "\nMatrix: " << endl;
        myMatrix2.printMatrix();

        cout << "\nMain diagonal: " << endl;
        myMatrix2.printMainDiagonal();
*/

// [3.] Define a 2x2 integer type matrix. Fill it with numbers and then copy all its contents to another matrix.
/*
        Matrix<int> myMatrix3(2,2);
        myMatrix3.fillMatrixByUser();
        myMatrix3.printMatrix();

        cout << "\nCopying Matrix..." << endl;
        Matrix<int> myMatrix3Copy(myMatrix3);
        myMatrix3Copy.printMatrix();
*/

// [4.] Fill a matrix with random numbers by asking the user for the number of rows and columns.
//      Then copy all its contents to another matrix and display the matrix on the screen.
/*
        int x2,y2;
        cout << "Insert rows and columns number: " << endl;
        cin >> x2 >> y2;

        Matrix<int> myMatrix4(x2,y2);
        myMatrix4.fillWithRandoms();

        Matrix<int> myMatrix4Copy(myMatrix4);
        myMatrix4Copy.printMatrix();
*/

// [5.] Define a 3x3 Matrix and create its transpose matrix.
/*
        cout << "Original Matrix: " << endl;
        Matrix<int> myMatrix5(3,3);
        myMatrix5.fillWithRandoms();
        myMatrix5.printMatrix();

        cout << "\nTranspose Matrix: " << endl;

        Matrix<int> myMatrix5Transpose = myMatrix5.transposeMatrix();
        myMatrix5Transpose.printMatrix();
*/

// [6.] Calculate the sum of 2 matrix
/*
        cout << "\nMatrix 1: " << endl;
        Matrix<int> myMatrix6a(3,3);
        myMatrix6a.fillWithRandoms();
        myMatrix6a.printMatrix();

        cout << "\nMatrix 2: " << endl;
        Matrix<int> myMatrix6b(3,3);
        myMatrix6b.fillMatrixByUser();
        myMatrix6b.printMatrix();

        cout << "\nSum of two matrix: " << endl;
        Matrix<int> myMatrix6 = myMatrix6b.add2Matrix(myMatrix6a);
        myMatrix6.printMatrix();
*/

// [7.] Determinate if a matrix is symmetric or not
/*
        int x3, y3;
        cout << "Insert rows and columns number: " << endl;
        cin >> x3 >> y3;

        Matrix<int> myMatrix7(x3, y3);
        myMatrix7.fillMatrixByUser();

        // First I determinate if a matrix is square or not:
        if (myMatrix7.squareMatrix()) {
            // Now I determinate if the matrix is equal to its transpose matrix
            if (myMatrix7 == myMatrix7.transposeMatrix()) {
                cout << "\nThe matrix: " << endl;
                myMatrix7.printMatrix();
                cout << "is symmetric" << endl;
            } else {
                cout << "\nThe matrix: " << endl;
                myMatrix7.printMatrix();
                cout << "is not equal to its transpose matrix" << endl;
            }
        } else {
            cout << "\nThe matrix: " << endl;
            myMatrix7.printMatrix();
            cout << "Is not square" << endl;
        }
*/

// [8.] Calculate the product of two square matrices of 3x3

        Matrix<int> myMatrix8a(3,3);
        myMatrix8a.fillMatrixByUser();
        myMatrix8a.printMatrix();

        Matrix<int> myMatrix8b(3,3);
        myMatrix8b.fillMatrixByUser();
        myMatrix8b.printMatrix();

        cout << "\nResult Matrix: " << endl;
        Matrix<int> myMatrix8 = myMatrix8b.product(myMatrix8a);
        myMatrix8.printMatrix();



    } catch (const std::invalid_argument &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}


