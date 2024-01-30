//
// Created by Sebastián Vico Guzmán
//

#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief Bubble Sort
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

        cout << "[0] EXIT" << endl;
        cin >> option;

        switch (option){
            case 0:
                cout << "Exit";
                break;
            case 1:
                sortingAlgorithms(numbers, option);
                cout << "Sorted vector: ";
                printOrderedVector(numbers);
                break;
            default:
                cout << "No valid option. Please try again";
        }
    } while (option != 0);

}
