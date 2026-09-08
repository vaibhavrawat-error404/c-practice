#include<bits/stdc++.h>
using namespace std;

//using the logical operators
void print_pattern(int n){
    int i,j;   
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
        if(i==1 || i==n || j==1 || j==n){
            cout<<"* ";
        }
        else{
                cout<<"  ";
            }
        }
            cout<<"\n";
        }
}

//using if-else/conditional statements
void print_pattern1(int n){
    int i,j,k;   
    for(i=1;i<=n;i++){
        if(i==1)
        for(j=1;j<=n;j++)
        {
            cout<<"* "; 
        }  
        else if(i==n){
        for(j=1;j<=n;j++)
        {
            cout<<"* "; 
        }  
        }
        else{
            for(k=1;k<=n;k++){
                if(k==1)
                cout<<"* ";
                else if(k==n)
                cout<<"* ";
                else{
                    cout<<"  ";
                }
            }
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