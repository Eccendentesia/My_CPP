#include<iostream>
using namespace std ;

void merge(int A[] , int l , int m , int h ){
 int i , j ,k , B[10];
 i = l ;
 j = m+ 1 ;
 k = l ;
 while( i <= m && j <= h ){
    if(A[i] < A[j]){
        B[k] = A[i];
        i++ ;
        k++; 
    }else{
        B[k] = A[j];
        j++ ;
        k++; 
    }

 }
 while(i <= m){
    B[k] = A[i];
        i++ ;
        k++; 
 }
 while(j <= h ){
     B[k] = A[j];
        j++ ;
        k++; 
 }
 for(int x = l ; x <= h ; x++){
    A[x] = B[x]; 
 }

}

void merge_sort(int A[] , int low , int high ){
    int mid ;
    if(low < high ){
        mid = (low + high )/ 2 ; 
        merge_sort(A , low , mid );
        merge_sort(A , mid+ 1 , high ); 
        merge(A, low , mid , high ); 

    }
}

int main(){
    int A[10] = {23,53,224,24,56,76,35,32,29,90};
    
    merge_sort(A , 0 , 9 );
    for(int i = 0 ; i <= 9 ; i++ ){
        cout<<A[i] <<"   "; 
    }

}