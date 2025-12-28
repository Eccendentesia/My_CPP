#include<iostream>
using namespace std ;
int main(){
    int  age  ; 
    cout <<"Enter your age :  "; 
    cin>> age ; 
    try{
        if(age > 18 ){
            cout << " Can enter " <<endl ; 
        }else {
            throw age ; 
        }
    }catch(...){
        cout << "You are not allowed to enter " << endl ;
    }
}