//
// Created by Sebastián Vico Guzmán
//

#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief Bubble Sort
 *
 * Bubble sort is a simple sorting algorithm that repeatedly compares pairs of adjacent items in a list and swaps them if they are in the wrong order.
 *
 * @param vector
 */
void bubbleSort (vector<int>& vector){
    int aux;
    for (int i = 0; i < vector.size(); ++i){
        for (int j = 0; j < vector.size(); ++j){
            if (vector[j] > vector[j+1]){
                aux = vector[j]; // aux = current number
                vector[j] = vector[j+1]; // current number = next number
                vector[j+1] = aux; // next number = aux = current number
            }
        }
    }
}

/**
 * @brief Insertion Sort
 *
 * The fundamental idea behind this algorithm is to divide the list into two parts: an ordered part and an unordered part.
 * As the list is traversed, an element is taken from the unordered part and inserted into the ordered part so that the ordered list continues to be ordered.
 *
 * @param vector
 */
void insertionSort (vector<int>& vector){
    int key, j;
    for (int i = 0; i < vector.size(); ++i){
        j = i - 1;
        key = vector[i];

        while ((j >= 0) && (vector[j] > key)){ // (j >= 0): Cannot be compared with elements of the vector that do not exist.
            vector[j+1] = vector[j];
            j--; // Compare with all elements
        }
        vector[j + 1] = key;
    }
}

/**
 * @brief Print Original Vector
 */
void printOriginalVector(const vector<int>& v){
    for (int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
}

/**
 * @brief Print Vector
 * @param v
 */
void printOrderedVector (const vector<int>& v){
    for (int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
    cout << endl;
}


/**
 * @brief Sorting Algorithms
 * @param v
 * @param option
 */
void sortingAlgorithms (vector<int>& v, int option){
    switch (option){
        case 1:
            bubbleSort(v);
            break;
        case 2:
            insertionSort(v);
            break;
    }
}


int main(){

    vector<int> numbers = {5, 3, 8, 1, 7, 10, 9, 22, 17};
    int option;

    cout << "Original vector: ";
    printOriginalVector(numbers);

    do {
        cout << endl << "\n----------M E N U----------" <<endl;
        cout << "[1] Bubble Sort" << endl;
        cout << "[2] Insertion sort" << endl;

        cout << "[0] EXIT" << endl;
        cin >> option;

        switch (option){
            case 0:
                cout << "Exit";
                break;
            case 1:
                sortingAlgorithms(numbers, option);
                cout << "Sorted vector by bubble sort: ";
                printOrderedVector(numbers);
                break;
            case 2:
                sortingAlgorithms(numbers, option);
                cout << "Sorted vector by insertion sort: ";
                printOrderedVector(numbers);
                break;
            default:
                cout << "No valid option. Please try again";
        }
    } while (option != 0);

}
