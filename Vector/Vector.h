// Created by Sebastian A. Vico Guzman

#ifndef ATS_COURSE_VECTOR_H
#define ATS_COURSE_VECTOR_H

#include <iostream>

template <typename T>
class Vector {
private:
    int size = 0;
    T* data = nullptr;

public:
    Vector(int size);

    void defaultInitializerVector();

    void printVector();

    T addElements();

    void fillVectorByUser();

    ~Vector();
};

/**
 * @brief Parameterized Constructor
 * @tparam T
 * @param size
 */
template<typename T>
Vector<T>::Vector(int size) {
    this->size = size;
    data = new T[size];

    defaultInitializerVector();
}

/**
 * @brief Default Initializer vector
 * @tparam T
 */
template <typename T>
void Vector<T>::defaultInitializerVector() {
    for (int i = 0; i < size; ++i){
        data[i] = 0;
    }
}

/**
 * @brief Print vector by screen
 * @tparam T
 */
template <typename T>
void Vector<T>::printVector() {
    for (int i = 0; i < size; ++i){
        std::cout << data[i] << " ";
    }
}

/**
 * @brief Add all vector's elements
 * @tparam T
 */
template <typename T>
T Vector<T>::addElements() {
    T counter = 0;
    for (int i = 0; i < size; ++i){
        counter += data[i];
    }

    return counter;
}

template <typename T>
void Vector<T>::fillVectorByUser() {
    for (int i = 0; i < size; ++i){
        std::cout << "Inser data [" << i << "]: " << std::endl;
        std::cin >> data[i];
    }
}


/**
 * @brief Destructor
 * @tparam T
 */
template<typename T>
Vector<T>::~Vector() {
    delete[] data;
}

#endif //ATS_COURSE_VECTOR_H
