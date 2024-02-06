//
// Created by Sebastián Vico Guzmán
//
#include <iostream>
#include <stdio.h>
#include <string.h>

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

// [1.] To do a struct named runner with these fields: Name, Age, gender, club and competition category which can be juvenile (<=18), senior(<=40) or veteran(>40).
struct Runner {
    char name[30];
    int age;
    char gender[10];
    char club[20];
} runner1;

// [2.] To do a struct named student with these fields: Name, Age, Average.
// Request data from the user for three students and check which of the students has the best average. Print his data.
struct Student {
    char name[20];
    int age;
    float average;
} students[3];

int main(){
/*
// Example 1. Use of a structure. Declaration in the struct.
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
/*
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
        fflush(stdin); //Empty the buffer and enable typing of values
        cout << "Name: " << employees[i].name;
        cout << " Address: " << employees[i].employeeAddress.address;
        cout << " City: " << employees[i].employeeAddress.city;
        cout << " Province: " << employees[i].employeeAddress.province;
        cout << " Salary: " << employees[i].salary;
        cout << endl;
    }
*/

// [1.] One Runner
/*
    char category[20];

    //Filling data:
    cout << "Name: ";
    cin.getline(runner1.name, 30, '\n');
    cout << "Age: ";
    cin >> runner1.age;
    fflush(stdin); //Empty the buffer and enable typing of values
    cout << "Gender: ";
    cin.getline(runner1.gender,10,'\n');
    cout << "Club: ";
    cin.getline(runner1.club, 20, '\n');

    if (runner1.age <= 18){
        strcpy(category, "Juvenile");
    } else if (runner1.age <= 40){
        strcpy(category, "Senior");
    } else {
        strcpy(category, "Veteran");
    }

    //Printing data
    cout << "\nRunner Data " << endl;
    cout << "Name: " << runner1.name << endl;
    cout << "Age: " << runner1.age << endl;
    cout << "Gender: " << runner1.gender << endl;
    cout << "Club: " << runner1.club << endl;
    cout << "Category: " << category << endl;
*/

// [2.] Three Students
    float bestAverage = 0;
    int positionBestStudent;

    //Filling data
    for (int i = 0; i < 3; ++i){
        fflush(stdin); //Empty the buffer and enable typing of values
        cout << "Name: ";
        cin.getline(students[i].name, 20, '\n');
        cout << "Age: ";
        cin >> students[i].age;
        cout << "Average: ";
        cin >> students[i].average;
        cout << endl;
    }
    //Calculating the best student
    for (int i = 0; i < 3; ++i){
        if (students[i].average > bestAverage){
            bestAverage = students[i].average;
            positionBestStudent = i;
        }
    }
    //Printing data of best student
    cout << "\nThe student who has best average is: " << endl;
    cout << "Name: " << students[positionBestStudent].name << endl;
    cout << "Age: " << students[positionBestStudent].age << endl;
    cout << "Average: " << students[positionBestStudent].average;

}
