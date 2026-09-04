
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
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int age;
//     cin>>age;
//     if(age>18 && age<=100){
//         cout<<"you are an adult";
//     }
//     else if(age<18 && age>13){
//         cout<<"you are a teen";
//     }
//     else if(age<13){
//         cout<<"you are a child";
//     }
//     else if(age>100){
//         cout<<"you are dead for sure";
//     }

//     return 0;
// }
// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     string name;
//     int marks;
//     getline(cin,name);
//     cout<<"Your name is:"<<name<<"\n";

//     cout<<"Enter your marks to assess your grades:\n";
//     cin>>marks;

//     if(marks==0){
//         cout<<"You are done!!!";
//     }
//     if(marks<25){
//         cout<<"F";
//     }
//     else if(marks<=44){
//         cout<<"E";
//     }
//     else if(marks<=49){
//         cout<<"D";
//     }
//     else if(marks<=59){
//         cout<<"C";
//     }
//     else if(marks<=79){
//         cout<<"B";
//     }
//     else{
//         cout<<"A";
//     }
// }

//nested if-else
// #include<bits/stdc++.h>

// using namespace std;
// int main(){
//     int p=0;
//     cout<<"Enter 1 if weather is Cloudy else 2:\n";
//     cin>>p;
//     if(p==1){
//         cout<<"Stay Home, weather is not appropriate to play.\n";
//     }
//     else if(p==2){
//         cout<<"You can play outside\nEnter the number of childrens in park\n";
//         cin>>p;
//         if(p<2){
//             cout<<"Do exersize cause there aren't enough player for group games.";
//         }
//         else if(p<11){
//             cout<<"Play any tag game or football maybe.";
//         }
//         else{
//             cout<<"You can play cricket,football or any game.";
//         }
//     }
//     else{
//         cout<<"Inappropriate entery!!";
//     }
// }
