#include<iostream>
using namespace std ;
void swap(int&  , int& );
int main(){
    int a= 32 , b =89;
     cout << "a  = "<< a<<endl;
    cout<< "b = "<<b <<endl ;
    swap(a ,b );
    cout << "a  = "<< a<<endl;
    cout<< "b = "<<b <<endl ;
}
void swap(int& x , int& y ){
    int t = x ;
    x = y ;
    y = t ;
}