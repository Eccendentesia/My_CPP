#include<iostream>
using namespace std ;
void selection(int *A){
    int min , j , t , temp ; 
for(int i = 0 ; i < 10 ; i++){
    t = i;
    for(int j= i+1 ; j< 10; j++){
        if(A[j] < A[t]){
            t = j ;
                    } }
    temp = A[i];
    A[i]= A[t];
    A[t ]= temp ;
}

}
void print(int *a){
    for(int i= 0 ; i< 10 ; i++){
        cout<< "Element of array at " << i << " = "<< a[i] <<endl ;
    }
}
int main(){
    int a[]= {1,3,242,5,24,31,24,21,43,90};
    selection(a);
    print(a);
}