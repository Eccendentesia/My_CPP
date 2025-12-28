#include<iostream>   
using namespace std ;
typedef struct stack {
    int top , size ;
    char  *arr ;
} node ;
int isfull(node *top){
   if(top->top == top->size ){
      return 1 ;
   }
   else{
      return 0;
}
}  
int isempty(node *top){
   if(top->top == -1){
     return 1 ;
   }
   else{
      return 0 ;
   }
} 
node *push_e(node *top , char s ){
if(isfull(top)){
   cout <<"Stack overflow "<<endl ;
}
else{
   ++top->top ;
   top->arr[top->top]= s ;
   return top ;
}
}
char pop_e(node *top){
   if(isempty(top)){
      cout<<"Stack underflow \n ";
      return '\0';
   }
   else{
      char a = top->arr[top->top];
      top->top--;
      return a ; 
   }
}
int prec(char s){
   if(s== '[' || s==']' || s=='{' || s=='}' || s=='(' || s==')'){
      return 3;
   }
  else if(s=='*' || s=='/'){
    return 2 ;
   } 
   else if(s =='+' || s=='-'){
    return 1 ;
   }else{
    return 0 ;
   }
}
int is_operator(char s){
   if(s=='+' || s=='-'|| s=='*' || s=='/')return 1 ;
   else return 0 ;
   
}
char *in_to_post(string s ){
   node *newnode = new node ;
   newnode->size = 100 ;
   newnode->top = -1 ;
   newnode->arr = new char(sizeof(newnode->size ));
    char *pos = new char[s.length()+1] ;
     int i = 0 ,  j = 0 ;
     while(s[i] != '\0'){
        if(!is_operator(s[i])){
            pos[j] = s[i];
            i++ , j++;
        }
        else{
            if(prec(s[i]) > prec(newnode->arr[newnode->top])){
              push_e(newnode , s[i]);
              i++;
             }
             else if(prec(s[i]) < prec(newnode->arr[newnode->top])){
               while(newnode->top != -1){
                 pos[j] = pop_e(newnode);
                 j++;
               }
               push_e(newnode, s[i]);
               i++;
             }
          
}}
   while(!isempty(newnode)){
        pos[j]=pop_e(newnode);
        j++;
   }   
pos[j] = '\0';
int k = 0 ;
while(k != s.length()){
   cout << pos[k] ;
   k++;
}
delete []pos ;
delete []newnode->arr;
}
int main(){
    string s = "3+2*8+2-32";
    in_to_post(s );
   return 0 ;
}