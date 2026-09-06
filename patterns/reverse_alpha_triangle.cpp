#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n){
    int i,j,k;
    int space=2*(n-1);
    for(i=n;i>=1;i--){
        for(char j='A';j<'A'+i;j++){
            cout<<j;
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