//drawback is solved in circular queue 
#include<iostream>
using namespace std ;
typedef struct c_queue{
    int front , rear , size ;
    int *arr ;
} queue ;
int trav(queue *p ){          //queue tarversal 
    int i = p->front ;
    while(i < p->rear ){
        cout<<p->arr[i]<<endl ;
        i = (i+1)%p->size;
    }
} 
void enqueue(queue *p , int data ){
    if((p->rear +1)%p->size  == p->front){
     cout <<"Queue overflow \n";
    }else{
        p->arr[p->rear] = data ;
        p->rear = (p->rear + 1 )% p->size ;
    }
}
int dequeue(queue *p){
    int x = -1 ;
    if(p->rear == p->front){
        cout<<"Queue underflow \n";
    }else{
        x = p->arr[p->front ];
         p->front = (p->front +1 )%p->size ;
         return x ;
    }
  
}
int main(){
    int i =0 ;
    queue q ;
    q.front = q.rear = 0 ;
    q.size = 10 ;
    q.arr = new int[q.size ];
    enqueue(&q , 18);
    enqueue(&q , 33);
    enqueue(&q , 40);
    enqueue(&q , 8);
    enqueue(&q , 93);
    enqueue(&q , 20);
    trav(&q );
    cout<<"After dequeue : \n";
    cout<<"DeQueued element is : " << dequeue(&q )<<endl;
   trav(&q );
    return 0 ;
    delete []q.arr;
}