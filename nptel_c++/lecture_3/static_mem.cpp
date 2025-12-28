#include<iostream>
using namespace std ;
class name{
   static int x;
   public :
    name(){
     x++ ;  
     cout<<x<<endl; 
    }
    ~name(){
        x--;
        cout<<x <<endl;
    }
};
int name::x = 0 ;
int main(){
    name n ,n1 , n2, n3 ,n4, n5 , n6 ,n7 ,n8 , n9 ;
}