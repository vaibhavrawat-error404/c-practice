#include<bits/stdc++.h>
using namespace std;

class school{
    string name;
    int strength;
    string location;
    public:
    void getdata(){
        cout<<"School Name: "<<name<<endl;
        cout<<"Strength: "<<strength<<endl;
        cout<<"Location: "<<location<<endl;
    }

    school(string name, int strength, string location){
        cout<<"Parametrized Constructor Called"<<endl;  
        this->name=name;
        this->strength=strength;
        this->location=location;
    }

    school(const school &s1){
        cout<<"Copy Constructor Called"<<endl;
        name=s1.name;
        strength=s1.strength;
        location=s1.location;
    }

};

int main(){
    school *s1=new school("ABC School", 500, "New York");
    s1->getdata();

    cout<<endl;

    school *s2=new school("XYZ School", 600, "Los Angeles");
    s2->getdata();

    cout<<endl;

    school *s3=new school(*s1);
    s3->getdata();

}