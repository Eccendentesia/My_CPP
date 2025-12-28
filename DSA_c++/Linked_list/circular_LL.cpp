#include <iostream>
using namespace std ;
struct node {
    int data ;
    struct node *next ;
};
//traversal in circular linked list
void traverse(struct node* ptr ){
    struct node *p= ptr ; 
do{
    cout<<p->data <<endl ;
    p = p -> next ;
}
while(p != ptr );
}
//insertion at the beginnig  in circular linked list 
struct node *insertion(struct node*head , int data ){
    struct node *ptr ,*p;
    ptr = (struct node*)malloc(sizeof (struct node));
    p = head ;
    while(p->next != head ){
        p = p ->next;
    }
    ptr ->data = data ;
    ptr->next = head ;
    p->next = ptr ;
    head = ptr ;
   
    traverse(head);
}

//deletion is same as singly linked list 
struct node *insertion(struct node*head , int data , int index){
    struct node *p , *n ;
    int i = 1 ;
    n = (struct node *)malloc(sizeof(struct node));
    p = head  ;
    while (i!= index-1){
        p = p ->next  ;
        i++;
    }
    n->data = data;
    n->next = p->next ;
    p->next = n ;
    traverse(head );
}
    int main(){
    struct node *head ;
    struct node *second ;
    struct node *third ;

    head = (struct node* )malloc(sizeof(struct node));
    second = (struct node* )malloc(sizeof(struct node));
    third = (struct node* )malloc(sizeof(struct node));
    head -> data = 47;
    head -> next =second  ;
    second -> data = 37;
    second -> next = third ;
    third -> data = 988 ;
    third-> next  = head ;
    cout<<"Linked List is: " ;
    traverse(head);
    cout<<"After insertion 1 "<<endl ;
    insertion(head , 56);
     cout<<"After insertion 2"<<endl ;
    insertion(head , 67 ,3);
    return 0 ;
  
}