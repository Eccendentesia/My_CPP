#include<iostream>
using namespace std ;
class name_1{
    
    protected :
    int data ;
    public :
   name_1(int d ): data(d){cout<<"Base class constructor"<<endl ;}
   name_1(const name_1 & n ): data(n.data){cout<<"Copy constructor "<<endl ;}
   ~name_1(){cout<<"Base class Destructor "<< endl ;}
};
class name_2 : public name_1{
  public :
 name_2(int d): name_1(d){cout<< "derived  class constructor"<<endl ;}  
~name_2(){cout<<"Derived class destructor"<<endl ;}
void display(){
    cout<<"Data : "<< data << endl ;
}
};
int main(){
    name_2 n = {28 };

}