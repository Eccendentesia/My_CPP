#include<iostream>
using namespace std ;
class node{
  public:
  int data ;
  int height ; 
  node* left ;
  node* right ;
  node(int d): data(d), height(1) {left = NULL ; right = NULL ; } 

};
class AVL{
   node *root = NULL ;
   node* destroy(node* r){
    if(!r)  return  NULL ;
    destroy(r->left);
    destroy(r->right);
    delete r ;; 
   }
  int getheight(node* rt){
    if(rt == NULL) return 0 ;
    else return rt->height;
  }
  int getBalance(node* rt){
    if(rt == NULL ) return 0 ;
    else return getheight(rt->left) - getheight(rt->right) ;  
  }
  node* leftRotate(node* rt){
    node* x = rt->right ;
    node* y = x ->left ;
   
    x->left = rt ;
    rt->right = y ;
    x->height  = max(getheight(x->left ), getheight(x->right)) + 1 ;
    rt->height  = max(getheight(rt->left ), getheight(rt->right)) + 1 ;
    
    return x;
  }
    node* rightRotate(node* rt){
    node* x = rt->left ;
    node* y = x ->right ;
   
    x->right = rt ;
    rt->left = y ;
    x->height  = max(getheight(x->left ), getheight(x->right)) + 1 ;
    rt->height  = max(getheight(rt->left ), getheight(rt->right)) + 1 ;
    
    return x ;
  }
  node* inserth(node* rt, int val){
    if(rt== NULL) return new node(val);
    if(val < rt->data ) rt->left = inserth(rt->left , val ); 
    else if(val > rt->data ) rt->right = inserth(rt->right , val );
    else cout<<"Data Exist "<<endl ;

    int bf = getBalance(rt);

    if(bf > 1 && val < rt->left->data ) return rightRotate(rt) ; 
    if(bf < 1 && val > rt->right->data ) return leftRotate(rt) ; 
    if(bf > 1 && val > rt->left->data ) {
        rt->left = leftRotate(rt->left ) ; 
        return rightRotate(rt) ;
    } 
    if(bf < 1 && val < rt->right->data ){
        rt->right = rightRotate(rt->right);
         return leftRotate(rt) ; 
       }
    return rt ; 
  }
    void trav(node* rt){
        if(rt){
            trav(rt->left) ;
            cout<<rt->data <<endl ;
            trav(rt->right); 
          }
    }
   public:
   AVL(){};
   ~AVL(){
    root = destroy(root) ; 
}
    
    void insert(int val ){
        root = inserth(root , val ); 
    }
    void traverse(){
       trav(root) ; 
    }
};
int main(){
    AVL avl;
    avl.insert(10);
    avl.insert(20);
    avl.insert(30);
    avl.insert(40);
    avl.insert(50);
    avl.insert(25);
    avl.traverse();
    // Add more operations as needed to test the AVL tree
    return 0;
}