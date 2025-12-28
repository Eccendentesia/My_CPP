#include<iostream>
using namespace std ;
class myclass{
    public :
    int a , b ;
   
    void sum(int a_1 , int b_1){
      this->a = a_1 ;
      this->b = b_1 ;
      cout<< a+b ;
    }
};
int sum_2(const myclass &t ){
    cout <<t.a << t.b ;

}
int main(){
    myclass me = {36, 29} ;
    sum_2(me);
    cout<< me.a << me.b ;
}