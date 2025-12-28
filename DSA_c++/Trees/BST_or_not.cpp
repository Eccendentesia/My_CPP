#include<iostream>
using namespace std ;
typedef struct node{
    int data ;
    node *left ;
    node * right ;
} node;
node *create(int data ){
    node *n = new node ;
    n->data = data ;
    n->left = NULL;
    n->right = NULL ;
    return n ;

}
int isbst(node *p ){
     node *prev = NULL;

    if(p != NULL){
       if(!isbst(p->left)){
          return 0 ;
       }
       if(prev!= NULL  && p->data <= prev->data ){
        return 0 ;

       }
       prev = p ;
       return isbst(p->right );
    }else{
        return 1;
    }
   
}
int main(){
    node *p = create(15);
    node *p1 = create(10);
    node *p2 = create(26);
    node *p3= create(8);
    node *p4= create(11);
    node *p5 = create(22);
    node *p6 = create(27);
   
/*
         15         
        /  \
      10    26      
     / \    / \      
    8   11 22  27
   /\   /\ /\  /\
  N  N N  N N N  N
*/
    p->left = p1 ;
    p->right = p2 ;
    p1->left = p3 ;
    p1->right = p4 ;
    p2->left = p5 ;
    p2 ->right = p6 ;
    if(isbst(p)){
        cout <<"Hello ";
    }else{
        cout <<" Bye ";
    }
    return 0 ;
}

// BT = binary tree 
