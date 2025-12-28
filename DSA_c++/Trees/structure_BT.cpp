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
int main(){
    node *p = create(78);
    node *p1 = create(29);
    node *p2 = create(94);
    return 0 ;
}

// BT = binary tree 