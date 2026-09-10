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

void displayStudent(int marks[], int size) {
    for(int i = 0; i < size; i++) {
        cout << marks[i] << " ";
    }
}

int main() {

    Student s1;
    s1.name = "Vibhu";
    s1.studentClass = "B.Tech";
    s1.roll = 21;
    s1.age = 20;

    int temp[5] = {90, 80, 70, 60, 50};
    for(int i = 0; i < 5; i++) {
        s1.marks[i] = temp[i];
    }

    displayStudent(s1.marks, 5);
    displayStudent(s1, 5);

    return 0;
}