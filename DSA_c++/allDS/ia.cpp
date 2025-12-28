#include<iostream>
using namespace std ;
#define max 10 

typedef struct node{
    int data ;
    int *arr ;
    int top ;
    int size ;
} node ;
node* create(int s ){
    node *n = new node ;
    n->size = s ;
    n->top = -1 ;
    n->arr = new int(n->size );
    return n ;
}
node * insertion(node* s , int data){
    if(s->top == s->size-1){
        cout<<"Stack Overflow "<<endl ; 
    }else{
        s->arr[++s->top] = data ; 
    }
    return s ; 
}
node* deletion(node * s){
    if(s->top == -1){
        cout<<"Stack Underflow "<<endl ; 
    }else {
        int t = s->arr[s->top];
        --s->top ; 
      
    }
    return s ; 
}
void trav(node * s){
   for(int i  =     0 ; i <= s->top ; i++){
    cout<<s->arr[i] << endl ;
   }

}
int main(){
    node* s = create(10 );
    s = insertion(s , 19 ); 
     s = insertion(s , 1 ); 
      s = insertion(s , 109 ); 
       s = insertion(s , 10 ); 
     trav(s); 
    return 0 ;
}