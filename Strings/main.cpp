//
// Created by Sebastián Vico Guzmán
//

#include <iostream>
#include <string.h>
#include <stdlib.h>

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
/*
    char n3[] = "Hello";
    char n4[50];

    strcpy(n4,n3);

    cout << n4 << endl;
*/

// [2.] Request the user to type a string of characters.
//      Store in a char and then copy all its content to another char
/*
    char v2[100], vResult[100];

    cout << "Type a string please: ";
    cin.getline(v2, 100, '\n');

    strcpy(vResult,v2);

    cout << "\nThe string typed by user is: " << vResult << endl;
*/

// Compare two strings
/*
    char n5[] = "Hello";
    char n6[] = "Hello";
    int equals = 0; //Strings are equals

   equals = strcmp(n5, n6);

   if (equals == 0){
       cout << "Strings are equals";
   } else {
       cout << "Strings are not equals";
   }
*/

// [3.] Ask the user to type 2 strings and indicate if both strings are equal,
//      if strings are not equals indicate which is alphabetically greater.
/*
    char v3a[100], v3b[100];
    int equals = 0; //Strings are equals

    cout << "Type a string: ";
    cin.getline(v3a, 100, '\n');
    cout << "Type another string: ";
    cin.getline(v3b, 100, '\n');

    equals = strcmp(v3a, v3b);

    if (equals == 0){
        cout << "Both words are the same" << endl;
    } else if (equals > 0) {
        cout << v3a << " is alphabetically greater than " << v3b << endl;
    } else {
        cout << v3a << " is alphabetically less than " << v3b << endl;
    }
*/

// Concatenate two strings
/*
    char n7[] = "This is an ";
    char n8[] = "example string ";
    char n9[100];

    strcpy(n9, n7);

    strcat(n9, n8);

    cout << n9 << endl;
*/

// [4.] Create a string than have the phrase: Hi! How are you?.
//      Then create another string to ask the user for their name.
//      Finally, add the name at the end of the first string and print the whole message.
/*
    char v4a[] = "Hi! How are you? ";
    char v4b[100];

    cout << "What is your name? ";
    cin.getline(v4b, 100, '\n');

    strcat(v4a, v4b);
    cout << v4a << endl;
*/

// Reverse a string
/*
    char n10[] = "Hello";

    strrev(n10);
    cout << n10 << endl;
*/

// [5.] Make a program that determines if a word is palindrome.
/*
    char v5[100], v5pal[100];

    cout << "Please type a word: ";
    cin.get(v5,100,'\n');

    strcpy(v5pal, v5);

    strrev(v5pal);

    if (strcmp(v5, v5pal) == 0){
        cout << "The word " << v5 << " is palindrome";
    } else {
        cout << "The word " << v5 << " is not palindrome";
    }
*/

// Change a word to capital letters
/*
    char n11[] = "Sebastian";

    strupr(n11);
    cout << n11 << endl;
*/

// [6.] Change two strings to capital letters. Compare them and print if they are the same word.
/*
    char v6a[100], v6b[100];
    cout << "Type a string: ";
    cin.getline(v6a, 100, '\n');
    cout << "Type another string: ";
    cin.getline(v6b, 100, '\n');

    strupr(v6a);
    strupr(v6b);

    if (strcmp(v6a, v6b) == 0 ){
        cout << "Both strings are the same";
    } else {
        cout << "This two words are different";
    }
*/

// Change a word to lower case
/*
    char n12[] = "SEBASTiAn";

    strlwr(n12);
    cout << n12 << endl;
*/

// [7.] Ask for the user's name in capital letters. If their name begins with the letter A, convert it to lower case. Else do not convert it to lower case.
/*
    char v7[100];

    cout << "Type your name in capital letters:  ";
    cin.getline(v7, 100, '\n');

    if (strncmp(v7, "A", 1)==0){
        strlwr(v7);
    }

    cout << "Your name is: " << v7 << endl;
*/

// Change a string to a number (int / float)
/*
    char n13[] = "123";
    char n14[] = "1234.123";
    int intNumber;
    float floatNumber;

    intNumber = atoi(n13);
    floatNumber = atof(n14);

    cout << intNumber << endl;
    cout << floatNumber << endl;
*/

// [8.] Ask the user for an int string and a float string. Convert them to their respective values and finally make their sum
/*
    char v8a[10], v8b[10];

    cout << "Type an int number: ";
    cin.getline(v8a, 10, '\n');

    cout << "Type a float number: ";
    cin.getline(v8b, 10, '\n');

    float sum = atoi(v8a) + atof(v8b);

    cout << "The sum is: " << sum << endl;
*/

// [9.] Make a program that reads of standard input a string and print how many occurrences of each vocal exist in the string.
/*
    char v9[30];
    int contA = 0, contE = 0, contI = 0, contO = 0, contU = 0;

    cout << "Type a phrase: ";
    cin.getline(v9, 30, '\n');

    for (int i = 0; i < 30; i++){
        switch (v9[i]) {
            case 'a':
                contA++;
                break;
            case 'e':
                contE++;
                break;
            case 'i':
                contI++;
                break;
            case 'o':
                contO++;
                break;
            case 'u':
                contU++;
                break;
        }
    }

    cout << "vocal a: " << contA << endl;
    cout << "vocal e: " << contE << endl;
    cout << "vocal i: " << contI << endl;
    cout << "vocal o: " << contO << endl;
    cout << "vocal u: " << contU << endl;
*/

    return 0;
}