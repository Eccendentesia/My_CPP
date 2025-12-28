#include<iostream>
using namespace std ;
typedef struct queue{
    int front , rear, size ;
     int *arr;
}qu ;
int isful(qu *p ){
    if(p->rear = p->size -1 ){
        return 1;
    }else{
        return 0 ;
    }
}
int isempty(qu *p ){
    if(p->rear = p->front ){
        return 1;
    }else{
        return 0 ;
    }
}
int main(){
    qu *q = new qu;
    q->front = q->rear = -1 ;
    q->size = 100;
    q->arr = new int [q->size];

    return 0 ;
}