#include<iostream>
using namespace std ;
struct node {
    int data ;
    struct node *next ;
};
typedef struct queue{
    struct node *front ;
    struct node *rear;

} queue ;
queue  *enqueue(queue *q , int data ){
    struct node *n = new struct node;
    if(n==NULL){
        cout <<"Queue overflow ";
    }else{
        n->data = data ;
        n->next = NULL ;
        if(q->front ==NULL){
            q->front = q->rear = n ;
        }else{
            q->rear->next = n ;
            q->rear = n ;
        }
    }
    return q ;
}
int  de_queue(queue *q ){
    struct node *n ;
    int data = -1 ;
    if(q->front == q->rear ){
        cout<<"Queue Underflow ";
    }else{
        data = q->front ->data ;
     n = q->front ;
     q->front = q->front->next  ;
    }
    delete  n  ;
    return data ;
}
void preOrder(struct node *q ){
    cout<<"After Insertion or Deletion"<<endl ;
    struct node *n = q;
   while(n != NULL){
    cout <<n ->data <<endl;
    n  = n ->next ;
 
   }
}
int main(){
    queue *q = new queue ;
    q->front = NULL ;
    q->rear= NULL ;
    enqueue(q, 78);
    enqueue(q, 117);
    enqueue(q,10);
    enqueue(q,89);  
    preOrder(q->front );
    de_queue(q);
    preOrder(q->front);
}