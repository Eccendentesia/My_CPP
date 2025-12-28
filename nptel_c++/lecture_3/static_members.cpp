#include<iostream>
using namespace std ;
class name{
    static int data ;
    public :
    void get(){
        data = 10;
    }
  static  void print(){
        data +=10 ;
        cout<<data ;

    }

};
int name::data = 20 ;

    int main(){
   name n1 , n2 ;
 //  n1.get(), n2.get();
   n1.print() , n2.print();
 
      return 0 ;
}