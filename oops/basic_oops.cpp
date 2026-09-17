#include<bits/stdc++.h>
using namespace std;

class student{
    int rollno;
    string name;

public:
void getdata(){
    cout<<"Name: "<<name<<endl;
    cout<<"Roll Number: "<<rollno<<endl;
}

void setdata(string name1, int rollno1){
    name=name1;
    rollno=rollno1;
}
  
};

int main(){
    student s1,s2;
    string n;
    int r;

    cout << "Enter name and roll number: "<<endl;
    cin>>n>>r;

    s1.setdata(n,r);
    s1.getdata();
    return 0;
}

/*#include <iostream>
#include <string>
using namespace std;

class student {
    int rollno;
    string name;

public:
    void getdata() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollno << endl;
    }

    void setdata(string name1, int rollno1) {
        name = name1;
        rollno = rollno1;
    }
};

int main() {
    string n;
    int r;

    // First student
    cout << "Enter name: ";
    getline(cin, n);
    cout << "Enter roll number: ";
    cin >> r;
    cin.ignore(); // Discard the newline character left behind by cin >> r

    student s1;
    s1.setdata(n, r);
    s1.getdata();

    // Second student
    cout << "Enter name: ";
    getline(cin, n);
    cout << "Enter roll number: ";
    cin >> r;
    cin.ignore(); // Discard the newline character again

    student* s2 = new student();
    s2->setdata(n, r);
    s2->getdata();
    delete s2;

    return 0;
}
    */