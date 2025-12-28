#include<iostream>
#include "stack.hpp"
//using namespace sk ; 
using namespace ll ;
using namespace std ;
using namespace qu ;
using namespace tr ; 
int main(){
  //  stack s ; 
  //  linklist l ; 
  // _queue q ;
    tree t ;
    t.tInsert(10);
    t.tInsert(5);
    t.tInsert(15);
    t.tInsert(3);
    t.tInsert(7);
    t.tInsert(12);
    t.tInsert(18);
    cout << "Level order traversal of the tree:" << endl;
    t.tLevel(); 
    t.tDelete(5);
    cout << "After deleting 5, level order traversal:" << endl; 
    t.tLevel();
}