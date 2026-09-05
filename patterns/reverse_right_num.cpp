#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i+1;j++){
            cout<<j<<" ";
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
        print_pattern(n);
    }
    return 0;
}