//
// Created by Sebastián Alberto Vico Guzmán
//

#include <iostream>
#include <string.h>

using namespace std;

int main(){

// Introduction: char
/*
    char n1[] = "Sebastian";
    cout << n1 << endl;
*/

// Save a user inserted char
/*
    char n2[10];
    cout << "Insert your name: ";
    //cin >> n2; //First method
    //gets(n2); //Second method
    cin.getline(n2, 20, '\n');

    cout << "\nDisplay your name: " << n2 << endl;
*/


// Length of a string: strlen()
/*
    char word[] = "hello";
    int length = 0;

    length = strlen(word);

    cout << "Word: " << word << " length is " << length << endl;
*/

// [1.] Request the user to type a string of characters.
//      Check the length and if it is longer than 10 characters display it on the screen, else do not display it.
/*
    char v1[100];
    int length1;

    cout << "Type a string: ";
    cin.getline(v1,100, '\n');

    length1 = strlen(v1);

    if (length1 > 10){
        cout << "\nThe string is: "<< v1 << endl;
    }
*/

// Copy the contents of one string to another: strcpy
    char n3[] = "Hello";
    char n4[50];

    strcpy(n4,n3);

    cout << n4 << endl;


    return 0;
}