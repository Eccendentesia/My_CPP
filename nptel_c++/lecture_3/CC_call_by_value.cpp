#include<iostream>
using namespace std;
class complex{
     int x , y ;
     public :
      complex(int a , int b ): x(a),y(b ){
        cout<<"contructor being called "<<endl ;
      }
      complex(const complex &c ): x(c.x) ,y(c.y){
        cout<<"copy constructor being called "<< endl ;
      };
    ~complex(){
        cout<<" Destructor being called "<< endl ;
    }
   
};
 void display(complex c ){
        cout<<"display called "<<endl ;
    }

int main(){
    complex c(2,3);
    display(c);
}