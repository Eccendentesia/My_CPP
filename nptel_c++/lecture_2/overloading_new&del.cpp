#include<iostream>
using namespace std ;
void* operator new (size_t n )
{
    int * p = malloc n ;
    return *p ;
}
void* operator delete(void *y ){
    free(y);
}
int main(){
      int *x = new int ;
      *x = 2;
      cout << *x ;
      delete x ;
    return 0 ;
}