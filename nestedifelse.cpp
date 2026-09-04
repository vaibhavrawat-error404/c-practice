#include<bits/stdc++.h>

using namespace std;
int main(){
    int p=0;
    cout<<"Enter 1 if weather is Cloudy else 2:\n";
    cin>>p;
    if(p==1){
        cout<<"Stay Home, weather is not appropriate to play.\n";
    }
    else if(p==2){
        cout<<"You can play outside\nEnter the number of childrens in park\n";
        cin>>p;
        if(p<2){
            cout<<"Do exersize cause there aren't enough player for group games.";
        }
        else if(p<11){
            cout<<"Play any tag game or football maybe.";
        }
        else{
            cout<<"You can play cricket,football or any game.";
        }
    }
    else{
        cout<<"Inappropriate entery!!";
    }
}