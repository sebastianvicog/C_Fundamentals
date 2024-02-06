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

// [2.] To do a struct named student1 with these fields: Name, Age, Average.
// Request data from the user for three students and check which of the students has the best average. Print his data.
struct Student {
    char name[20];
    int age;
    float average;
} students[3];

// [3.] To do a program that reads an array of structures with the data of N employees of the company and prints the data of the employee which the highest and lowest salary.
struct CompanyEmployee {
    char name[20];
    int age;
    float salary;
};

//[4.] To do an array (SIZE N) of athletes with these fields: Name, Country, MedalNumber and print (name, country) of the athlete who has won the most medals.
struct Athlete{
    char name[20];
    char country[15];
    int medalsNumber;
}athletes[100];

// [5.] To do two structures. A structure called Average with these data: exam1, exam2, exam3.
//      And a structure called student2 with these data: name, gender, age.
//      To do that first structure be nested in the second one. Then ask all the data for one student1. Calculate his average and print all the data.
struct Average{
    float exam1;
    float exam2;
    float exam3;
};

struct Student2{
    char name[20];
    char gender[15];
    int age;
    struct Average studentAverage;
} student1;

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
/*
    float bestAverage = 0;
    int bestStudentPosition;

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
    //Calculating the best student1
    for (int i = 0; i < 3; ++i){
        if (students[i].average > bestAverage){
            bestAverage = students[i].average;
            bestStudentPosition = i;
        }
    }
    //Printing data of best student1
    cout << "\nThe student1 who has best average is: " << endl;
    cout << "Name: " << students[bestStudentPosition].name << endl;
    cout << "Age: " << students[bestStudentPosition].age << endl;
    cout << "Average: " << students[bestStudentPosition].average;
*/

// [3.] N Company employees
/*
    //Asking employees number
    int n;
    cout << "Type employees number: ";
    cin >> n;

    struct CompanyEmployee companyEmployee[n];

    //Filling data
    for (int i = 0; i < n; ++i){
        fflush(stdin);
        cout << "Name: ";
        cin.getline(companyEmployee[i].name, 20, '\n');
        cout << "Age: ";
        cin >> companyEmployee[i].age;
        cout << "Salary: ";
        cin >> companyEmployee[i].salary;
        cout << endl;
    }

    double highestSalary = 0, lowestSalary = 10000;
    int bestSalaryPosition, worstSalaryPosition;

    //Calculating the best and the worst salary
    for (int i = 0; i < n; ++i){
        if (companyEmployee[i].salary > highestSalary){
            highestSalary = companyEmployee[i].salary;
            bestSalaryPosition = i;
        }
        if (companyEmployee[i].salary < lowestSalary){
            lowestSalary = companyEmployee[i].salary;
            worstSalaryPosition = i;
        }
    }

    //Printing data
    cout << "\nThe employee with the best salary is: " << endl;
    cout << "Name: " << companyEmployee[bestSalaryPosition].name << endl;
    cout << "Salary: " << companyEmployee[bestSalaryPosition].salary << endl;

    cout << "\nThe employee with the worst salary is: " << endl;
    cout << "Name: " << companyEmployee[worstSalaryPosition].name << endl;
    cout << "Salary: " << companyEmployee[worstSalaryPosition].salary << endl;
*/

// [4.] N Athletes
/*
    int n, moreMedals = 0, moreMedalsAthletePos;
    //Asking athletes number
    cout << "Type athletes number: ";
    cin >> n;

    //Filling data
    for (int i = 0; i < n; ++i){
        fflush(stdin);
        cout << "Name: ";
        cin.getline(athletes[i].name, 20, '\n');
        cout << "Country: ";
        cin.getline(athletes[i].country, 15, '\n');
        cout << "Medals number: ";
        cin >> athletes[i].medalsNumber;

        //Calculating the athlete who has won the most medals
        if (athletes[i].medalsNumber > moreMedals){
            moreMedals = athletes[i].medalsNumber;
            moreMedalsAthletePos = i;
        }
        cout << endl;
    }

    //Printing data
    cout << "The athlete who has won more medals is: " << endl;
    cout << "Name: " << athletes[moreMedalsAthletePos].name << endl;
    cout << "Country: " << athletes[moreMedalsAthletePos].country << endl;
*/

// [5.] One student1
    float average;

    //Filling data
    cout << "Name: ";
    cin.getline(student1.name, 20, '\n');
    cout << "Gender: ";
    cin.getline(student1.gender, 15, '\n');
    cout << "Age: ";
    cin >> student1.age;
    cout << "Exam mark 1: ";
    cin >> student1.studentAverage.exam1;
    cout << "Exam mark 2: ";
    cin >> student1.studentAverage.exam2;
    cout << "Exam mark 3: ";
    cin >> student1.studentAverage.exam3;

    //Calculating the average
    average = (student1.studentAverage.exam1 + student1.studentAverage.exam2 + student1.studentAverage.exam3) / 3;

    //Printing data
    cout << "\nStudent Data: " << endl;
    cout << "Name: " << student1.name << endl;
    cout << "Gender: " << student1.gender << endl;
    cout << "Age: " << student1.age << endl;
    cout << "Average: " << average << endl;

}
