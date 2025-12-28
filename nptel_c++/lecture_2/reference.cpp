//different name but having same value and location
#include<iostream>
using namespace std ;
int main(){
    int a = 79;
    int &b = a ;       // b reference to a , b stores same value and location as a
    cout<< "a = "<<a<<endl;
    cout<<"b = "<<b ;
}