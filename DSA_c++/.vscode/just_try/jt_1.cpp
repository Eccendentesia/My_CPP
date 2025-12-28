#include<iostream>
using namespace std ;
#include<vector>
int main(){
int arr[10];
for(int i=0 ; i < sizeof(arr) ; i++){
arr[i] = i+1;    
}
for(int i = 0 ; i< sizeof(arr) ; i++){
  
    arr[i]+=arr[i-1];
    cout<<arr[i] <<endl;

}}