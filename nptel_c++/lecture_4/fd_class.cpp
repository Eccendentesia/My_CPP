#include<iostream>
using namespace std ;
class hello {
    int data ;
    float data1  ;
    public :
      hello(int d , float f): data(d),data1(f){}
      ~hello(){cout<<"destroyed"<<endl;}
      friend class hi ;

};
class hi{
    public :
    void display(hello a ){
        cout<<"Data from A "<<endl ;
        cout <<a.data << endl ;

    }
    ~hi(){cout<<"Destroyed 2nd "<<endl ;}
};
int main(){
    hello  a(67, 288);
    hi b ;
    b.display(a);
    return 0 ;
}