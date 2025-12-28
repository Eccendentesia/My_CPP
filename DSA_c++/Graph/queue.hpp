#include<iostream>
namespace Queue{
    class node{
        public : 
        int data ;
        node * next ;
        node(int d ): data(d) , next(NULL) {};

    };
    class queue{
        node * rear = NULL ;
        node* front = NULL ;
        public:
        queue(){};
        void insert(int data){
            node* newnode = new node(data); 
           if(rear == NULL && front == NULL){
                rear = front = newnode ; 
           }else{
            rear->next = newnode ;
            newnode = rear ;
           }
        }
        void deletion(){
            if(rear == NULL && front == NULL) return ; 
            else{
                node* temp = front ;
                front = front->next ;
                delete temp ;
            }
        }
            void display(){
                node* temp = front ;

                while(temp){
                    std::cout<<temp->data ;
                    temp  = temp->next ; 
                }
            }
        };
    }; 
