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
    void setdata(string name, int strength, string location){
        this->name=name;
        this->strength=strength;
        this->location=location;
    }
    school(){
        cout<<"Default Constructor Called"<<endl;
    }

};

int main(){
    school *s1=new school();
    s1->setdata("ABC School", 500, "New York");
    s1->getdata();

    cout<<endl;

    school *s2=new school();
    s2->setdata("XYZ School", 600, "Los Angeles");
    s2->getdata();


}