#include<iostream>
using namespace std ;
class node{
    public :
    int data ;
    node * next  ;
  
    node(int d): data (d), next(nullptr){ }
};
class queue{
    node *front  ;
    node *rear ;
    public :
    queue(){ front = rear = nullptr ;};
    void enQueue(int data){
        node *newNode = new node(data) ;
        if(front == nullptr){
            front = rear = newNode ;
            return ;
        }  else{ 
        
        rear->next = newNode ;
        rear = newNode ;
        }
    }
    void deQueue(){
        node *temp ;
        temp = front;
        front = front ->next ;
        delete temp ;
    }
    void display(){
        node* temp = front ;
        while(front != nullptr ){
            cout<<temp ->data <<endl ;
            temp = temp->next ;
        }
    }
};
int main(){
    queue q; 
    q.enQueue(29);
    q.enQueue(38);
    q.display();
    return 0 ;
}