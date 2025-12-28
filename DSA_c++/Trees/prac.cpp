#include<iostream>
#include<queue>
using namespace std ;
class node{
    public:
    int data ;
    node* left ;
    node* right ; 
    node(int d ): data(d) , left(NULL), right(NULL){};
};
class tree{
    node* root = NULL;
    queue<node*> q ; 
    public:
    tree(){};
    node* in_help(node* r , int val ){
        node* newnode = new node(val );
        if(r == NULL) r = newnode ;
        else if(val < r->data) r->left = in_help(r->left , val );
        else if(val > r->data ) r->right = in_help(r->right , val );
       return r ; 
    }
    int  maxnum(node* rt){
        int val , rval , lval , maxn=0 ;
        
        if(rt){
            val = rt->data;
        rval = maxnum(rt->right );
        lval = maxnum(rt->left);
        if(lval > rval ) maxn = lval ;
        else maxn = rval ;

        if(val > maxn) maxn = val ;
        }
        return maxn ; 
    }
    void maxint(){
        int num = maxnum(root);
        cout<<"Max num is " << num ;
    }
    void insert(int val ){
        root = in_help(root , val ); 
    }
    void inorder(node* rt ){
        node* newnode = rt ;
        if(newnode){
            inorder(newnode->left);
            cout<< newnode->data <<endl ;
            inorder(newnode->right ); 
        }
    }
    void in(){
        inorder(root); 
    }
    void level(){
        int level = 0  ; 
        node*temp = root ;
        q.push(temp);
        q.push(NULL);
        while(!q.empty()){
            node* current = q.front();
            q.pop();
             if(current == NULL){
                if(!q.empty()){
                cout << endl ;
                q.push(NULL);
                 level++;
                continue ; 
                } else break; 
            }
             cout<< current->data;
            if(current->left) q.push(current ->left);
            if(current->right )q.push(current->right); 
        }
        cout<<"level of the tree "<< level <<endl ; 
    }
}; 
int main(){
    tree t ;
    t.insert(10 ); 
    t.insert(30 );
    t.insert(40 );
    t.insert(17 );
    t.insert(12 );
    t.insert(100 );
    t.maxint() ;
    cout<<"Level order trav" <<endl ;
    t.level();
    return 0 ;
};