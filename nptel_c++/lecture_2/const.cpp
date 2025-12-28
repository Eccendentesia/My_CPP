#include<iostream>
using namespace std ;
#define max 100
#define square(x) (x)*(x)
inline int sq(int x ){ return x*x ;}
int main(){
    int n = 19;
    const int *p  = &n ;         // n is constant 
   // int const *p = &n ;          // *p is constant
    int b =23;
  cout<<  square(b+1);
  cout<<sq(b+1);
}