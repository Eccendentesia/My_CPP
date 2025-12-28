#include<iostream>
using namespace std ;
template <typename T > 
class Vector3{
    private : 
    T a , b , c ; 
    public : 
    Vector3(T a , T b , T c): a(a), b(b) , c(c){};
    void add(){
        cout<< a + b + c << endl  ; 
    } 
}; 
int main(){
    Vector3<int> v( 1 , 2, 3); 
    v.add(); 
}; 