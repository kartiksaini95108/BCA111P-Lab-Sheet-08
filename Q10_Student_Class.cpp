#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo{};
    float marks{};

public:
    void inputDetails() {
        cout << "Enter student name: ";
        getline(cin >> ws, name);
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void displayDetails() const {
        cout << "\nStudent Details\n";
        cout << "Name: " << name << '\n';
        cout << "Roll number: " << rollNo << '\n';
        cout << "Marks: " << marks << '\n';
    }
};

int main() {
    Student student;
    student.inputDetails();
    student.displayDetails();
    return 0;
}
