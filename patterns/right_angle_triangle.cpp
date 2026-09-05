#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        print_pattern(n);
    }
    return 0;
}