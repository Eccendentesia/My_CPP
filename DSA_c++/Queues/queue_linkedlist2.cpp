#include<iostream>
using namespace std ;
typedef  struct queue{
    int data ; 
    queue *next ;
}q ;
int trav(q *ptr ){
    cout<<"traversing the list "<<endl ;
    while(ptr != NULL){
        cout<<ptr->data <<endl ;
        ptr = ptr->next ;
    }
}
void en_queue (q*&f, q*&r , int data){
    q *n = new q ;
    if(n ==NULL){
        cout<<"Queue Overflow ";
    }else{
        n->data = data ;
        n->next = NULL;
        if(f == NULL){
            f = r = n ;
        }
        else{
            r->next = n ;
            r = n ;
        }
    }
    
}
int  de_queue(q* &f){
    int data = f->data; 
    q *n = f ;
    f = f->next ;
    delete n ;
    return data ;
}
int main(){
    q *front = NULL;
    q *rear =NULL;
    en_queue(front , rear , 29);
    en_queue(front , rear , 20);
    en_queue(front , rear , 40);
    en_queue(front , rear , 68);
    en_queue(front , rear , 54);
    trav(front );
    de_queue(front );
    de_queue(front );
    de_queue(front );
    trav(front);

}