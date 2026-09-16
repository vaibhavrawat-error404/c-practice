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
    student s1;
    string n;
    
    cout << "Enter name and roll number: "<<endl;
    cin>>n>>r;

    s1.setdata(n,r);
    s1.getdata();
    return 0;
}