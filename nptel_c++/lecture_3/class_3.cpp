#include <iostream >
using namespace std ;
class name {
    int h , w ;
    void sam(int x , int y){
        this -> h = x ;
        this -> w = y ;
        cout<< h*w ;
    }               // this operator stores the memory address  of object n
};

int main(){
    int a = 48 , b=39 ;
    name  n ;    // object n is initialized  
    n.sam(a, b); 
    return 0 ;
}
// state of an object is combined value of all its data members