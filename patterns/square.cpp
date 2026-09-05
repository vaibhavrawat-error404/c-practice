#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    int i;
    int j;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

int main(){
    int n;
    cout<<"Enter the size of square matrix pattern:"<<endl;
    cin>>n;
    pattern(n);
}