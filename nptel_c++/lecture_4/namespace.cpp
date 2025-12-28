//code for namespace 
#include <iostream>
using namespace std;
namespace first_space{
    int d = 797;
    void func(){
        cout<<"Inside first_space"<<endl;
    }
}
namespace second_space{
    void func1(){
        cout<<"Inside second_space"<<endl;
    }
class test{

    int data = 3894;
    float d1 = 380;
    public :
     test(int d , float f ): data(d) , d1(f){};
     void display(){
      cout<< " data :"<< data << endl ;
     }
    };
}
