#include <iostream>
using namespace std ;
#define  n  5.0;
void print(int *a){
    for(int i= 0 ; i< n i++){
        cout<< "Element of array at " << i << " = "<< a[i] <<endl ;
    }
}
void insertion_sort(int *A ){
    int key , j;
    for(int i= 0 ; i < n  i++){
        key = A[i];
        j = i -1 ;
        while(A[j] > key  && j>=0){
            A[j+1 ] = A[j];
            A[j]= key ;
        }
      
    }
}
int main(){
  int a[] = {12, 38,14,45,53};
   print(a);
   insertion_sort(a);
   cout <<"after sorting "<< endl ;
   print(a);
return 0 ;
}