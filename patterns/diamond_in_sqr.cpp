#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n){
    int i,j;
    int space=0;
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){        // was n-i-1 → removed the -1
            cout<<"*";
        }
        for(j=0;j<space;j++){
            cout<<" ";
        }
        for(j=0;j<n-i;j++){        // was n-i-1 → removed the -1
            cout<<"*";
        }
        cout<<endl;
        space+=2;
    }
    space=2*n-2;                   // was hardcoded 8 → now scales with n
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<"*";
        }
        for(j=0;j<space;j++){
            cout<<" ";
        }
        for(j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
        space-=2;
    }
}

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        print_pattern(n);
    }
    return 0;
}