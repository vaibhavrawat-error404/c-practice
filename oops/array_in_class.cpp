#include<bits/stdc++.h>
#define MAX 100
using namespace std;

class Student {
public:
    string name;
    string studentClass;
    int roll;
    int age;
    int marks[MAX];
};

void displayStudent(Student s, int size) {
    cout << "Student Name : " << s.name << endl;
    cout << "Class        : " << s.studentClass << endl;
    cout << "Roll No.     : " << s.roll << endl;
    cout << "Age          : " << s.age << endl;
    cout << "Marks        : ";
    for(int i = 0; i < size; i++) {
        cout << s.marks[i] << " ";
    }
    cout << endl;
}



int main() {

    Student s1;
    s1.name = "Vibhu";
    s1.studentClass = "B.Tech";
    s1.roll = 21;
    s1.age = 20;

    for(int i = 0; i < 5; i++) {
        cin>>s1.marks[i];
    }

    displayStudent(s1, 5);

    return 0;
}
