#include<iostream>
using namespace std ;
typedef struct queue{         //queue initialisation 
    int front , rear, size ;
     int *arr;
} queue;
int trav(queue *p ){          //queue tarversal 
    int i = p->front +1 ;
    while(i <= p->rear ){
        cout<<p->arr[i]<<endl ;
        i = i + 1;
    }
}
int isful(queue *p ){        // queue isful operation 
    if(p->rear == p->size -1 ){
        return 1;
    }else{
        return 0 ;
    }
}
int isempty(queue *p ){         //queue isempty opeartion 
    if(p->rear == p->front ){
        return 1;
    }else{
        return 0 ;
    }
}
void enqueue(queue *p, int val ){       //Insertion or enqueue operation 
    if(isful(p)){
        cout << "Queue if full"<<endl ;
    }
else{
    p->rear = p->rear +1 ;
    p->arr[p->rear]= val ;
}
}
int de_queue(queue *p){           // Deletion or dequeue operation 
    int x = -1 ;
    if(isempty(p)){
        cout << "Queue underflow "<<endl ;
    }
else{
    x = p->arr[p->front + 1 ];
    p->front = p->front + 1 ;
}
return x;

}
int main(){
    queue q ;
    int i =0 ;
    q.front = -1;
    q.rear = -1 ;
    q.size = 10;
    q.arr = new int [q.size];
   enqueue(&q , 89);
   enqueue(&q , 9);
   enqueue(&q , 8);
   enqueue(&q , 90);
   enqueue(&q , 45);
   enqueue(&q , 57);
   trav(&q );
   cout << "DeQueued element 1 is :"<< de_queue(&q)<<endl ;
   cout << "DeQueued element 2 is :"<< de_queue(&q)<<endl ;
   cout << "DeQueued element 3 is :"<< de_queue(&q)<<endl ;
   cout << "DeQueued element 4 is :"<< de_queue(&q)<<endl ;
   cout << "DeQueued element 5 is :"<< de_queue(&q)<<endl ;
   enqueue(&q , 9);
   enqueue(&q , 8);
   enqueue(&q , 90);
   enqueue(&q , 45);
   enqueue(&q , 57);
  // cout <<"After Dequeue :"<<endl ;
  trav(&q );
  delete []q.arr;
   return 0 ;
}
// In this queue memory is not used efficiently 
//since after dequeue , front is moved forward therefore 