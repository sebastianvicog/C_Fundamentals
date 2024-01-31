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
 * @brief Selection Sort
 *
 * The basic idea behind this algorithm is to repeatedly select the smallest of all (or largest, depending on the desired order) items in the unsorted list and swap it with the first (or last) item in the sorted list.
 * This process is repeated until the entire list is sorted.
 *
 * @param vector
 */
void selectionSort(vector<int>& vector){
    int minimum, aux;
    for (int i = 0; i < vector.size(); ++i){
        minimum = i;
        for (int j = i+1; j < vector.size(); ++j){
            if (vector[minimum] > vector[j]){
                minimum = j;
            }
        }
        aux = vector[i];
        vector[i] = vector[minimum];
        vector[minimum] = aux;
    }
}

/**
 * @brief Swap Function
 *
 * This function is necessary for the Shell sort
 *
 * @param x
 * @param y
 */
void swapFunction(int &x, int &y){
    int aux;

    aux = x;
    x = y;
    y = aux;
}

/**
 * @brief Shell Sort
 *
 * The Shell algorithm modifies the contiguous jumps to larger jumps and thus makes the sorting faster.
 * Generally, the initial jump is taken as n / 2 (where n is the number of elements), then in each iteration the jump is reduced by half, until the jump is of size 1.
 *
 * @param vector
 */
void shellSort(vector<int>& vector){
    int jump, i, j, k;
    jump = vector.size() / 2;

    while (jump > 0){
        for (i = jump; i < vector.size(); ++i){
            j = i - jump;
            while (j >= 0){
                k = j + jump;
                if (vector[j] <= vector[k]){ // Pair of elements are ordered
                    j = -1; // Out of the while loop
                } else { // Pair of element are not ordered
                    swapFunction(vector[j],vector[k]);
                    j = j - jump;
                }
            }
        }
        jump = jump / 2;
    }

}

/**
 * @brief Print vector
 * @param v
 */
void printVector(const vector<int>& v){
    for (int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
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
        case 3:
            selectionSort(v);
            break;
        case 4:
            shellSort(v);
            break;
    }
}


int main(){

    vector<int> numbers = {5, 3, 8, 1, 7, 10, 9, 22, 17};
    int option;

    cout << "Original vector: ";
    printVector(numbers);

    do {
        cout << endl << "\n----------M E N U----------" <<endl;
        cout << "[1] Bubble Sort" << endl;
        cout << "[2] Insertion Sort" << endl;
        cout << "[3] Selection Sort" << endl;
        cout << "[4] Shell Sort" << endl;

        cout << "[0] EXIT" << endl;
        cin >> option;

        switch (option){
            case 0:
                cout << "Exit";
                break;
            case 1:
                sortingAlgorithms(numbers, option);
                cout << "Sorted vector by bubble sort: ";
                printVector(numbers);
                break;
            case 2:
                sortingAlgorithms(numbers, option);
                cout << "Sorted vector by insertion sort: ";
                printVector(numbers);
                break;
            case 3:
                sortingAlgorithms(numbers, option);
                cout << "Sorted vector by selection sort: ";
                printVector(numbers);
                break;
            case 4:
                sortingAlgorithms(numbers, option);
                cout << "Sortered vector by Shell Sort: ";
                printVector(numbers);
                break;
            default:
                cout << "No valid option. Please try again";
        }
    } while (option != 0);

}
