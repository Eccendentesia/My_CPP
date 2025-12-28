#include<iostream>
using namespace std ;

void print_arr(int A[] , int n ){
    
    for(int i = 0 ; i < n  ; i++){
        cout<<A[i] << " "; 
    }
    cout<< endl ; 
} 
void selection(int A[] , int n  ){
    for(int i = 0 ; i < n  ; i ++){
        int key =i ;
        
        for(int j = 1 + i ; j < n  ; j++){
            if(A[j] < A[i]){
                 key = j ;
            }
        }
        int temp = A[key] ;
         A[key] = A[i] ;
        A[i] = temp ; 
        
        print_arr(A , n ); 
    }
}

int main(){
    int B[] = {8 ,9,34 , 97 ,985 ,70};
    int n = 6 ;
    print_arr(B  , n );
    selection(B , n );
    cout<<"After Bubble Sort "<<endl ; 
    print_arr(B , n );

}