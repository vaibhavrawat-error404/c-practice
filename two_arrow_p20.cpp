#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n){
    int i,j;
    int space=2*n-2;    
    for(i=1;i<=2*n-1;i++){
    int stars=i;
    if(i>n) stars=2*n-i;

    //star
    for(j=1;j<=stars;j++){
        cout<<"*";
        }
    
    //space
    for(j=0;j<=space;j++){
        cout<<" ";
    }
    //star
    for(j=1;j<=stars;j++){
        cout<<"*";
        }
    cout<<"\n";
    if(i<n) space -=2;
    else space +=2;
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