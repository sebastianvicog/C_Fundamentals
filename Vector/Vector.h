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

    T vectorElementsProduct();

    void showAssociatedIndex();

    void printReverseOrder();

    T biggestElement();

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
 * @return counter
 */
template <typename T>
T Vector<T>::addElements() {
    T counter = 0;
    for (int i = 0; i < size; ++i){
        counter += data[i];
    }

    return counter;
}

/**
 * @brief Fill a vector by user
 * @tparam T
 */
template <typename T>
void Vector<T>::fillVectorByUser() {
    for (int i = 0; i < size; ++i){
        std::cout << "Inser data [" << i << "]: " << std::endl;
        std::cin >> data[i];
    }
}

/**
 * @brief Vector's elements product
 * @tparam T
 * @return productory
 */
template <typename T>
T Vector<T>::vectorElementsProduct() {
    T productory = 1.0;

    for (int i = 0; i < size; ++i){
        productory *= data[i];
    }

    return productory;
}

/**
 * @brief Show vector's elements with their associated indexes
 * @tparam T
 */
template <typename T>
void Vector<T>::showAssociatedIndex() {
    int i = 0;
    for (i; i < size; ++i){
        std::cout << "- Index [" << i << "]: " << data[i] << std::endl;
    }
}

/**
 * @breif Print vector in reverse order
 * @tparam T
 */
template <typename T>
void Vector<T>::printReverseOrder() {
    for (int i = (size - 1); i >= 0; i--){
        std::cout << data[i] << " ";
    }
}

/**
 * @brief Print vector's biggest element
 * @tparam T
 * @return biggest
 */
template <typename T>
T Vector<T>::biggestElement() {
    T biggest = -100000;

    for (int i = 0; i < size; ++i){
        if (data[i] > biggest){
            biggest = data[i];
        }
    }

    return biggest;
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
