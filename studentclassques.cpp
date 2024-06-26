/* Scenario:

Imagine you're developing a university management system. You have a base class named Person that stores basic information about individuals associated with the university, such as:

name (string)
id (int)
Question:

Design a class hierarchy using inheritance to represent different types of people within the university. Consider the following categories:

Student: Inherits from Person and has additional attributes like:
major (string)
gpa (double)
A method calculateSemesterGPA(vector<double> grades) that takes a vector of grades (doubles) and calculates the semester GPA.
Faculty: Inherits from Person and has additional attributes like:
department (string)
title (string) - e.g., "Professor", "Lecturer"
A method teachCourse(string courseName) that simulates assigning a faculty member to teach a specific course.
Additional Considerations:

You can introduce further derived classes if you think of more specific roles within the university (e.g., Staff, Administrator).
Think about access specifiers (public, private, protected) for member variables and methods in the base and derived classes.
Consider virtual functions (especially in the context of polymorphism) if there's common functionality that might have different implementations in derived classes.
Guiding Tips:

Focus on code clarity and maintainability.
Use meaningful variable and method names.
Add comments to explain your design choices.
Test your code to ensure it works as expected. */




#include <iostream>
#include <vector>
using namespace std;

class Person {
protected:
    string name;
    int id;

public:
    Person(const string& name, int id) : name(name), id(id) {}

    void display() {
        cout << "Name: " << name << "\nID: " << id << endl;
    }
};

class Student : public Person {
private:
    string major;
    double gpa;

public:
    Student(const string& name, int id, const string& major, double gpa)
        : Person(name, id), major(major), gpa(gpa) {}

    void display() {
        Person::display();
        cout << "Major: " << major << "\nGPA: " << gpa << endl;
    }

    double calculateSemesterGPA(const vector<double>& grades) {
        double sum = 0;
        for (double grade : grades) {
            sum += grade;
        }
        gpa = grades.empty() ? 0 : sum / grades.size();
        return gpa;
    }
};

class Faculty : public Person {
private:
    string department;
    string title;

public:
    Faculty(const string& name, int id, const string& department, const string& title)
        : Person(name, id), department(department), title(title) {}

    void teachCourse(const string& courseName) {
        cout << name << " is assigned to teach " << courseName << "." << endl;
    }

    void display() {
        Person::display();
        cout << "Department: " << department << "\nTitle: " << title << endl;
    }
};

int main() {
    // Create Student object
    Student s("Kavita", 1001, "CS", 6.7);
    s.display();
    vector<double> grades = {3.7, 3.8, 4.0, 3.6};
    cout << "Calculated Semester GPA: " << s.calculateSemesterGPA(grades) << endl;

    // Create Faculty object
    Faculty f("Dr. Smith", 2001, "Physics", "Professor");
    f.display();
    f.teachCourse("Quantum Mechanics");

    return 0;
}













