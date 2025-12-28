#include<iostream>
using namespace std ;
class Complex{
    int real , img ;
    public :
    Complex(int x , int y ): real(x ), img(y){
        cout<<"Constructor "<<endl ;
    }
    Complex(){
        cout<<"Constructor " <<endl ;
    }
    Complex(const Complex&c ): real(c.real), img(c.img ) {
        cout<< "Copy Constructor "<< endl ;
    }
    ~Complex(){
        cout<<"Destructor "<<endl ;
    }
};
int main(){
Complex c = {12, 23} , c2 = c; 

}
