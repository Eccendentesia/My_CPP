#include<iostream>
using namespace std ;
class A{
    public :
     int data ;
     A(int d ): data(d){}
     A(const A& a ): data(a.data){}
     ~A(){
        cout <<"Destructed the class ";
     }
 void display(){
    cout<<"Hello ji ,I hate you XD"<<endl ;
    cout<<data <<endl ;
 }  
};
class B : public A {
    public :
    B(int d): A(d){}

};
int main(){
    B b(37);
    b.display();
    return 0 ;
}