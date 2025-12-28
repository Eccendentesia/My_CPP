#include<iostream>
using namespace std ;
class stack{
 public : 
 //Constructor 
 stack(){                                                        
    cout << " hello , contructor is called "<< endl;
 }
 //Destructor
 ~stack(){
    cout<< "Destructor is being called "<<endl;
 }
};
int main(){
    stack s ;
    cout << "hello i'm Ravi "<<endl;
}