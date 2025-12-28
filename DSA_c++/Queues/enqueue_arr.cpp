#include<iostream>
using namespace std ;
typedef struct queue{
    int front , rear, size ;
     int *arr;
}qu ;
int isful(qu *p ){
    if(p->rear == p->size -1 ){
        return 1;
    }else{
        return 0 ;
    }
}
int isempty(qu *p ){
    if(p->rear == p->front ){
        return 1;
    }else{
        return 0 ;
    }
}
void enqueue(qu *p, int val ){
    if(isful(p)){
        cout << "Queue if full"<<endl ;
    }
else{
    p->rear = p->rear +1 ;
    p->arr[p->rear]= val ;
}
}
int main(){
    qu *q = new qu;
    int i =0 ;
    q->front = q->rear = -1 ;
    q->size = 100;
    q->arr = new int [q->size];
    enqueue(q , 89);
     enqueue(q , 9);
      enqueue(q , 8);
       enqueue(q , 90);
        enqueue(q , 45);
         enqueue(q , 12);
          enqueue(q , 98);
          while(i < 7){
            cout <<q->arr[i]<<endl ;
            i++;
          }
    delete q ;
    return 0 ;
}