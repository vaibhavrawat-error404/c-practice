#include<bits/stdc++.h>
using namespace std;

void print_pattern1(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(j=0;j<n-i-1;j++){
            cout<<" ";
        } 
        cout<<"\n";
    }
}
void print_pattern2(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            cout<<" ";
        }
        for(j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        for(j=0;j<i;j++){
            cout<<" ";
        }
        
        cout<<"\n";
    }
}


int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        print_pattern1(n);
        print_pattern2(n);
    }
    return 0;
}