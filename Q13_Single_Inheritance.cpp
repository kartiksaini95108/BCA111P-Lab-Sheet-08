#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age{};

public:
    void inputPersonDetails() {
        cout << "Enter name: ";
        getline(cin >> ws, name);
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPersonDetails() const {
        cout << "Name: " << name << '\n';
        cout << "Age: " << age << '\n';
    }
};

class Student : public Person {
private:
    float marks{};

public:
    void inputStudentDetails() {
        inputPersonDetails();
        cout << "Enter marks: ";
        cin >> marks;
    }

    void displayStudentDetails() const {
        displayPersonDetails();
        cout << "Marks: " << marks << '\n';
    }
};

int main() {
    Student student;
    student.inputStudentDetails();

    cout << "\nStudent Details\n";
    student.displayStudentDetails();
    return 0;
}
