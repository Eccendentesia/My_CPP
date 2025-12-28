#include<iostream>
using namespace std ;
class stack{
    int data , size , top = -1 ;
    int *arr ;
    public :
    stack(int s ) : size(s){
         this->arr = new int(size);
    }
    stack(const stack &s ) : size(s.size){

    }
    ~stack(){
        cout<<"Program is ended" ;
    }
    int push(int data ){
        arr[++top ] = data ;
        return arr[top];
    }
    int pop(){
        int temp = arr[top];
        --top;
        return temp ;
    }
    bool isEmpty(){
        if(top == -1 ){
         return true ;
        }
        return false ;

    }
    void print(){
        while(top != -1 ){
            cout<<arr[top];
            --top;
                }
    }
};
int main(){
    stack s(10 );
    s.push(28);
    s.push(37);
    s.push(9);
    s.push(38);
    s.push(4);
    s.push(3);
    s.push(238);
    s.push(90);
    s.print();
}

