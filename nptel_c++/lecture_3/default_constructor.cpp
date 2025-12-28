#include<iostream>
using namespace std ;

//this is example of default Contructor 
class Complex{
    private :
     double re , im  ;
    public :
    void print(){
        cout<< "|"<<re <<" +  j"<<im <<" |"<<endl ;
    }
    void set(double x ,double  y ){
        this->re = x ;
        this->im = y ;
            }
};
int main(){
Complex c ;
c.print();
c.set(2.0 , 32);
c.print();
}