#include<iostream>
using namespace std ;
void print(int *a ){
    for(int i =0 ; i < sizeof(a ) ; i++){
        cout<<"Array Element "<<i+1 << " = " <<a[i]<<endl ;
    }
    
    }
void bubble_sort(int *a){
    int temp ;
    for(int i= 0 ; i < sizeof(a); i++){
        for(int j=0 ; j<i ; j++){
            if(a[j] > a[j+1]){
           temp = a[j];
           a[j] = a[j+1];
           a[j+1] = temp ;
        }
        }
    }
}
int main(){
    int a[]= {1,242,4,24,54,29,28,19, 49, 42} ;
    bubble_sort(a);
    print(a);
    return 0 ;
}