//
// Created by sebav on 10/12/2023.
//
#include <iostream>
#include "Vector.h"

using namespace std;

int main (){
    Vector<int> vectorTest(10);
    vectorTest.printVector();

    return 0;
}

/*
 add_executable(ATS_Course
        Matrix/Matrix.h
        Matrix/main.cpp
        Vector/Vector.h
        Vector/main.cpp)
 */