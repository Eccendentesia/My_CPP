#include<iostream>
#include<stack>
using namespace std ;
class node{
    public:
    int data ;
    node* left ;
    node* right ;
    node(int d): data(d), right(NULL) , left(NULL) {};
};
class tree{
    node* root ;
    stack<node*> s ; 
    public :
    node* inserth(node* r , int val){
        node* newnode = new node(val);
        if(r == NULL) r = newnode ;
        else if(val < r ->data) r->left = inserth(r->left , val );
        else if(val > r->data ) r->right = inserth(r->right , val );
        else cout<<"Wrong number hain bhai wapis check kar "<<endl ;
        
        return r ; 
    }
    void insert(int value ){
        root = inserth(root , value );
    }
    void inorder(){
        node* temp = root ;
        while(1){
        while(temp){
             cout<<"data : "<<temp->data ; 
              s.push(temp);
              temp = temp->left ;           
        }
        if(s.empty() ) break  ;
           s.pop();
    }
    }
};
