#include<iostream >
using namespace std ;
typedef struct stack {
  int top , size ;
  int *arr ;
} st ;
bool isempty(stack *a ){
    if(a->top == -1  ){
        return 1;  
    }
    else{
     return 0 ;
     }
}
// isfull function
bool isful(stack *b){
    if(b->top == b->size-1){
        return 1 ; 
    }
    else {
        return 0 ;
    }
}
// push operation function
void push(stack *c , int data){
    if(isful(c)){   
    cout << " Stack overflow  "<< endl ;
      }
      else{
     ++c->top ;
     c->arr[c->top ]= data ; 
      }
}
// pop operation function
int pop(stack *d ){
    if(isempty(d)){
        cout << "Satck Underflow "<<endl ;
  
      }
    else {
       int v = d->arr[d->top];
       d->top -- ;
       return v ;
    }
}
int to(st *p ){
    cout<< p->arr[p->top];
}
int stackbottom(st *p ){
    cout << p->arr[0];
}
int main(){
    st *s = new  st;
    s->top = -1;
    s->size = 10 ;
     s->arr = new int(sizeof(st )*sizeof(int));
     push(s, 46);
     push(s, 9);
     push(s, 90);
     push(s, 23);
     push(s,25 );
     to(s);
     stackbottom(s);
    return 0;
}