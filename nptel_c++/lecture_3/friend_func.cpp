#include<iostream>
using namespace std;
class Complex{
    
    public :
    int data ;
    Complex(int d ):data(d){}
    Complex(const Complex& a):data(a.data){}
    ~Complex(){
        cout<<"Destructed"<<endl;
    }
    friend void display(const Complex& a){}
};
void display(Complex& a ){
   cout<<a.data ;
}
int main(){
    Complex c = {29} ;
     display(c);
}