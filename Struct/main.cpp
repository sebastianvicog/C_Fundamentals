//
// Created by Sebastián Vico Guzmán
//
#include <iostream>
#include <stdio.h>

using namespace std;

// Example 1. Use of a structure. Declaration here.
struct Person {
    char name[20];
    int age;
}
person1 = {"Sebastian", 23},
person2 = {"Alex", 15},
person3;

// Example 2. Nested structures
struct AddressInformation {
    char address[30];
    char city[20];
    char province[20];
};

struct Employee {
    char name[20];
    struct AddressInformation employeeAddress; // Here
    double salary;
} employees[2]; // STRUCT ARRAY


int main(){
/*
//Example 1. Use of a structure. Declaration in the struct.
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
*/

// Example 2. Nested structures
    //Filling data:
    for (int i = 0; i < 2; i++){
        cout << "Type your name: ";
        cin.getline(employees[i].name, 20, '\n');
        cout << "Type your address: ";
        cin.getline(employees[i].employeeAddress.address, 30, '\n');
        cout << "Type your city: ";
        cin.getline(employees[i].employeeAddress.city, 20, '\n');
        cout << "Type your province: ";
        cin.getline(employees[i].employeeAddress.province, 20, '\n');
        cout << "Type your salary: ";
        cin >> employees[i].salary;
        cout << endl;
    }

    //Printing data:
    for (int i = 0; i < 2; i++){
        fflush(stdin); // Empty the buffer and enable typing of values
        cout << "Name: " << employees[i].name;
        cout << " Address: " << employees[i].employeeAddress.address;
        cout << " City: " << employees[i].employeeAddress.city;
        cout << " Province: " << employees[i].employeeAddress.province;
        cout << " Salary: " << employees[i].salary;
        cout << endl;
    }

}
