#include<iostream>
using namespace std ;
class call{
public:
 double h , w;
};
class rect{
public:
  call x;
  call y;
};
int main(){
    call c = {26.2 ,82.28};
    rect r = {{27,72},{37,72}};
    cout << c.h<<endl << c.w<< endl;
    cout << r.x.h<< " "<<r.y.w <<endl;
  

    return 0 ;
}
