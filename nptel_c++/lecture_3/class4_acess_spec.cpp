#include <iostream >
#include "default.cpp"
using namespace std;
inline int sq(int x ){coux*x*x ;};

class name {
    private :
     int h , w;
    public:
    void sum(int x , int y){
         h = x ;
         w = y ;
        cout<< h*w <<endl;
    }           
};

int main(){
    int a = 48 , b=39 ;
    my_func fun;
    name  n ;    
    n.sum(a, b); 
    fun.funv(a);
    sq(a);
   return 0 ;
}
