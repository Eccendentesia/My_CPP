#include<iostream>
#include<vector>
#include<queue>
using namespace std ;
typedef class node{
    public :
      int data ;
      node* left;
      node* right ;
      node(int d ): data(d) ,left(NULL),right(NULL){}; 
} node ;
class tree {
    queue<node*> q ;
    node* root = NULL ;
    public :
    tree(){};
    void insert(int val){
         root = insert_help(root , val);
    }
    node* insert_help(node* rt , int val ){
        node* newnode = new node(val);
        if(!rt) rt = newnode ;
        else if(val < rt->data) {rt->left = insert_help(rt->left, val) ;}
        else if(val > rt->data){ rt->right = insert_help(rt->right, val);}
        else cout << "Value already exists in the tree." << endl;
        return rt ;
    }
    void deletenode(int val ){
        
    }
   
    
    node* inorder(node* rt){
        if(rt ){
            inorder(rt->left);
            cout <<rt->data << endl;
            inorder(rt->right);
        }
    }
    void in(){
        inorder(root);
    }
    node* level(){
        node*temp = root ;
        q.push(temp);
         while(!q.empty()){
            node*current = q.front();
            cout<< current->data << endl ; 
            q.pop();
            if(current->left) q.push(current->left);
            if(current->right) q.push(current->right);
         }
    }

};
static int index = -1 ;
node *build(vector<int> order){
    index++;
    if(order[index] == -1) return NULL;
    node* root = new node(order[index]);
    root->left = build(order);
    root->right = build(order);
    return root ; 
}
int main(){
    tree t ;
    t.insert(10);
    t.insert(5);
    t.insert(15);   
    t.insert(3);
    t.insert(7);
    t.insert(12);
    t.in();
 //   t.level();
    cout<<"After deletion"<< endl ;
    t.deletenode(15);
    t.in();
    return 0;
}