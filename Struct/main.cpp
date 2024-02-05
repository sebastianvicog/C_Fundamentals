//
// Created by Sebastián Vico Guzmán
//
#include <iostream>

using namespace std;

//Example of the use of a structure. Declaration here.
struct Person {
    char name[20];
    int age;
}
person1 = {"Sebastian", 23},
person2 = {"Alex", 15},
person3;


int main(){
    //Example of the use of a structure. Declaration in the struct.
    cout << "Name1: " << person1.name << endl;
    cout << "Age1: " << person1.age << endl;
    cout << "Name2: " << person2.name << endl;
    cout << "Age2: " << person2.age << endl;

    cout << "Type the name of person3: ";
    cin.getline(person3.name,20,'\n');
    cout << "Type the age of person3: ";
    cin >> person3.age;

    cout << "Name3: " << person3.name << endl;
    cout << "Age3: " << person3.age << endl;

    struct Person person4 = {"Maria", 23};

    cout << "Name4: " << person4.name << endl;
    cout << "Age4: " << person4.age << endl;

}
