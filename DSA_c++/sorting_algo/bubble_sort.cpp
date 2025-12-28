#include<iostream>
using namespace std ;
void bubble_sort(int A[]  , int n){
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < i ; j++){
            if(A[j]  > A[j + 1]){
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp; 
            }
        }
    }
}
void print_arr(int A[] , int n){
    for(int i = 0 ; i < n ; i++){
        cout<<A[i] << " "; 
    }
}
int main(){
    int B[] = {8 ,9,34 , 97 ,985 ,70};
    int n = 6 ;
    print_arr(B , n);
    bubble_sort(B , n );
    cout<<"After Bubble Sort "<<endl ; 
    print_arr(B, n );

}