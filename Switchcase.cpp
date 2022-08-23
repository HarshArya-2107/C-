#include<iostream>

using namespace std;

int main() {
    int n;
    cout<<"Enter The Number :"<<endl;
    cin>>n;

    switch (n%3)
    {
    case 0:
        cout<<"Hello";
        break;
    case 1:
        cout<<"Sad";
        break;
    case 2:
        cout<<"Close";
        break;        

    default:
        break;
    }
}