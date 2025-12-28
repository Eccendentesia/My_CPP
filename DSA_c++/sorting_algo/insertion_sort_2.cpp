#include<iostream>
using namespace std ;
void  insertion_sort(int *a , int n ){
    for(int i = 0 ; i < n  ; i++){
        int key , j ; 
        key = a[i]; 
        j = i - 1 ;
        while(a[j] > key && j >= 0 ){
          a[j + 1 ] = a[j] ; 
          j-- ; 
        }
        a[j+1] = key ; 
    }
   
}
int main(){
   int arr[6] = {23 , 24 , 24 ,24 ,2 , 247 } ; 
   int n = 6; 
   insertion_sort(arr , n ); 
   for(int i =  0 ; i < n ; i ++){
  cout<< arr[i] << endl ; 

   }
    return 0 ;

}