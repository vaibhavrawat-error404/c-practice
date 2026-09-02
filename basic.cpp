
//basic skeleton of c++ program
// #include<iostream>
// using namespace std;
// int main(){
//     int a=20;
//     cout<< a;

//     return 0;
// }

//printing an output
// #include<iostream>
// int main()
// {
//     std::cout<<"hey"<< " "<<"raj"<<std::endl;
//     return 0;
// }

//using namespace std; and taking input
// #include<iostream>
// using namespace std;
// int main()
// {
//     int x,y,z;
//     cin >>x>>y>>z;
//     cout <<x+y+z;

//     return 0;
// }

//taking string input and printing them
// #include<iostream>
// using namespace std;
// int main()
// {
//     string s1,s2;
//     cin>>s1>>s2;
//     cout<<s1<<" "<<s2;
//     return 0;
// }

//used bits/stdc++.h and getline() funtion
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     getline(cin,s);
//     cout<<s;
// }

//if-else conditions
#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(age>18 && age<=100){
        cout<<"you are an adult";
    }
    else if(age<18 && age>13){
        cout<<"you are a teen";
    }
    else if(age<13){
        cout<<"you are a child";
    }
    else if(age>100){
        cout<<"you are dead for sure";
    }

    return 0;
}