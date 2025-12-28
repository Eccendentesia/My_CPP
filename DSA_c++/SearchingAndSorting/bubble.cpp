#include<iostream>
using namespace std ;
void bubble(int *a , int div){
   
    for(int i= 0 ; i < div - 1  ; i++){
        for(int j = 0 ; j < div - i - 1  ; j++){
            if(a[j] > a[j+1]){
            int temp = a[j];
            a[j] = a[j+1]; 
            a[j+1] = temp ; 
            }
        }
    }
    for(int i=0 ; i < div - 1 ; i++){
        cout<<a[i] <<endl ; 
    }
}
int main(){
    int a[] = {23, 4 , 332,42,4 ,2 , 24,}; 
    int n = sizeof(a)/ sizeof(a[0]) ;
    bubble(a , n );
    return 0 ; 
}