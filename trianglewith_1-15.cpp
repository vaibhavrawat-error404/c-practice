#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n){
    int i,j;
    int m=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<m<<" ";
            m++;
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