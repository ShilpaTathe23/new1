//Write a program to create student class with data members rollno, marks1,mark2,mark3.
//Accept data (acceptInfo()) and display  using display member function.
//Also display total,percentage and grade.

#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int rollNo;
    float marks1, marks2, marks3;

public:
    void acceptInfo() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Marks for Subject 1: ";
        cin >> marks1;
        cout << "Enter Marks for Subject 2: ";
        cin >> marks2;
        cout << "Enter Marks for Subject 3: ";
        cin >> marks3;
    }


    void display() {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks for Subject 1: " << marks1 << endl;
        cout << "Marks for Subject 2: " << marks2 << endl;
        cout << "Marks for Subject 3: " << marks3 << endl;

        float totalMarks = marks1 + marks2 + marks3;
        float percentage = (totalMarks / 300) * 100;

        cout << "Total Marks: " << totalMarks << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        
        char grade;
        if (percentage >=99)
            grade = 'A';
        else if (percentage >= 70)
            grade = 'B';
        else if (percentage >= 60)
            grade = 'C';
        else if (percentage >= 50)
            grade = 'D';
        else
            grade = 'F';

        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student student;
    student.acceptInfo();
    cout << "\nStudent Information:\n";
    student.display();

    return 0;
;}
