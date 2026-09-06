#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n){
    int i,j,k;
    int space=2*(n-1);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<j;
        }
        for(j=1;j<=space;j++){
            cout<<" ";
        }
        for(j=i;j>=1;j--){
            cout<<j;
        }
        cout<<"\n";
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