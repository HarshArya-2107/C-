#include<iostream>

using  namespace std;

int main() {
 
 int n;
cout<<"Enter Number :"<<endl;
cin>>n; 

 if(n%3==0) {
    cout<<"Fizz";
 }
  else if(n%5==0) {
    cout<<"Buzz";
 }
 else if(n%3==0 && n%5==0) {
    cout<<"Bang";
 }
 else {
    cout<<"Sad";
 }
 }

