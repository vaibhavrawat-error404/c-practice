#include<bits/stdc++.h>
using namespace std;    

class Hero{
    private:
    int health;

    public:
    char level; 
    char *name; //dynamic memory allocation
    
    Hero(){
        name=new char[100];//used to allocate memory in heap
    }

    void setName(char name[]){
        strcpy(this->name,name);//used to copy the name into the name variable of the class
    }

    void setHealth(int health){
        this->health=health;//used to set the health of the hero
    }
+
    void setLevel(char level){
        this->level=level;//used to set the level of the hero
    }

    void print(){
        cout<<"Name: "<<this->name<<endl;
        cout<<"Level: "<<this->level<<endl;
        cout<<"Health: "<<this->health<<endl;
    }
};

int main(){
    Hero hero1;
    char name[70]="Babbar";//used to store the name of the hero
    name[0]='G';//used to change the first character of the name to 'G'

    hero1.setName(name);
    hero1.setLevel('A');
    hero1.setHealth(100);
    hero1.print();

    cout<<endl;

    Hero hero2(hero1);//copy constructor called
    hero2.print();
}