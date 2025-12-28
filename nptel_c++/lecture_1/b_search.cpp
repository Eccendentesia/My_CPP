#include<iostream>
#include<algorithm>
using namespace std ;

int main(){
    int data[6] = {297,93,21,34,53,54} ;
    int k  = 27;

    if( binary_7search(data , data+6,k)){
        cout<<"found";
    }else{
        cout<<"False";
    }
}