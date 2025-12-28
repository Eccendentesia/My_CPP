#include<iostream>
#include "class_5.h"
using namespace std ;
int main(){
    stack s = {10};
     int arr[10 ] = {1,2,3,4,5,6,7,8,9,10};
     s.push(arr[1]);
     s.print();
}