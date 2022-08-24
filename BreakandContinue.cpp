#include<iostream>
using namespace std;
int main() {

    // given a number is prime or not 
    int num;
    cin>>num;
    for(int i=2;i<num;i++) {
        if(num%i ==0){
            cout<<"Not prime";
        break;
        }
    }
    cout<<"Prime";
}