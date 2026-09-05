//first method
// #include<bits/stdc++.h>
// using namespace std;

// void print_pattern(int n){
//     int i,j;
//     for(i=n;i>0;i--){
//         for(j=1;j<n-i+1;j++){
//             cout<<" ";
//         }
//         for(j=1;j<=2*i-1;j++){
//             cout<<"*";
//         }
//         for(j=1;j<n-i+1;j++){
//             cout<<" ";
//         }
        
//         cout<<"\n";
//     }
// }


// int main(){
//     int t;
//     cin>>t;
//     for(int i=1;i<=t;i++){
//         int n;
//         cin>>n;
//         print_pattern(n);
//     }
//     return 0;
// }

//second method
// #include<bits/stdc++.h>
// using namespace std;

// void print_pattern(int n){
//     int i,j;
//     for(i=0;i<n;i++){
//         for(j=0;j<i;j++){
//             cout<<" ";
//         }
//         for(j=2*n-2*i-1;j>0;j--){
//             cout<<"*";
//         }
//         for(j=0;j<i;j++){
//             cout<<" ";
//         }
        
//         cout<<"\n";
//     }
// }


// int main(){
//     int t;
//     cin>>t;
//     for(int i=1;i<=t;i++){
//         int n;
//         cin>>n;
//         print_pattern(n);
//     }
//     return 0;
// }

//method third
#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            cout<<" ";
        }
        for(j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        for(j=0;j<i;j++){
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