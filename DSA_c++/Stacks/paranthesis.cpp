#include <iostream>
#include<Stack>

using namespace std ;
typedef struct node {
    int top , size ; 
    char *arr ;
} node  ;
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
   }
   else{
      char a = top->arr[top->top];
      top->top--;
      return a ; 
   }
}

node *match_e(node *top, string s ){
 for(int i = 0 ; i < s.length() ;i++ ){
   if(s[i] == '(' || s[i] == '{' || s[i] == '['){
        push_e(top ,'(');
   }
   else if(s[i] == ')' || s[i] == '}' || s[i] == ']'){
      if(isempty(top)){
         return 0 ;
      }
      else{
         pop_e(top);
      }}
}
return top ;
}
int main(){
node *top = new node ;
top->top = -1 ;
top->size = 100 ;
top->arr  = new char[top->size ];
string s = "7+(747)((*){376792+399842)}" ;
if(match_e(top, s)){
   cout << "match found ";
}
else{
   cout << "Not found ";
}
return 0 ;
}