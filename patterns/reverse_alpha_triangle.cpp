#include<bits/stdc++.h>
using namespace std;

void print_pattern_m1(int n){
    int i,j;
    for(i=n;i>=1;i--){
        for(char j='A';j<'A'+i;j++){
            cout<<j;
        }
        cout<<"\n";

    }  
}
void print_pattern_m2(int n){
    int i,j;
    for(i=1;i<=n;i++){
        for(char j='A';j<'A'+(n-i-1);j++){
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
        print_pattern_m1(n);

    }
    return 0;
}