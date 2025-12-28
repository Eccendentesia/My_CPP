#include<iostream>
using namespace std;
typedef struct node {
     int data ;
    struct node *next;
} node ;
void traverse(struct node* ptr ){
 while (ptr != NULL) {
 cout<< ptr-> data <<endl; ;
 ptr = ptr ->next  ;
    }
}
int main(){
     node *head = new node ;
      node *second = new node ;
       node *third = new node ;
    head -> data = 47;
    head -> next =second  ;
    second -> data = 37;
    second -> next = third ;
    third -> data = 988 ;
    third-> next  = NULL;
    cout<<"Linked List is: " ;
    traverse(head);
    return 0 ;
  
}
