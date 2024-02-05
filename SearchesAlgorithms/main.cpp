//
// Created by Sebastián Vico Guzmán
//
#include <iostream>
using namespace std;

/**
 * @brief Sequential/Lineal Search
 * @param v
 * @param size
 */
void sequentialSearch(const int v[], int size, int data){
    char flat = 'F';
    int i = 0;

    while ((flat == 'F') && (i < size)){
        if (v[i] == data){
            flat = 'T';
        }
        ++i;
    }

    if (flat == 'F'){
        cout << endl << "- The number is not in the array" << endl;
    } else {
        cout << endl << "- The number is in the array. Position: " << i-1 << endl;
    }
}

/**
 * @brief Swap Function
 *
 * This function is necessary for the Quick sort function
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
 * @brief Quick Sort
 *
 * This function is necessary for sort the vector. Is required in the binary search.
 *
 * @param vector
 * @param initialPosition
 * @param finalPosition
 */
void quickSort (int vector[], int initialPosition, int finalPosition){
    int i = initialPosition, j = finalPosition;
    int middlePosition, pivot;

    middlePosition = (initialPosition + finalPosition) / 2;
    pivot = vector[middlePosition];

    do {
        while (vector[i] < pivot ) i++; // Iterator i advances
        while (vector[j] > pivot) j--; // Iterator j goes backwards

        if (i <= j){
            swapFunction(vector[i], vector[j]); // Swap data
            i++;
            j--;
        }

    } while(i <= j); // Stopping condition: i == j or j > i

    if (initialPosition < j){
        quickSort(vector, initialPosition, j); // left subset recursive sorting
    }

    if (i < finalPosition){
        quickSort(vector, i, finalPosition); // right subset recursive sorting
    }
}

/**
 * @brief Binary Search
 *
 * It is necessary that the vector be ordered
 *
 * @param v
 * @param size
 * @param data
 */
void binarySearch(const int v[], int size, int data){
    char flat = 'F';
    int lower = 0, upper = size, middle;

    while (lower <= upper){
        middle = (lower + upper)/2;

        if (v[middle] == data){
            flat = 'T';
            break;
        }
        if (v[middle] > data){
            upper = middle;
            middle = (lower + upper)/2;
        }
        if (v[middle] < data){
            lower = middle;
            middle = (lower + upper)/2;
        }
    }

    if (flat == 'F'){
        cout << endl << "- The number is not in the array" << endl;
    } else {
        cout << endl << "- The number is in the array. Position: " << middle << endl;
    }
}

/**
 * @brief Print a vector
 * @param v
 * @param size
 */
void printVector(int v[], int size){
    for (int i = 0; i < size; ++i){
        cout << v[i] << " ";
    }
}


int main(){
    int vNumbers[] = {5, 3, 8, 1, 7, 10, 9, 22, 17, 12};
    int size = 10;
    int data, option;

    cout << "Original vector: ";
    printVector(vNumbers, size);

    cout << "\nPlease type the data to be searched: ";
    cin >> data;

    do {
        cout << endl << "----------Choose a search for data----------" <<endl;
        cout << "[1] Sequential Search" << endl;
        cout << "[2] Binary Search" << endl;
        cout << "[0] EXIT" << endl;
        cin >> option;

        switch (option){
            case 0:
                cout << "Exit";
                break;
            case 1:
                cout << "Sequential Search in a vector ";
                sequentialSearch(vNumbers, size, data);
                break;
            case 2:
                cout << "Ordered vector: ";
                quickSort(vNumbers, 0,size);
                printVector(vNumbers, size);
                cout << endl << "Binary Search in a vector ";
                binarySearch(vNumbers, size, data);
                break;
            default:
                cout << "No valid option. Please try again";
        }
    } while (option != 0);
}