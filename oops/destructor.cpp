#include<bits/stdc++.h>
using namespace std;

class Student{
    private:
    int rollno;

    public:
    char* name;//dynamic memory allocation

    Student(){
        name=new char[100];//used to allocate memory in heap
        cout<<"Constructor Called:"<<endl;
    }

    void setname(const char* name){//used to set the name of the student
        strcpy(this->name,name);
    }

    void setrollno(int rollno){//used to set the roll number of the student
        this->rollno=rollno;
    }

    void print(){//used to print the name and roll number of the student
        cout<<"Name: "<<this->name<<endl;
        cout<<"Roll No: "<<this->rollno<<endl;
    }
    ~Student()//destructor to free the memory allocated for name
    {
        delete[] name;
        cout << "Destructor Called" << endl;
    }
};

int main(){
    Student s1;//object of class student created
    Student s2;
    Student s3;
    Student s4;
    Student s5;
    cout<<endl;
    s1.setname("Lucky");//used to set the name of the student
    s1.setrollno(1);//used to set the roll number of the student

    s2.setname("Kitto");
    s2.setrollno(2);

    s3.setname("Deva");
    s3.setrollno(3);

    s4.setname("Eve");
    s4.setrollno(4);

    s5.setname("Frank");
    s5.setrollno(5);

    s1.print();//used to print the name and roll number of the student
    cout<<endl;
    s2.print();
    cout<<endl;
    s3.print();
    cout<<endl;
    s4.print();
    cout<<endl;
    s5.print();
    cout<<endl;
}