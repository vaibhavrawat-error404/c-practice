#include<bits/stdc++.h>
using namespace std;

//using the logical operators
void print_pattern(int n){
    int i,j;   
    for(i=0;i<2*n-1;i++){
        for(j=0;j<2*n-1;j++){
            int top=i;
            int left=j;
            int right=2*n-2-j;
            int down=2*n-2-i;
            cout<<(n-min(min(top,down),min(right,left)))<<" ";
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