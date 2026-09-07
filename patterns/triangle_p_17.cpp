#include<bits/stdc++.h>
using namespace std;

void print_pattern1(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(j=0;j<=i;j++){

            cout<<char('A'+j);
            
        }
            for(j=i-1;j>=0;j--){
                cout<<char('A'+j);
            }

        for(j=0;j<n-i-1;j++){
            cout<<" ";
        }
        
        cout<<"\n";
    }
}

void print_pattern(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            cout<<" ";
        }
        int breakpoint = (2*i+1)/2;
        char ch = 'A';
        for(j=1;j<=2*i+1;j++){
            cout<<ch;
            if(j<=breakpoint){
                ch++;
            }
            else
            {
                ch--;
            }
        }
        for(j=0;j<n-i-1;j++){
            cout<<" ";
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