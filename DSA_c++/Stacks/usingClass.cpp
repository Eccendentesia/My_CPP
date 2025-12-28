#include<iostream>
using namespace std ;
class stack{
    int top , size , * arr ;
    public :
    stack(int s ): size(s), arr(new int(size)) {};
        ~stack() { delete[] arr; }
        void push(int data){
            if(top == size - 1) {
                cout << "Stack overflow" << endl;
            } else {
                arr[++top] = data;
            }
        }
};