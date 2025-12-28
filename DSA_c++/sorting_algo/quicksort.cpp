#include<iostream>
using namespace std ;
void print_arr(int A[] , int n ){
    
    for(int i = 0 ; i < n  ; i++){
        cout<<A[i] << " "; 
    }
    cout<< endl ; 
} 
int  partition(int A[] , int low , int high){
    int i , j ;
    i = low + 1 ;
    j = high ; 
    int pivot = A[low];
    do{
        while(A[i] <= pivot && i <= high - 1){
            i++; 
        }
        while(A[j] > pivot){
            j-- ; 
        }
       if(i < j ){
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp ;
       }
    }while(i < j ); 
     int temp = A[j];
        A[j] = A[low];
        A[low] = temp ; 

    return j ; 
}
void quick_sort(int A[] , int low , int high){
    int pivotindex ; 
    if(low < high){
        pivotindex = partition(A , low , high);
        quick_sort(A, low , pivotindex - 1);
        quick_sort(A, pivotindex + 1 , high );

    }
}

int main(){
    int B[] = {8 ,9,34 , 97 ,985 ,70};
    int n = 6 ;
    print_arr(B  , n );
    quick_sort(B ,0 ,  n - 1 );
    cout<<"After Quick Sort "<<endl ; 
    print_arr(B , n );

}