#include<iostream>
using namespace std ;
typedef struct node{
    int data ;
    node* left ;
    node* right ;
} node ;
node* create(int data){
    node* newNode = new node ;
    newNode->data = data ;
    newNode->left = nullptr ;
    newNode->right = nullptr ;

}

void insertionNode(node*root , node* newNode){
    if(newNode->data < root->data ){
        if(root->left == nullptr){
            root->left = newNode ;
        }else{
            insertionNode(root->left , newNode);
        }
    }else{
         if(root->right == nullptr){
            root->right = newNode ;
        }else{
            insertionNode(root->right , newNode);
        }
    }
}
void insert(node *root , int data ){
   node *newNode =  create(data);
   if(root == nullptr ) root = newNode ;
   else insertionNode(root , newNode);
   
}
void traverse(node* root){
        if(root){
            traverse(root->left );
            root->data;
            traverse(root->right);
        }
    }
int main(){
    node* root = create(38);
    
}