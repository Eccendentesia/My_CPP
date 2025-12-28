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
node *inorderpre(node *root){
  root = root->left ;
    while(root->right != NULL){
    root= root->right ;
  }
  return root ;
}


node *deletion(node *p, int data ){
    node *n ; 
  /* if(data == NULL){
        return NULL;
    }*/
    if(p->left == NULL && p->right == NULL){
        delete p ;
        return NULL ;
    }
    if(data < p->data){
       p->left =  deletion(p->left , data );
    }else if(data > p->data ){
       p->right = deletion(p->right , data );
    }else{ 
       n = inorderpre(p);
       p->data = n->data ;
       p->left = deletion(p->left  , n->data );
    }
  return p ;
}



node *insertion_e( node *p , int data ){
if(p==NULL ){
     p = new node ;
      if(p == NULL){
        cout << "Error while alloacting memeory "<< endl ;
     }
     else{
    
    p->data = data ;
    p->left = p->right = NULL ;
   }
}
else{
    if(data < p->data ){
     p->left =   insertion_e(p->left , data );
    }else if(data > p->data ){
     p->left =   insertion_e(p->left , data );
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
    node *p = create(20);
    node *p1 = create(14);
    node *p2 = create(30);
    node *p3= create(10);
    node *p4= create(16);
    node *p5 = create(25);
    node *p6 = create(35);
    node *p7 = create(5);
    node *p8 = create(13);
    node *p9 = create(15);
    node *p10= create(17);
    node *p11= create(24);
    node *p12= create(26);
    node *p13 = create(31);
    node *p14= create(38);
/*
         20         
        /  \
      14    30      
     / \    / \      
    10  16 25  35
   /\   /\ /\  /\
  N  N N  N N N  N
*/
    p->left = p1 ;
    p->right = p2 ;
    p1->left = p3 ;
    p1->right = p4 ;
    p2->left = p5 ;
    p2 ->right = p6;
    p3->left = p7 ;
    p3->right = p8 ;
    p4->left = p9;
    p4->right = p10 ;
    p5->left = p11;
    p5 ->right = p12 ; 
    p6->left = p13;
    p6 ->right = p14 ; 
    inorder(p );
    deletion(p,20);
    cout<<"\n";
    inorder(p);
}