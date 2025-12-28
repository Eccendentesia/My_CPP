#include<iostream>
using namespace std ;
class node {
    public:
    int data ;
    node *left ;
    node * right ;
    node(int d): data(d){ 
        right = nullptr ;
        left = nullptr ;
    };

};
class Tree{
    node *root  = nullptr ;
    public :
    Tree(){}
    
    void insertion( int d ){
        node *newNode = new node(d);
        if(root == nullptr  ) root = newNode ;
        else insertNode(root , newNode);
    }
    void insertNode(node* currentNode , node* newNode){
        if(currentNode->data < newNode->data){
            if(currentNode->right == nullptr ){
                 currentNode->right = newNode ;
            }else{
                insertNode(currentNode->right, newNode);
            }
        }else{
             if(currentNode->left == nullptr ){
                 currentNode->left = newNode ;
            }else{
                insertNode(currentNode->left , newNode);
            }
        }
    }
    void trav(){ traverse(root )  ; };
    void traverse(node *root ){
        if(root){
            traverse(root->left);
            root->data;
            traverse(root->right);
        }
    };


};