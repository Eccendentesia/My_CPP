#include <iostream>
using namespace std ;
typedef struct stack{
    int size , top , *arr;
} stack ;
// isEmpty function
bool isempty(stack *a ){
    return (a->top == -1 )? 1:0 ;
}
// isfull function
bool isful(stack *b){
   return (b->top == b->size )? 1:0;
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
 
 // to get top element 
void  peek(stack *p , int i ){
if(isempty(p)){
    cout << "Stack is empty"<<endl ;
}

else{
    cout <<"Stack element :" <<p->arr[p->top-i+1]<<endl;
    
}
}
void tp(stack *s){
int i = s->top  ;
if(i < 0 ){
    cout << " empty stack" << endl ;
}
else{
    cout << s->arr[s->top];
}
}
//print all elements in the stack 
void print(stack *p){
    int i = 0 ;
   while(i <= p->top  ){
        cout<< p->arr[i]<<endl ;
        i++;
    }
}

int main(){
    
    stack *s = new stack ;
    s->top = -1 ;
    s->size = 10 ;
    s->arr = new int(s->size);
    push( s, 23 );
    push( s, 3 );
    push( s, 2 );
    push( s, 87 );
    push( s, 80 );
    push( s, 48 );
    push( s, 39 );
    push( s, 23 );
    push( s, 3 );
    push( s, 2 );

  print(s);
   if( isful(s)){
    cout << "Stack full "<<endl ;
   }
   cout <<"Peek element "<<endl ;
   peek(s , 1);
   tp(s);
   pop(s);
    pop(s);
     pop(s);
      pop(s);
       pop(s);

    cout<<"After pop "<<endl ;
    print(s);

    delete []s->arr;
    delete s ;
    return 0;
}