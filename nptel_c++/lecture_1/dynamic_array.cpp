#include<iostream>
#include<vector>
using namespace std ;
#define max 10 
void array(){
    vector<int>arr ;
   cout<<sizeof(arr);
}

int main(){
    vector<int> arr(max);
    for(int i = 0 ; i < max; i ++){
        arr[i] = i+200;
            }
    for(int i= 0 ; i<max ; i++){
        cout<<arr[i]<<endl;
    }
array();

}