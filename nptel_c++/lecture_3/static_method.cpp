#include<iostream>
using namespace std ;
class name{
   
    public :
    name(int d ): data(d){}
    int data ;
    static void display(){
       cout<<"Hello i'm Ravi"<<endl;
    }
   static void di( name & n){cout<< n.data << endl ;}
    
};

int main(){
    name::display();
    name n(28);
    n.di(n);
    return 0 ;
}