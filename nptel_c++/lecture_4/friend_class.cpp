#include<iostream>
using namespace std ;
class A{
    public:
    int data = 28 ;
    A(int d ): data(d){}
    void display(){        cout<< data << endl ;

}
friend class B;
};
class B{
    public :
    void acc(A a ){
        cout<< a.data << endl ;
    }
};
int main(){
    A a(5676) ;
    B b;
    b.acc(a);
   
    return 0 ;
}