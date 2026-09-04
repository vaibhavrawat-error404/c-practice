#include<bits/stdc++.h>
using namespace std;

int arraysum(int arr[],int size){
    int i;
    int sum=0;
    for(i=0;i<size;i+=1){
        sum+=arr[i];
        
    }
    return sum;
}
int main(){
    int j=0;
    int arr[10];
    int size;
    
    for(j=0;j<10;j+=1){
        cin>>arr[j];
    }
   
    int final_sum=arraysum(arr, 10);
    cout<<"The final sum of all array elements :"<<final_sum<<"\n";
    return 0;
}