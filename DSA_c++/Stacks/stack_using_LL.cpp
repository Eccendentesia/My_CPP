#include<iostream>
using namespace std ;
typedef struct node {
    int data ;
    struct node *next ;
} node ;
void traverse(node *top){
    while(top != NULL){
        cout << top->data << endl ;
        top =top ->next ;
    }
}
//isFull 
int isfull(node *top){
    node *n = new node  ;
     if(n == NULL){
        cout << "Stack Overflow "<<endl ;
        return 1 ; 
        delete n ; }
    else{
        return 0 ;
    }
       
}
int isempty(node *top){
 if(top == NULL){
       return 1 ;
 }
 else {return 0 ;}
}
//push 
node *push_1(node *top, int data ){
if (isfull(top)){
    cout<<"Stack overflow ";
}
else{
   node *n = new node ;
   n->data = data ;
   n->next = top;
   top = n;
   return top ;
}
}
//pop 
node *pop_e(node *top ){
if (isempty(top)){
  cout<<"Stack Underflow "<< endl ;
}
else{
   node *x = top ;
   top =top->next ;
   delete x ;
   return   top;
}
}
int peek(node *top , int index ){
    node *ptr = top ;
    for(int i=0 ; (i<index-1 && ptr!= NULL);i++){
        ptr =ptr->next ;
    }
    if(ptr != NULL){
        cout << ptr->data ;
    }
    else{
        return -1;
    }

}
int main(){
    node *top = NULL ;
    top = push_1(top , 56);
    top = push_1(top , 30);
    top = push_1(top , 70);
    traverse(top);
    top = pop_e(top);
    cout<<"After pop ";
    traverse(top);
    peek(top , 2);
      return 0 ;
}