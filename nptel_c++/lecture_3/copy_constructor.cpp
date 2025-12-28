#include<iostream>
using namespace std ;
class Complex{
    double re , im ;
    public :
     Complex (double x , double y ): re(x) , im(y){
         cout<< "Constructor Invoked "<< endl ;
         print();
     }
     Complex(const Complex &c) :re(c.re ) , im(c.im){
        cout<< "Copy Costructor is being Invoked "<< endl ;
        print();
     }
     ~Complex(){
     cout<<"Destructor being called "<< endl ;
     print();
     }
 void print(){
    cout<<"| "<<re <<" +  j"<< im <<" |"<< endl ; 
 }
};
int main(){
    Complex c = {3.2 , 23.23}  , 
    c1(c ) , 
    c2 = c ;
  //  c.print();
   // c1.print();
   // c2.print();
 

}