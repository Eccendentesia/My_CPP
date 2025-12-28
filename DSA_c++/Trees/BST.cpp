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
void preOrder(node *a ){
    if(a != NULL){
    cout<<a->data <<" " ;
    preOrder(a->left );
    preOrder(a->right );
    }
    
}
void postOrder(node *a ){
    if(a != NULL){
    postOrder(a->left );
    postOrder(a->right );
    cout<<a->data <<" ";
    }

}void inOrder(node *a ){
    if(a != NULL){
    inOrder(a->left );
    cout <<a->data <<" " ;
    inOrder(a->right );
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
         78         
        /  \
      29    94      
      /\    /\      
    17  19 9  4
*/
    p->left = p1 ;
    p->right = p2 ;
    p1->left = p3 ;
    p1->right = p4 ;
    p2->left = p5 ;
    p2 ->right = p6 ;
    preOrder(p);
    cout<<"\n";
    postOrder(p);
    cout<<"\n";
    inOrder(p);
    return 0 ;
}

// BT = binary tree 
