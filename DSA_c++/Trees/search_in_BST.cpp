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
node *seac(node *p , int key ){
    if (p== NULL){
        cout <<"NULL ";
    }
    if(p->data == key ){
  cout <<"KEY found ";
    }else if(p->data < key ){
      return    seac(p->right, key ) ;
             }else{
            return  seac(p->left, key) ;
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
    seac(p , 11);
    return 0 ;
}

// BT = binary tree 
