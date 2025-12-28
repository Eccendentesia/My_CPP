#include<iostream>
using namespace std ;
class stack{
    private :
      int size , top = - 1;
      int *arr ;
    public :
    stack (int x ): size(x){};

     void print(){
        cout<< size ;
             }
    int push(int x ){
        arr[++this->top ] = x ;
        return arr[++this->top];
    }
    void data(){
        cout<< arr[this->top];
       
    }
   
};
int main(){
    int num[5 ] = {2,3,4,3,1} ;
    stack s(10 );
    s.print();
    s.push(num[0]);
    s.data();
   
}