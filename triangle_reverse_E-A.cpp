#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n){
    for(int i=0;i<n;i++){
        
        for(char ch='E'-i; ch<='E'; ch++){
            
            cout<<ch<<" ";
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