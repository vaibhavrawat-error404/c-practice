#include<bits/stdc++.h>

using namespace std;

int main(){
    string name;
    int marks;
    getline(cin,name);
    cout<<"Your name is:\n"<<name;

    cout<<"Enter your marks to assess your grades:\n";
    cin>>marks;

    if(marks==0){
        cout<<"You are done!!!";
    }
    if(marks<25){
        cout<<"F";
    }
    else if(marks<=44){
        cout<<"E";
    }
    else if(marks<=49){
        cout<<"D";
    }
    else if(marks<=59){
        cout<<"C";
    }
    else if(marks<=79){
        cout<<"B";
    }
    else{
        cout<<"A";
    }
}