#include "class_5.h"
#include<iostream>
using namespace std ;
int stack::push(int data){
   arr[++top ] = data ;
}
void stack::print(){
   cout << arr[top];
}