#include<bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    string studentClass;
    int roll;
    int age;
};

Student displayStudent(Student obj) {
    cout << "Student Name : " << obj.name << endl;
    cout << "Class        : " << obj.studentClass << endl;
    cout << "Roll No.     : " << obj.roll << endl;
    cout << "Age          : " << obj.age << endl;
    return obj;
}

int main() {

    Student s1;
    s1.name = "Vibhu";
    s1.studentClass = "B.Tech";
    s1.roll = 21;
    s1.age = 20;

    Student result = displayStudent(s1);

    cout << "\nReturned object's name: " << result.name << endl;

    return 0;
}