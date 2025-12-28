#include<iostream>
using namespace std ;
void print(int *a ){
    for(int i =0 ; i < sizeof(a) ; i++){
        cout<<"Array Element "<<i+1 << " = " <<a[i]<<endl ;
    }
    cout<<sizeof(a);
}
void insertion_sort(int *a){
    int key , j ;
    for(int i = 0 ;i < sizeof(a) ;i++){
        key = a[i];
        j = i - 1;
        while((a[j] > key) && j >= 0 ){
            a[j+1] = a[j];
            j-- ; 
        }
        a[j+1] = key ;
    }
}
int main(){
    int a[]= {1,242,4,24,54,29,28,19, 49, 42} ;

    print(a);
    cout<<" \n After sorting " <<endl ;
    insertion_sort(a);
    print(a);
    return 0 ;
}