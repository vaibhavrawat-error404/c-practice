// //method-1
// #include<bits/stdc++.h>
// using namespace std;

// void print_pattern(int n){
//     int i,j;
//     for(i=0;i<n;i++){
//         for(j=0;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<"\n";             
//     }
//     for(i=0;i<n-1;i++){
//         for(j=1;j<n-i;j++){
//             cout<<"*";
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

//method-2
#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n){
    int i,j;
    for(i=1;i<=2*n-1;i++){
        int arrow =i;
        if(i>n){
            arrow=2*n-i;
        }
        for(j=1;j<=arrow;j++){
            cout<<"*";
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