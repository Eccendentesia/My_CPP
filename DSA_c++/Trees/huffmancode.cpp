#include<iostream>
using namespace std ;
class node{
    public:
    int data ;
    node *left ;
    node *right ;
    node(int d):data(d){ left = right = NULL ; }
    node(){left = right = NULL ; }
};
class tree{
    node* root = NULL ;

   node* insert_help(node* root , int data){
    if(!root)  {
         root = new node(data); 
    }else{
    if(root->data > data ){root->left = insert_help(root->left , data)  ; }
    else {
     root->right = insert_help(root->right , data)  ; 
    }
}
     return root ; 
   }
   node *delete_help(node*root , int data ){
     if(!root) return NULL ; 
     if(root->data > data ){root->left = delete_help(root->left , data) ; }
     else if(root->data < data ){
        root->right = delete_help(root->right , data ); 
     }else{
         if (!root->left && !root->right) {
                delete root;
                return NULL;
            }

            // Case 2: One child
            if (!root->left) {
                node* temp = root->right;
                delete root;
                return temp;
            }
            if (!root->right) {
                node* temp = root->left;
                delete root;
                return temp;
            }
        node* n = predec(root );
        root->data = n->data ;
        root->left = delete_help(root->left , n->data );

     }
    return root ; 
   }
    public:
    void inorder(node* root){
        if(root){
           inorder(root->left) ; 
            cout<<root->data <<endl ;
           inorder(root->right ); 
        }
    }
     void preorder(node* root){
        if(root){
            cout<<root->data <<endl ;
           preorder(root->left) ; 
           preorder(root->right ); 
        }
    }
     void postorder(node* root){
        if(root){
           postorder(root->left) ; 
           postorder(root->right );
            cout<<root->data <<endl ; 
        }
    }
    node* predec(node* rt ){
        node* newleft = rt->left ;
        while(newleft->right != NULL){
            newleft = newleft->right ; 
        }
        return newleft ; 
    }
     node* succes(node* rt ){
        node* newleft = rt->right ;
        while(newleft->left != NULL){
            newleft = newleft->left ; 
        }
        return newleft; 
    }
    void insert(int data ){
        root = insert_help(root , data ); 
    }
    void delete_node(int data){
        root= delete_help(root , data ); 
    }
};
