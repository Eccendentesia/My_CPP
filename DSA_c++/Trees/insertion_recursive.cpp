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
node *insertion_e( node *p , int data ){
if(p == NULL){
    p = new node ;
    if(p==NULL){
        cout<<"Memory error ";
    }else{
       p = create(data);
    }
}else{
    if(data < p->data ){
        p->left = insertion_e(p->left , data );
    }else if(data > p->data ){
        p->right = insertion_e(p->right , data );
    }else{
        cout<<"Error ";
    }
}
return p ;
}
int inorder(node *p ){
    if(p != NULL){
        inorder(p->left);
        cout<<p->data <<" ";
        inorder(p->right);
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
    insertion_e(p, 83);
    insertion_e(p, 16);
    insertion_e(p, 9);
    insertion_e(p, 12);
    insertion_e(p, 23);
    insertion_e(p, 28);
    insertion_e(p, 7);
    insertion_e(p, 83);
    inorder(p );
}