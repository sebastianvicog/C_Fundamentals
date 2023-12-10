// Created by Sebastian A. Vico Guzman

#ifndef ATS_COURSE_MATRIX_H
#define ATS_COURSE_MATRIX_H

// Random numbers
#include <stdlib.h>
#include <time.h>

template <typename T>
class Matrix {
private:
    int rows = 0, columns = 0;
    T** data = nullptr;

public:
    Matrix(int rows, int columns);

    Matrix(const Matrix<T> &origMatrix);

    Matrix<T> &operator=(const Matrix<T> &orig);

    void defaultInitializerMatrix();

    void printMatrix();

    void fillMatrixByUser();

    void printMainDiagonal();

    void fillWithRandoms();

    Matrix<T> transposeMatrix();

    Matrix<T> add2Matrix(const Matrix<T> &mat);

    bool squareMatrix();

    bool operator== (const Matrix<T> &mat);

    Matrix<T> product (const Matrix<T> &mat);

    ~Matrix();

};

/**
 * @brief Parameterized Constructor
 * @tparam T
 * @param rows
 * @param columns
 */
template <typename T>
Matrix<T>::Matrix(int rows, int columns) {
    // Assign the parameters to the private variables of the class
    this->rows = rows;
    this->columns = columns;

    // Assign memory for the class
    data = new T*[rows];
    for (int i = 0; i < rows; i++){
        data[i] = new T[columns];
    }

    defaultInitializerMatrix();
}

/**
 * @brief Copy Constructor
 * @tparam T
 * @param orig
 */
template <typename T>
Matrix<T>::Matrix(const Matrix<T> &orig) {
    this->rows = orig.rows;
    this->columns = orig.columns;

    data = new T*[rows];
    for (int i = 0; i < rows; ++i){
        data[i] = new T[columns];
        for (int j = 0; j < columns; ++j){
            // Copy the parameter Matrix into a new Matrix
            data[i][j] = orig.data[i][j];
        }
    }
}

/**
 * @brief Assignment operator
 * @tparam T
 * @param orig
 * @return *this
 */
template <typename T>
Matrix<T> &Matrix<T>::operator=(const Matrix<T> &orig) {
    if (this != &orig){
        this->rows = orig.rows;
        this->columns = orig.columns;

        data = new T*[rows];
        for (int i = 0; i < rows; ++i){
            data = new T[columns];
            for (int j = 0; j < columns; ++j){
                data[i][j] = orig.data[i][j];
            }
        }
    }
    return *this;
}

/**
 * @brief Default Initialize Matrix
 *
 * This function initializes the matrix to 0.
 *
 * @tparam T
 */
template <typename T>
void Matrix<T>::defaultInitializerMatrix() {
    for (int i = 0; i < rows; ++i){
        for (int j = 0; j < columns; ++j){
            data[i][j] = 0;
        }
    }
}

/**
 * @brief Print Matrix
 * @tparam T
 */
template <typename T>
void Matrix<T>::printMatrix() {
    for (int i = 0; i < rows; ++i){
        for (int j = 0; j < columns; ++j){
            std::cout << data[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

/**
 * @brief Fill Matrix by user
 * @tparam T
 */
template<typename T>
void Matrix<T>::fillMatrixByUser() {
    for (int i = 0; i < rows; ++i){
        for (int j = 0; j < columns; ++j){
            std::cout <<  "- Enter a data in [" << i <<"] [" << j << "]" << std::endl;
            std::cin >> data[i][j];
        }
    }
}

/**
 * @brief Print Matrix's Main Diagonal
 * @tparam T
 */
template <typename T>
void Matrix<T>::printMainDiagonal() {
    for (int i = 0; i < rows; ++i){
        for (int j = 0; j < columns; ++j){
            if (i == j) {
                std::cout << data[i][j];
            }
        }
        std::cout << std::endl;
    }
}

/**
 * @brief Fill Matrix with random numbers
 * @tparam T
 */
template <typename T>
void Matrix<T>::fillWithRandoms() {
    srand(time(NULL)); // Generate a random number with time's function

    for (int i = 0; i < rows; ++i){
        for (int j = 0; j < columns; ++j){
            data[i][j] = 1 + rand() % (100+1 - 1); // Lowe limit = 1, Upper limit = 100
        }
    }
}

/**
 * @brief Transpose Matrix
 *
 * Transpose matrix: Column i was row i of the original matrix
 *
 * @tparam T
 */
template <typename T>
Matrix<T> Matrix<T>::transposeMatrix() {
    Matrix<T> transposeMatrix(columns, rows);

    for (int i = 0; i < rows; ++i){
        for (int j = 0; j < columns; ++j){
            transposeMatrix.data[j][i] = data[i][j];
        }
    }
    return transposeMatrix;
}

/**
 * @brief Two matrices add
 * @tparam T
 * @param mat
 * @return result
 */
template <typename T>
Matrix<T> Matrix<T>::add2Matrix(const Matrix<T> &mat) {
    if ((rows != mat.rows) || columns != mat.columns){
        throw std::invalid_argument("The two matrix hasn't got the same dimensions");
    }

    Matrix<T> result(rows, columns);
    for (int i = 0; i < rows; ++i){
        for (int j = 0; j < columns; ++j){
            result.data[i][j] = data[i][j] + mat.data[i][j];
        }
    }

    return result;
}

/**
 * @brief Square Matrix
 * @tparam T
 * @return True/False
 */
template <typename T>
bool Matrix<T>::squareMatrix() {
    if (rows == columns){
        return true;
    } else {
        return false;
    }
}

/**
 * @brief Comparator
 * @tparam T
 * @param mat
 * @return True/False
 */
template <typename T>
bool Matrix<T>::operator==(const Matrix<T> &mat) {
    if ((rows != mat.rows) || columns != mat.columns){
        throw std::invalid_argument("The two matrix hasn't got the same dimensions");
    }

    for (int i = 0; i < rows; ++i){
        for (int j = 0; j < columns; ++j){
            if ( data[i][j] != mat.data[i][j]){
                return false;
            }
        }
    }
    // The matrix are equal
    return true;
}

/**
 * @brief Product of two matrices
 * @tparam T
 * @param mat
 * @return result
 */
template <typename T>
Matrix<T> Matrix<T>::product(const Matrix<T> &mat) {
    if (columns != mat.rows) {
        throw std::invalid_argument("Number of columns in the first matrix must be equal to the number of rows in the second matrix");
    }

    Matrix<T> result(rows, mat.columns);

    for (int i = 0; i < rows; ++i){
        for (int j = 0; j < mat.columns; ++j){
            result.data[i][j] = 0;
            for (int k = 0; k < columns; k++){
                result.data[i][j] += data[i][k] * mat.data[k][j];
            }
        }
    }
    return result;
}

/**
 * @brief Destructor
 * @tparam T
 */
template <typename T>
Matrix<T>::~Matrix() {
    for (int i = 0; i < rows; ++i){
        delete[] data[i];
    }
    delete[] data;
}

#endif //ATS_COURSE_MATRIX_H

