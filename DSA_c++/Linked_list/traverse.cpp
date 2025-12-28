#include<iostream >
using namespace std;
typedef struct node {
  int data ;
    struct node *next;
} node;
int data(node* head){
 int count= 0 ;
 while(head != NULL){
    count+= 1 ; 
    head = head -> next ;

 }
 cout << count ;
}
int main(){
     node *head  = new node();
     node *third = new node() ;
     node *second  = new node();

    head = (struct node* )malloc(sizeof(struct node));
    second = (struct node* )malloc(sizeof(struct node));
    third = (struct node* )malloc(sizeof(struct node));
    head -> data = 47;
    head -> next =second  ;
    second -> data = 37;
    second -> next = third ;
    third -> data = 988 ;
    third-> next  = NULL;
    cout<<"Linked List is: " ;
    data(head);
   
}