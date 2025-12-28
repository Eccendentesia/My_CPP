#include<iostream>
#include<queue>
using namespace std ;
/*namespace sk{
  
    class node{
        public: 
        int data ;
        node* next ;
        node(int d ): data(d) , next(NULL){};
    };
   
    class stack{
        node* top = NULL ;
       public:
       stack(){};
      ~stack(){ while(top){
        node* temp = top;
        top = top->next ;
        delete temp ;
       }};
      
       void sInsert(int val){
        node* newnode = new node(val);
        if(top == NULL) top = newnode ; 
        else{
            newnode->next = top ;
            top = newnode ; 
        }
       }
       void sdelete(){
        node* temp = top ;
        top = top->next ;
        delete temp ; 
       }
       void strav(){
        node* temp = top ; 
        while(temp){
            cout<<temp->data <<endl ;
            temp= temp->next ;
        }
       }
    };
};*/
namespace ll{
class node {
    public :
    int data ;
    node* next ; 
    node(int d): data(d) , next (NULL){};
};
class linklist{
    node* head = NULL ;
    public:
    linklist(){};
    ~linklist(){
        while(head ){
            node* temp = head ;
            head = head->next ;
            delete temp ; 
        }
    };
    void lInsert(int val ){
        node* newnode = new node(val);
        if(head == NULL) head = newnode ;
        else{
            node* temp  = head ; 
            while(temp->next != NULL ){
                temp = temp->next ; 
            }
            temp->next = newnode ; 
        }
    }
    void lInsert(int val , int index){
         int count = 1;
        node* newnode = new node(val);
        node* temp = head ; 
        if(head == NULL) head = newnode ;
        else{
         
          while(count != index){
              temp  = temp -> next ;
              count++; 
          }
          newnode->next = temp ->next ;
          temp ->next = newnode ;

        }
    }
    void lDelete(){
        node* q = head->next ;
        node* p = head ; 
        while(q->next != NULL){
            q = q->next ;
            p = p->next ;
        }
        p->next = NULL ;
        delete q ; 
    }
    void lDelete(int index){
         node* p = head  ;
         node* q = head->next ;
         int count = 1 ;
          
          while(count != index){
               p = p-> next ;
               q = q->next ;
              count++; 
          }
          p->next = q->next ;
          delete q ; 
    }
    void lTrav(){
        node* temp = head  ;
        while(temp != NULL){
            cout<<temp->data <<endl ;
            temp = temp->next ;
        }
    }
};};
namespace qu{
    class node{
        public:
        int data ;
        node* next ;
        node(int d): data(d) , next(NULL){};
    };
    class _queue{
        node* front = NULL ;
        node* rear = NULL ;
        public:
        _queue(){};
        ~_queue(){
            while(front){
                node* temp = front ;
                front = front->next ;
                delete temp ;
            }
        }
        void qInsert(int data ){
            node* newnode = new node(data);
            if(front == NULL && rear == NULL){
                front = rear = newnode;
            }else{
                rear->next = newnode;
                rear = newnode; 
            }
        }
        void qDelete(){
            node* temp = front ;
            front = front ->next ;
            delete temp ; 
        }
        void qTrav(){
            node* temp = front ;
            while(temp){
                cout<<temp ->data <<endl ;
                temp = temp->next ;
            }
        }
    };
};
namespace tr{
    class node{
        public:
         int data ;
         node* left ;
         node* right ;
         node(int d ): data(d),left(NULL), right(NULL){};

    };
    class tree{
        node* root = NULL ;
        queue <node*> q ; 
         node* inserth(node* rt , int val){
            node* newnode = new node(val);
            if(rt == NULL){
                rt = newnode;
            }else{
                if(val < rt->data) rt->left = inserth(rt->left , val );
                else if(val > rt->data) rt->right = inserth(rt->right , val ); 
            }
            return rt ;
        }
        node* deleteh(node* rt , int val){
            node* temp ; 
               if(rt->left == NULL && rt->right == NULL) {delete rt ;
               return NULL ; 
                }
               if(val < rt->data ) deleteh(rt->left , val );
               else if(val > rt->data)  deleteh(rt->right , val ); 
               else{
                   temp = predec(rt );
                   rt->data = temp->data ;
                   rt->left = deleteh(rt->left , temp->data);
               }
               return rt ; 
        }
        node* predec(node* rt){
            rt = rt->left ;
            while(rt->right){
                rt = rt ->right ; 
            }
            return rt ; 
        }
        void destroy(node* rt){
            if(!rt ) return ;
            destroy(rt->left );
            destroy(rt->right);
            delete rt ;
        }
        public:
      ~tree(){
            destroy(root);
            root = NULL;
        }
        tree(): root(NULL) {
        
      } 
        void tInsert(int val ){
            root = inserth(root , val );
        }
        void tDelete(int val ){
            root = deleteh(root , val ); 
        }
        void tLevel(){
            node* temp = root ;
            
            q.push(temp );
            while(!q.empty()){
                node* current = q.front();
                cout<<current->data <<endl ;
                 q.pop();
                 if(current->left )q.push(current->left ); 
                 if(current->right )q.push(current->right); 
              
            }
        }
    };
}