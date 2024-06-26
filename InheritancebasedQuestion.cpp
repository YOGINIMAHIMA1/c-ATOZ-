#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Base class Person
class Person {
protected:
    string name;
    int age;

public:
    Person(const string& name, int age) : name(name), age(age) {}

    virtual void getDetails() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class Student
class Student : public Person {
protected:
    int studentId;
    string major;

public:
    Student(const string& name, int age, int studentId)
        : Person(name, age), studentId(studentId) {}

    void setMajor(const string& major) {
        this->major = major;
    }

    string getMajor() const {
        return major;
    }

    void getDetails() const override {
        Person::getDetails();
        cout << "Student ID: " << studentId << endl;
        cout << "Major: " << major << endl;
    }
};

// Derived class Faculty
class Faculty : public Person {
protected:
    string department;
    int employeeId;

public:
    Faculty(const string& name, int age, int employeeId)
        : Person(name, age), employeeId(employeeId) {}

    void setDepartment(const string& department) {
        this->department = department;
    }

    string getDepartment() const {
        return department;
    }

    void getDetails() const override {
        Person::getDetails();
        cout << "Employee ID: " << employeeId << endl;
        cout << "Department: " << department << endl;
    }
};

// Derived class TeachingAssistant
class TeachingAssistant : public Person {
protected:
    vector<string> coursesTeaching;

public:
    TeachingAssistant(const string& name, int age)
        : Person(name, age) {}

    void setCoursesTeaching(const vector<string>& courses) {
        coursesTeaching = courses;
    }

    vector<string> getCoursesTeaching() const {
        return coursesTeaching;
    }

    void getDetails() const override {
        Person::getDetails();
        cout << "Teaching Assistant" << endl;
        cout << "Courses Teaching:";
        for (const auto& course : coursesTeaching) {
            cout << " " << course;
        }
        cout << endl;
    }
};

// Derived class ResearchAssistant
class ResearchAssistant : public Person {
protected:
    string researchArea;
    string supervisor;

public:
    ResearchAssistant(const string& name, int age)
        : Person(name, age) {}

    void setResearchArea(const string& researchArea) {
        this->researchArea = researchArea;
    }

    string getResearchArea() const {
        return researchArea;
    }

    void setSupervisor(const string& supervisor) {
        this->supervisor = supervisor;
    }

    string getSupervisor() const {
        return supervisor;
    }

    void getDetails() const override {
        Person::getDetails();
        cout << "Research Assistant" << endl;
        cout << "Research Area: " << researchArea << endl;
        cout << "Supervisor: " << supervisor << endl;
    }
};

// Derived class GraduateStudentTA
class GraduateStudentTA : public Student, public TeachingAssistant {
public:
    GraduateStudentTA(const string& name, int age, int studentId)
        : Student(name, age, studentId), TeachingAssistant(name, age) {}

    void getDetails() const override {
        Student::getDetails();
        TeachingAssistant::getDetails();
    }
};

int main() {
    // Example usage
    Student student("Alice", 20, 12345);
    student.setMajor("Computer Science");

    Faculty faculty("Dr. Smith", 45, 9876);
    faculty.setDepartment("Physics");

    TeachingAssistant ta("Bob", 25);
    ta.setCoursesTeaching({"Introduction to Programming", "Data Structures"});

    ResearchAssistant ra("Eve", 30);
    ra.setResearchArea("Artificial Intelligence");
    ra.setSupervisor("Dr. Johnson");

    GraduateStudentTA gradTA("Charlie", 26, 67890);
    gradTA.Student::setMajor("Electrical Engineering");
    gradTA.TeachingAssistant::setCoursesTeaching({"Linear Algebra", "Machine Learning"});

    // Printing details
    cout << "Student Details:" << endl;
    student.getDetails();
    cout << endl << "Faculty Details:" << endl;
    faculty.getDetails();
    cout << endl << "Teaching Assistant Details:" << endl;
    ta.getDetails();
    cout << endl << "Research Assistant Details:" << endl;
    ra.getDetails();
    cout << endl << "Graduate Student TA Details:" << endl;
    gradTA.getDetails();

    return 0;
}
