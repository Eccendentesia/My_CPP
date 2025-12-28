#include<iostream>
using namespace std ;
class Complex {
int r , i ;
public :
  Complex(int re , int img ):r(re),i(img){}
  Complex(const Complex &a):r(a.r),i(a.i){
    cout<<"Real :"<< r <<endl;
    cout<<"Real 1 :"<< a.r <<endl;
    cout<<"Img :"<< i <<endl;
    cout<<"Img :"<< a.i <<endl;
  }
  ~Complex(){
    cout<<"Destructed"<<endl;
  }
};
int main(){
    Complex c(32,32), c1(c) , c2 = c ;
}