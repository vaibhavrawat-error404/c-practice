#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n){
    char ch='A';
    int i,j;
    for(i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch;     
        }
        ch++;
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