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

}

void binarySearch(const int v[], int size, int data){

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
                sequentialSearch(vNumbers, size, data);
                cout << "Sequential Search in a vector: ";
                break;
            case 2:
                binarySearch(vNumbers, size, data);
                cout << "Binary Search in a vector: ";
                break;
            default:
                cout << "No valid option. Please try again";
        }
    } while (option != 0);
}