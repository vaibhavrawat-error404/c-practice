#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n){
    int i,j;
    for(i=1;i<=n;i++){
        int start=1;
        
        if(i%2!=0) start=1;
        else start=0; 

        for(int j=1;j<=i;j++){
            cout<<start;
            start=1-start;
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